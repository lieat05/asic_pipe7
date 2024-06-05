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
  output [`XLEN-1:0] alu_req_result,

  input              bjp_req,
  input              bjp_req_cmp,
  input              bjp_req_beq,
  input              bjp_req_bne,
  input              bjp_req_blt,
  input              bjp_req_bgt,
  input              bjp_req_bltu,
  input              bjp_req_bgtu,
  input [`XLEN-1:0]  bjp_req_op1,
  input [`XLEN-1:0]  bjp_req_op2,
  input              bjp_req_add,
  output [`XLEN-1:0] bjp_req_result,

  input              csr_req,
  input [`XLEN-1:0]  csr_req_op1,
  input [`XLEN-1:0]  csr_req_op2,
  input              csr_req_or,
  input              csr_req_and,
  output [`XLEN-1:0] csr_req_result
);
wire [`XLEN-1:0] op1 = ({`XLEN{alu_req}} & alu_req_op1) | ({`XLEN{bjp_req}} & bjp_req_op1) | ({`XLEN{csr_req}} & csr_req_op1);
wire [`XLEN-1:0] op2 = ({`XLEN{alu_req}} & alu_req_op2) | ({`XLEN{bjp_req}} & bjp_req_op2) | ({`XLEN{csr_req}} & csr_req_op2);
wire op_add = (alu_req & alu_req_add) | (bjp_req & bjp_req_add);
wire op_sub = (alu_req & alu_req_sub) | op_cmp_bgt | op_cmp_bgtu | op_cmp_blt | op_cmp_bltu;
wire op_xor = (alu_req & alu_req_xor) | op_cmp_beq | op_cmp_bne;
wire op_sll = (alu_req & alu_req_sll);
wire op_srl = (alu_req & alu_req_srl);
wire op_sra = (alu_req & alu_req_sra);
wire op_or  = (alu_req & alu_req_or ) | (csr_req & csr_req_or);
wire op_and = (alu_req & alu_req_and) | (csr_req & csr_req_and);
wire op_slt = (alu_req & alu_req_slt);
wire op_sltu= (alu_req & alu_req_sltu);
wire op_lui = (alu_req & alu_req_lui);
wire op_unsign = op_sltu | op_cmp_bltu | op_cmp_bgtu;

wire op_cmp_beq = bjp_req & bjp_req_beq;
wire op_cmp_bne = bjp_req & bjp_req_bne;
wire op_cmp_blt = bjp_req & bjp_req_blt;
wire op_cmp_bgt = bjp_req & bjp_req_bgt;
wire op_cmp_bltu= bjp_req & bjp_req_bltu;
wire op_cmp_bgtu= bjp_req & bjp_req_bgtu;
//adder:add sub slt sltu
wire adder_ena   = adder_add | adder_sub;
wire adder_add   = op_add;
wire adder_sub   = op_sub | op_slt | op_sltu;
wire [`XLEN:0] adder_op1 = ({`XLEN+1{adder_ena}} & {(~op_unsign) & op1[`XLEN-1],op1});
wire [`XLEN:0] adder_op2 = ({`XLEN+1{adder_ena}} & {(~op_unsign) & op2[`XLEN-1],op2});
wire [`XLEN:0] adder_in1 = adder_op1;
wire [`XLEN:0] adder_in2 = adder_sub ? (~adder_op2 + 1'b1) : adder_op2;
wire [`XLEN:0] adder_res = adder_in1 + adder_in2;

wire op_lt       = op_slt | op_sltu;
wire slt_cmp     = op_lt & adder_res[`XLEN];
wire [`XLEN-1:0] lter_res = {31'b0,slt_cmp};
//xor or and
wire [`XLEN-1:0] xorer_res = op1 ^ op2;
wire [`XLEN-1:0] orer_res  = op1 | op2;
wire [`XLEN-1:0] ander_res = op1 & op2;
//cmper:
wire neq = (|xorer_res);
wire cmp_bne_res = op_cmp_bne & neq;
wire cmp_beq_res = op_cmp_beq & ~neq;
wire cmp_blt_res = op_cmp_blt & adder_res[`XLEN];
wire cmp_bgt_res = op_cmp_bgt & ~adder_res[`XLEN];
wire cmp_bltu_res= op_cmp_bltu& adder_res[`XLEN];
wire cmp_bgtu_res= op_cmp_bgtu& ~adder_res[`XLEN];
wire cmp_res     = cmp_bne_res | cmp_beq_res | cmp_blt_res | cmp_bgt_res | cmp_bltu_res | cmp_bgtu_res;
//shifter:sll srl sra
wire shifter_ena   = op_sll | op_srl | op_sra;
wire shifter_right = op_srl | op_sra;
wire [`XLEN-1:0] shifter_op1 = ({`XLEN{shifter_ena}} & op1);
wire [4      :0] shifter_op2 = ({    5{shifter_ena}} & op2[4:0]);
wire [`XLEN-1:0] shifter_in1 = (shifter_right ? {
    shifter_op1[00],shifter_op1[01],shifter_op1[02],shifter_op1[03],
    shifter_op1[04],shifter_op1[05],shifter_op1[06],shifter_op1[07],
    shifter_op1[08],shifter_op1[09],shifter_op1[10],shifter_op1[11],
    shifter_op1[12],shifter_op1[13],shifter_op1[14],shifter_op1[15],
    shifter_op1[16],shifter_op1[17],shifter_op1[18],shifter_op1[19],
    shifter_op1[20],shifter_op1[21],shifter_op1[22],shifter_op1[23],
    shifter_op1[24],shifter_op1[25],shifter_op1[26],shifter_op1[27],
    shifter_op1[28],shifter_op1[29],shifter_op1[30],shifter_op1[31]
                               } : shifter_op1);
wire [4:0] shifter_in2 = shifter_op2;
wire [`XLEN-1:0] shifter_res = (shifter_in1 << shifter_in2);
wire [`XLEN-1:0] mask        = (~(`XLEN'b0)) >> shifter_in2;
wire [`XLEN-1:0] sraer_res     = (srler_res & mask) | ({32{shifter_op1[31]}} & (~mask));
wire [`XLEN-1:0] sller_res     = shifter_res;
wire [`XLEN-1:0] srler_res     = {
    shifter_res[00],shifter_res[01],shifter_res[02],shifter_res[03],
    shifter_res[04],shifter_res[05],shifter_res[06],shifter_res[07],
    shifter_res[08],shifter_res[09],shifter_res[10],shifter_res[11],
    shifter_res[12],shifter_res[13],shifter_res[14],shifter_res[15],
    shifter_res[16],shifter_res[17],shifter_res[18],shifter_res[19],
    shifter_res[20],shifter_res[21],shifter_res[22],shifter_res[23],
    shifter_res[24],shifter_res[25],shifter_res[26],shifter_res[27],
    shifter_res[28],shifter_res[29],shifter_res[30],shifter_res[31]};
//lui
wire [`XLEN-1:0] luier_res = op2;

wire [`XLEN-1:0] result = ({`XLEN{op_add}} & adder_res[`XLEN-1:0]) |
                          ({`XLEN{op_sub}} & adder_res[`XLEN-1:0]) |
                          ({`XLEN{op_xor}} & xorer_res) |
                          ({`XLEN{op_or }} & orer_res ) |
                          ({`XLEN{op_and}} & ander_res) |
                          ({`XLEN{op_srl}} & srler_res) |
                          ({`XLEN{op_sll}} & sller_res) |
                          ({`XLEN{op_sra}} & sraer_res) |
                          ({`XLEN{op_lt }} & lter_res ) |
                          ({`XLEN{op_lui}} & luier_res);

assign alu_req_result = ({`XLEN{alu_req}} & result);
assign bjp_req_result = ({`XLEN{bjp_req_add}} & result) | {31'b0,bjp_req_cmp & cmp_res};
assign csr_req_result = ({`XLEN{csr_req}} & result);
endmodule
