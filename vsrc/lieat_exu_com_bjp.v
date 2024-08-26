module lieat_exu_com_bjp(
  input                 clock,
  input                 reset,
  input                 com_req_sh,
  input                 bjp_valid,
  input  [`XLEN-1:0]    bjp_pc,
  input  [`XLEN-1:0]    bjp_imm,
  input  [`XLEN-1:0]    bjp_src1,
  input  [`XLEN-1:0]    bjp_src2,
  input  [`XLEN-1:0]    bjp_infobus,

  output [`XLEN-1:0]    bjp_o_data,
  output                bjp_o_valid,

  output                bjp_prdt_en,
  output [`REG_IDX-1:0] bjp_prdt_index,
  output                bjp_prdt_res,
  output                bjp_prdt_flush,
  output [`XLEN-1:0]    bjp_prdt_pc,
  input                 flush_sh
);
// ================================================================================================================================================
// SIGNAL LIST
// ================================================================================================================================================
wire unused_ok = &{bjp_infobus};
wire bjp_jump = bjp_infobus[`INFOBUS_BJP_JUMP];
wire bjp_prdt = bjp_infobus[`INFOBUS_BJP_BPRDT];
wire bjp_bxx  = bjp_infobus[`INFOBUS_BJP_BXX];

wire bjp_beq;
wire bjp_bne;
wire bjp_blt;
wire bjp_bgt;
wire bjp_bltu;
wire bjp_bgtu;
wire bjp_add;
wire [`XLEN-1:0] bjp_op1;
wire [`XLEN-1:0] bjp_op2;

wire [`XLEN-1:0] bjp_xorer_res;
wire [`XLEN  :0] bjp_adder_op1;
wire [`XLEN  :0] bjp_adder_op2_pre;
wire [`XLEN  :0] bjp_adder_op2;
wire [`XLEN  :0] bjp_adder_res;
wire             bjp_neq_res;
wire             bjp_cmp_res;
wire             bjp_bxx_res;
// ================================================================================================================================================
// STAGE1
// ================================================================================================================================================
assign bjp_op1 = bjp_jump ? bjp_pc   : bjp_src1;
assign bjp_op2 = bjp_jump ? `XLEN'd4 : bjp_src2;
assign bjp_add = bjp_jump;
assign bjp_beq = bjp_infobus[`INFOBUS_BJP_BEQ];
assign bjp_bne = bjp_infobus[`INFOBUS_BJP_BNE];
assign bjp_blt = bjp_infobus[`INFOBUS_BJP_BLT];
assign bjp_bgt = bjp_infobus[`INFOBUS_BJP_BGT];
assign bjp_bltu= bjp_infobus[`INFOBUS_BJP_BLTU];
assign bjp_bgtu= bjp_infobus[`INFOBUS_BJP_BGTU];

assign bjp_xorer_res = bjp_op1 ^ bjp_op2;
assign bjp_neq_res   = | bjp_xorer_res;
assign bjp_adder_op1 = {~bjp_bltu & ~bjp_bgtu & bjp_op1[`XLEN-1],bjp_op1};
assign bjp_adder_op2_pre = {~bjp_bltu & ~bjp_bgtu & bjp_op2[`XLEN-1],bjp_op2};
assign bjp_adder_op2 = bjp_add ? bjp_adder_op2_pre : (~bjp_adder_op2_pre + 1'b1);
assign bjp_adder_res = bjp_adder_op1 + bjp_adder_op2;
assign bjp_cmp_res   = bjp_adder_res[`XLEN];

assign bjp_bxx_res   = 
(bjp_bne  & bjp_neq_res ) |
(bjp_beq  & ~bjp_neq_res) |
(bjp_blt  & bjp_cmp_res ) |
(bjp_bgt  & ~bjp_cmp_res) |
(bjp_bltu & bjp_cmp_res ) |
(bjp_bgtu & ~bjp_cmp_res) ;

wire bjp_req_prdt_en     = bjp_bxx & bjp_valid;
wire bjp_req_prdt_flush  = bjp_bxx & bjp_valid & (bjp_prdt ^ bjp_bxx_res);
wire bjp_req_prdt_res = bjp_cmp_res;
wire [`XLEN-1:0] bjp_req_prdt_pc_jump   = bjp_pc + bjp_imm;
wire [`XLEN-1:0] bjp_req_prdt_pc_nojump = bjp_pc + 32'd4;
wire [`XLEN-1:0] bjp_req_prdt_pc        = bjp_bxx_res ? bjp_req_prdt_pc_jump : bjp_req_prdt_pc_nojump;
wire [4:0]  bjp_req_prdt_index  = bjp_pc[6:2];
wire [`XLEN-1:0] bjp_back_data = bjp_adder_res[`XLEN-1:0];
// ================================================================================================================================================
// STAGE2
// ================================================================================================================================================
lieat_general_dfflr #(1) bjp_o_valid_dff(clock,reset,com_req_sh,bjp_valid,bjp_o_valid);
lieat_general_dfflr #(`XLEN) bjp_o_data_dff(clock,reset,com_req_sh,bjp_back_data,bjp_o_data);

lieat_general_dfflr #(1) bjp_prdt_en_dff(clock,reset,bjp_valid | bjp_prdt_en,bjp_req_prdt_en,bjp_prdt_en);
lieat_general_dfflr #(1) bjp_prdt_res_dff(clock,reset,bjp_valid | bjp_prdt_en,bjp_req_prdt_res,bjp_prdt_res);
lieat_general_dfflr #(5) bjp_prdt_index_dff(clock,reset,bjp_valid | bjp_prdt_en,bjp_req_prdt_index,bjp_prdt_index);

lieat_general_dfflr #(1) bjp_prdt_flush_dff(clock,reset,bjp_valid | flush_sh,bjp_req_prdt_flush,bjp_prdt_flush);
lieat_general_dfflr #(`XLEN) bjp_prdt_pc_dff(clock,reset,bjp_valid | flush_sh,bjp_req_prdt_pc,bjp_prdt_pc);
endmodule
