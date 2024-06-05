module lieat_exu_mul(
  input              clk,
  input              rstn,

  input              mul_i_valid,
  output             mul_i_ready,
  input              mul_i_signed1,
  input              mul_i_signed2,
  input  [`XLEN-1:0] mul_i_multiplicand,
  input  [`XLEN-1:0] mul_i_multiplier,

  output             mul_o_valid,
  input              mul_o_ready,
  output [`XLEN-1:0] mul_o_resh,
  output [`XLEN-1:0] mul_o_resl
);
localparam STATE_IDLE = 6'b000001;//quot_neg rem_neg
localparam STATE_PRE  = 6'b000010;
localparam STATE_CYC0 = 6'b000100;
localparam STATE_CYC1 = 6'b001000;
localparam STATE_CYC2 = 6'b010000;
localparam STATE_POS  = 6'b100000;

localparam STATE_IDLE_BIT = 0;
localparam STATE_PRE_BIT  = 1;
localparam STATE_CYC0_BIT = 2;
localparam STATE_CYC1_BIT = 3;
localparam STATE_CYC2_BIT = 4;
localparam STATE_POS_BIT  = 5;
// ================================================================================================================================================
// STATE Ctrl Logic
// ================================================================================================================================================
wire mul_i_sh = mul_i_valid & mul_i_ready;
wire mul_o_sh = mul_o_valid & mul_o_ready;
assign mul_i_ready = state_r[STATE_IDLE_BIT];
assign mul_o_valid = state_r[STATE_POS_BIT];
reg [5:0] state_r;
reg [5:0] state_nxt;

always @(*) begin
  case(state_r)
    STATE_IDLE:state_nxt = mul_i_sh ? (mul_i_zero ? STATE_POS : STATE_PRE) : STATE_IDLE;
    STATE_PRE :state_nxt = STATE_CYC0;
    STATE_CYC0:state_nxt = STATE_CYC1;
    STATE_CYC1:state_nxt = STATE_CYC2;
    STATE_CYC2:state_nxt = STATE_POS ;
    STATE_POS :state_nxt = mul_o_sh   ? STATE_IDLE : STATE_POS;
    default:state_nxt = STATE_IDLE;
  endcase
end
lieat_general_dffrd #(
  .DW(6),
  .DEFAULT(STATE_IDLE)
) mul_state(clk,rstn,state_nxt,state_r);
// ================================================================================================================================================
// PRE PREPARE
// ================================================================================================================================================
wire mul_i_zero = (mul_i_multiplicand == 32'h0) | (mul_i_multiplier == 32'h0);
wire multiplicand_neg = mul_i_signed1 & mul_i_multiplicand[`XLEN-1];
wire multiplier_neg   = mul_i_signed2 & mul_i_multiplier[`XLEN-1];
wire [`XLEN-1:0] multiplicand_inv = -mul_i_multiplicand;
wire [`XLEN-1:0] multiplier_inv   = -mul_i_multiplier;

wire res_neg;
wire res_neg_ena = mul_i_sh;
wire res_neg_nxt = multiplicand_neg ^ multiplier_neg;
lieat_general_dfflr #(1) res_neg_dff(clk,rstn,res_neg_ena,res_neg_nxt,res_neg);

wire abs_ena = mul_i_sh;
wire [`XLEN-1:0] multiplicand_abs;
wire [`XLEN-1:0] multiplier_abs;
wire [`XLEN-1:0] multiplicand_abs_nxt = multiplicand_neg ? multiplicand_inv : mul_i_multiplicand;
wire [`XLEN-1:0] multiplier_abs_nxt   = multiplier_neg   ? multiplier_inv   : mul_i_multiplier;
lieat_general_dfflr #(`XLEN) multiplicand_abs_dff(clk,rstn,abs_ena,multiplicand_abs_nxt,multiplicand_abs);
lieat_general_dfflr #(`XLEN) multiplier_abs_dff(clk,rstn,abs_ena,multiplier_abs_nxt,multiplier_abs);//generate booth
// ================================================================================================================================================
// CYCLE
// ================================================================================================================================================
wire [`XLEN+2:0] booth_gene = {2'b0,multiplier_abs,1'b0};
wire [8:0] booth_sel = ({9{state_r[STATE_PRE_BIT ]}} & booth_gene[32:24]) |
                       ({9{state_r[STATE_CYC0_BIT]}} & booth_gene[24:16]) |
                       ({9{state_r[STATE_CYC1_BIT]}} & booth_gene[16: 8]) |
                       ({9{state_r[STATE_CYC2_BIT]}} & booth_gene[ 8: 0]);

wire [2:0] booth_bits_0 = booth_sel[2:0];
wire [2:0] booth_bits_1 = booth_sel[4:2];
wire [2:0] booth_bits_2 = booth_sel[6:4];
wire [2:0] booth_bits_3 = booth_sel[8:6];
wire [2:0] booth_bits_extend = booth_gene[34:32];

wire [`XLEN*2-1:0] partial_product_0 = ({`XLEN*2{(booth_bits_0 == 3'b001) | (booth_bits_0 == 3'b010)}} & {32'h0,multiplicand_abs}) | 
                                       ({`XLEN*2{(booth_bits_0 == 3'b101) | (booth_bits_0 == 3'b110)}} & {32'hffffffff,(-multiplicand_abs)}) | 
                                       ({`XLEN*2{(booth_bits_0 == 3'b011)                           }} & {31'b0,multiplicand_abs,1'b0}) | 
                                       ({`XLEN*2{(booth_bits_0 == 3'b100)                           }} & {31'h7fffffff,(-multiplicand_abs),1'b0});
wire [`XLEN*2-1:0] partial_product_1 = ({`XLEN*2{(booth_bits_1 == 3'b001) | (booth_bits_1 == 3'b010)}} & {32'h0,multiplicand_abs}) | 
                                       ({`XLEN*2{(booth_bits_1 == 3'b101) | (booth_bits_1 == 3'b110)}} & {32'hffffffff,(-multiplicand_abs)}) | 
                                       ({`XLEN*2{(booth_bits_1 == 3'b011)                           }} & {31'b0,multiplicand_abs,1'b0}) | 
                                       ({`XLEN*2{(booth_bits_1 == 3'b100)                           }} & {31'h7fffffff,(-multiplicand_abs),1'b0});
wire [`XLEN*2-1:0] partial_product_2 = ({`XLEN*2{(booth_bits_2 == 3'b001) | (booth_bits_2 == 3'b010)}} & {32'h0,multiplicand_abs}) | 
                                       ({`XLEN*2{(booth_bits_2 == 3'b101) | (booth_bits_2 == 3'b110)}} & {32'hffffffff,(-multiplicand_abs)}) | 
                                       ({`XLEN*2{(booth_bits_2 == 3'b011)                           }} & {31'b0,multiplicand_abs,1'b0}) | 
                                       ({`XLEN*2{(booth_bits_2 == 3'b100)                           }} & {31'h7fffffff,(-multiplicand_abs),1'b0});
wire [`XLEN*2-1:0] partial_product_3 = ({`XLEN*2{(booth_bits_3 == 3'b001) | (booth_bits_3 == 3'b010)}} & {32'h0,multiplicand_abs}) | 
                                       ({`XLEN*2{(booth_bits_3 == 3'b101) | (booth_bits_3 == 3'b110)}} & {32'hffffffff,(-multiplicand_abs)}) | 
                                       ({`XLEN*2{(booth_bits_3 == 3'b011)                           }} & {31'b0,multiplicand_abs,1'b0}) | 
                                       ({`XLEN*2{(booth_bits_3 == 3'b100)                           }} & {31'h7fffffff,(-multiplicand_abs),1'b0});
wire [`XLEN*2-1:0] partial_product_extend = {`XLEN*2{state_r[STATE_PRE_BIT]}} & (
                                            ({`XLEN*2{(booth_bits_extend == 3'b001) | (booth_bits_extend == 3'b010)}} & {32'h0,multiplicand_abs}) | 
                                            ({`XLEN*2{(booth_bits_extend == 3'b101) | (booth_bits_extend == 3'b110)}} & {32'hffffffff,(-multiplicand_abs)}) | 
                                            ({`XLEN*2{(booth_bits_extend == 3'b011)                                }} & {31'b0,multiplicand_abs,1'b0}) | 
                                            ({`XLEN*2{(booth_bits_extend == 3'b100)                                }} & {31'h7fffffff,(-multiplicand_abs),1'b0}));
// ================================================================================================================================================
// COMPRESS ADD
// ================================================================================================================================================
wire [`XLEN*2-1:0] intermediate_sum1;
wire [`XLEN*2-1:0] intermediate_sum2;
wire [`XLEN*2-1:0] intermediate_sum3;
wire [`XLEN*2-1:0] intermediate_sum4;
wire [`XLEN*2-1:0] intermediate_sum5;
wire [`XLEN*2-1:0] intermediate_sum6;
wire [`XLEN*2-1:0] intermediate_sum7;
wire [`XLEN*2-1:0] intermediate_sum8;

lieat_general_compress32 #(`XLEN*2) mul_add1(partial_product_0,partial_product_1 << 2,partial_product_2 << 4,intermediate_sum1,intermediate_sum2);
lieat_general_compress32 #(`XLEN*2) mul_add2(partial_product_3 << 6, partial_product_extend << 8, mul_res << 8,intermediate_sum3,intermediate_sum4);
lieat_general_compress32 #(`XLEN*2) mul_add3(intermediate_sum1,intermediate_sum2,intermediate_sum3,intermediate_sum5,intermediate_sum6);
lieat_general_compress32 #(`XLEN*2) mul_add4(intermediate_sum4,intermediate_sum5,intermediate_sum6,intermediate_sum7,intermediate_sum8);
// ================================================================================================================================================
// OUTPUT SIGNAL
// ================================================================================================================================================
wire [`XLEN*2-1:0] mul_res;
wire [`XLEN*2-1:0] mul_res_cycle = intermediate_sum7 + intermediate_sum8;
wire [`XLEN*2-1:0] mul_res_nxt = state_r[STATE_IDLE_BIT] ? `XLEN*2'b0    :
                                 state_r[STATE_POS_BIT]  ? mul_res       : 
                                 state_r[STATE_CYC2_BIT] ? (res_neg ? -mul_res_cycle : mul_res_cycle) : mul_res_cycle ;
lieat_general_dfflr #(2*`XLEN) mul_res_dff(clk,rstn,1'b1,mul_res_nxt,mul_res);
assign mul_o_resh  = mul_res[63:32];
assign mul_o_resl  = mul_res[31:0];
endmodule
