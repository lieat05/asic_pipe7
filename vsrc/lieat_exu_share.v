module lieat_exu_share(
  input              alu_req,
  input [`XLEN-1:0]  alu_req_op1,
  input [`XLEN-1:0]  alu_req_op2,
  input              alu_req_add,
  input              alu_req_sub,
  input              alu_req_xor,
  input              alu_req_sll,
  input              alu_req_srl,
  input              alu_req_sra,  
  input              alu_req_or,
  input              alu_req_and,
  input              alu_req_slt,
  input              alu_req_sltu,
  input              alu_req_lui,
  output [`XLEN-1:0] com_req_res
);
// ================================================================================================================================================
// SIGNAL LIST
// ================================================================================================================================================
wire [`XLEN-1:0] op1;
wire [`XLEN-1:0] op2;

wire op_add;
wire op_sub;
wire op_xor;
wire op_sll;
wire op_srl;
wire op_sra;
wire op_or;
wire op_and;
wire op_slt;
wire op_sltu;
wire op_lui;
wire op_unsign;
wire op_cmp;

wire adder_ena;
wire adder_add;
wire adder_sub;
wire [`XLEN:0] adder_op1;
wire [`XLEN:0] adder_op2;
wire [`XLEN:0] adder_in1;
wire [`XLEN:0] adder_in2;

wire op_lt;
wire slt_cmp;

wire neq;

wire                shifter_ena;
wire                shifter_right;
wire [`XLEN-1:0]    shifter_op1;
wire [`REG_IDX-1:0] shifter_op2;
wire [`XLEN-1:0]    shifter_in1;
wire [4:0]          shifter_in2;

wire [`XLEN-1:0] mask;

wire [`XLEN  :0] adder_res;
wire [`XLEN-1:0] lter_res;
wire [`XLEN-1:0] xorer_res;
wire [`XLEN-1:0] orer_res;
wire [`XLEN-1:0] ander_res;
wire [`XLEN-1:0] shifter_res;
wire [`XLEN-1:0] sraer_res;
wire [`XLEN-1:0] sller_res;
wire [`XLEN-1:0] srler_res;
wire [`XLEN-1:0] luier_res;
// ================================================================================================================================================
// OPERATION
// ================================================================================================================================================
assign op1 = ({`XLEN{alu_req}} & alu_req_op1);
assign op2 = ({`XLEN{alu_req}} & alu_req_op2);
assign op_add = (alu_req & alu_req_add);
assign op_sub = (alu_req & alu_req_sub);
assign op_xor = (alu_req & alu_req_xor);
assign op_sll = (alu_req & alu_req_sll);
assign op_srl = (alu_req & alu_req_srl);
assign op_sra = (alu_req & alu_req_sra);
assign op_or  = (alu_req & alu_req_or );
assign op_and = (alu_req & alu_req_and);
assign op_slt = (alu_req & alu_req_slt);
assign op_sltu= (alu_req & alu_req_sltu);
assign op_lui = (alu_req & alu_req_lui);
assign op_unsign = op_sltu;
// ================================================================================================================================================
// ADDER
// ================================================================================================================================================
assign adder_ena   = adder_add | adder_sub;
assign adder_add   = op_add;
assign adder_sub   = op_sub | op_slt | op_sltu;
assign adder_op1 = ({`XLEN+1{adder_ena}} & {(~op_unsign) & op1[`XLEN-1],op1});
assign adder_op2 = ({`XLEN+1{adder_ena}} & {(~op_unsign) & op2[`XLEN-1],op2});
assign adder_in1 = adder_op1;
assign adder_in2 = adder_sub ? (~adder_op2 + 1'b1) : adder_op2;
assign adder_res = adder_in1 + adder_in2;

assign op_lt       = op_slt | op_sltu;
assign slt_cmp     = op_lt & adder_res[`XLEN];
assign lter_res = {31'b0,slt_cmp};
// ================================================================================================================================================
// XOR OR AND
// ================================================================================================================================================
assign xorer_res = op1 ^ op2;
assign orer_res  = op1 | op2;
assign ander_res = op1 & op2;
// ================================================================================================================================================
// SHIFTER
// ================================================================================================================================================
assign shifter_ena   = op_sll | op_srl | op_sra;
assign shifter_right = op_srl | op_sra;

assign shifter_op1 = ({`XLEN{shifter_ena}} & op1);
assign shifter_op2 = ({`REG_IDX{shifter_ena}} & op2[4:0]);

assign shifter_in1 =
(shifter_right ? {
shifter_op1[00],shifter_op1[01],shifter_op1[02],shifter_op1[03],
shifter_op1[04],shifter_op1[05],shifter_op1[06],shifter_op1[07],
shifter_op1[08],shifter_op1[09],shifter_op1[10],shifter_op1[11],
shifter_op1[12],shifter_op1[13],shifter_op1[14],shifter_op1[15],
shifter_op1[16],shifter_op1[17],shifter_op1[18],shifter_op1[19],
shifter_op1[20],shifter_op1[21],shifter_op1[22],shifter_op1[23],
shifter_op1[24],shifter_op1[25],shifter_op1[26],shifter_op1[27],
shifter_op1[28],shifter_op1[29],shifter_op1[30],shifter_op1[31]} : shifter_op1);
assign shifter_in2 = shifter_op2;

assign shifter_res = (shifter_in1 << shifter_in2);
assign mask        = (~(`XLEN'b0)) >> shifter_in2;
assign sraer_res     = (srler_res & mask) | ({32{shifter_op1[31]}} & (~mask));
assign sller_res     = shifter_res;
assign srler_res     = {
shifter_res[00],shifter_res[01],shifter_res[02],shifter_res[03],
shifter_res[04],shifter_res[05],shifter_res[06],shifter_res[07],
shifter_res[08],shifter_res[09],shifter_res[10],shifter_res[11],
shifter_res[12],shifter_res[13],shifter_res[14],shifter_res[15],
shifter_res[16],shifter_res[17],shifter_res[18],shifter_res[19],
shifter_res[20],shifter_res[21],shifter_res[22],shifter_res[23],
shifter_res[24],shifter_res[25],shifter_res[26],shifter_res[27],
shifter_res[28],shifter_res[29],shifter_res[30],shifter_res[31]};
// ================================================================================================================================================
// LUI
// ================================================================================================================================================
assign luier_res = op2;
assign com_req_res = 
({`XLEN{op_add}} & adder_res[`XLEN-1:0]) |
({`XLEN{op_sub}} & adder_res[`XLEN-1:0]) |
({`XLEN{op_xor}} & xorer_res) |
({`XLEN{op_or }} & orer_res ) |
({`XLEN{op_and}} & ander_res) |
({`XLEN{op_srl}} & srler_res) |
({`XLEN{op_sll}} & sller_res) |
({`XLEN{op_sra}} & sraer_res) |
({`XLEN{op_lt }} & lter_res ) |
({`XLEN{op_lui}} & luier_res) ;
endmodule
