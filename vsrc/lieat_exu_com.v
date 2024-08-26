module lieat_exu_com(
  input                 clock,
  input                 reset,  

  input                 com_i_valid,
  output                com_i_ready,
  input [`XLEN-1:0]     com_i_pc,
  input [`XLEN-1:0]     com_i_imm,
  input [`XLEN-1:0]     com_i_src1,
  input [`XLEN-1:0]     com_i_src2,
  input [`XLEN-1:0]     com_i_infobus,
  input [`REG_IDX-1:0]  com_i_rd,
  input                 com_i_rdwen,

  output                com_o_valid,
  input                 com_o_ready,
  output [`XLEN-1:0]    com_o_pc,
  output                com_o_wen,
  output [`REG_IDX-1:0] com_o_rd,
  output [`XLEN-1:0]    com_o_data,
  output                com_o_ebreak,
  output                com_o_flush,

  output                prdt_en,
  output [`REG_IDX-1:0] prdt_index,
  output                prdt_res,
  output                prdt_flush,
  output [`XLEN-1:0]    prdt_pc,
  input                 flush_sh,

  input                 ifu_csr_ren,
  input  [`CSR_IDX-1:0] ifu_csr_idx,
  output [`XLEN-1:0]    ifu_csr_rdata
);
// ================================================================================================================================================
// SIGNAL LIST
// ================================================================================================================================================
wire                com_i_sh;
wire                com_o_sh;
wire                com_req_sh;
wire                com_req_valid;
wire                com_req_ready;

wire [`REG_IDX-1:0] com_rd;
wire                com_rdwen;
wire [`XLEN-1:0]    com_pc;
wire [`XLEN-1:0]    com_imm;
wire [`XLEN-1:0]    com_src1;
wire [`XLEN-1:0]    com_src2;
wire [`XLEN-1:0]    com_infobus;

wire                com_req_sel_alu;
wire                com_req_sel_bjp;
wire                com_req_sel_csr;
wire                bjp_o_valid;
wire                csr_o_valid;

wire                alu_req_add;
wire                alu_req_sub;
wire                alu_req_xor;
wire                alu_req_sll;
wire                alu_req_srl;
wire                alu_req_sra;
wire                alu_req_or;
wire                alu_req_and;
wire                alu_req_slt;
wire                alu_req_sltu;
wire                alu_req_lui;
wire [`XLEN-1:0]    alu_req_op1;
wire [`XLEN-1:0]    alu_req_op2;
wire                alu_req_ebreak;
wire [`XLEN-1:0]    com_req_res;
wire [`XLEN-1:0]    com_o_res;
wire [`XLEN-1:0]    bjp_o_data;
wire [`XLEN-1:0]    csr_o_data;
// ================================================================================================================================================
// INPUT SIGNAL
// ================================================================================================================================================
lieat_general_dfflr #(`XLEN) com_pc_dff(clock,reset,com_i_sh,com_i_pc,com_pc);
lieat_general_dfflr #(`XLEN) com_imm_dff(clock,reset,com_i_sh,com_i_imm,com_imm);
lieat_general_dfflr #(`XLEN) com_infobus_dff(clock,reset,com_i_sh,com_i_infobus,com_infobus);
lieat_general_dfflr #(5)     com_rd_dff(clock,reset,com_i_sh,com_i_rd,com_rd);
lieat_general_dfflr #(1)     com_rdwen_dff(clock,reset,com_i_sh,com_i_rdwen,com_rdwen);
lieat_general_dfflr #(`XLEN) com_src1_dff(clock,reset,com_i_sh,com_i_src1,com_src1);
lieat_general_dfflr #(`XLEN) com_src2_dff(clock,reset,com_i_sh,com_i_src2,com_src2);
// ================================================================================================================================================
// STATE CONTROL
// ================================================================================================================================================
assign com_i_sh = com_i_valid & com_i_ready;
assign com_req_sh = com_req_valid & com_req_ready;
assign com_o_sh = com_o_valid & com_o_ready;

wire com_req_valid_pre;
wire com_req_valid_pre_set = com_i_sh;
wire com_req_valid_pre_clr = com_req_sh | prdt_flush;
wire com_req_valid_pre_ena = com_req_valid_pre_set | com_req_valid_pre_clr;
wire com_req_valid_pre_nxt = com_req_valid_pre_set | ~com_req_valid_pre_clr;
lieat_general_dfflr #(1) com_req_valid_pre_dff(clock,reset,com_req_valid_pre_ena,com_req_valid_pre_nxt,com_req_valid_pre);
assign com_req_valid = com_req_valid_pre & ~prdt_flush;

wire com_o_valid_set = com_req_sh;
wire com_o_valid_clr = com_o_sh;
wire com_o_valid_ena = com_o_valid_set | com_o_valid_clr;
wire com_o_valid_nxt = com_o_valid_set | ~com_o_valid_clr;
lieat_general_dfflr #(1) com_o_valid_dff(clock,reset,com_o_valid_ena,com_o_valid_nxt,com_o_valid);

assign com_i_ready   = ~com_req_valid_pre | com_req_sh;
assign com_req_ready = ~com_o_valid | com_o_sh;
// ================================================================================================================================================
// STAGE1: REQ
// ================================================================================================================================================
assign com_req_sel_alu = com_req_valid & (com_infobus[`INFOBUS_OP] == 3'd0);
assign com_req_sel_bjp = com_req_valid & (com_infobus[`INFOBUS_OP] == 3'd1);
assign com_req_sel_csr = com_req_valid & (com_infobus[`INFOBUS_OP] == 3'd3);

lieat_exu_share share(
  .alu_req(com_req_sel_alu),
  .alu_req_op1(alu_req_op1),
  .alu_req_op2(alu_req_op2),
  .alu_req_add(alu_req_add),
  .alu_req_sub(alu_req_sub),
  .alu_req_xor(alu_req_xor),
  .alu_req_sll(alu_req_sll),
  .alu_req_srl(alu_req_srl),
  .alu_req_sra(alu_req_sra),  
  .alu_req_or(alu_req_or),
  .alu_req_and(alu_req_and),
  .alu_req_slt(alu_req_slt),
  .alu_req_sltu(alu_req_sltu),
  .alu_req_lui(alu_req_lui),
  .com_req_res(com_req_res)
);
// ================================================================================================================================================
// STAGE2:WBCK AND CALLBACK
// ================================================================================================================================================
lieat_general_dfflr #(1)     com_o_wen_dff(clock,reset,com_req_sh,com_rdwen,com_o_wen);
lieat_general_dfflr #(`XLEN) com_o_res_dff(clock,reset,com_req_sh,com_req_res,com_o_res);
lieat_general_dfflr #(`XLEN) com_o_pc_dff(clock,reset,com_req_sh,com_pc,com_o_pc);
lieat_general_dfflr #(`REG_IDX) com_o_rd_dff(clock,reset,com_req_sh,com_rd,com_o_rd);
assign com_o_data = 
bjp_o_valid ? bjp_o_data :
csr_o_valid ? csr_o_data : com_o_res;
assign com_o_flush = com_req_valid_pre & prdt_flush;
// ================================================================================================================================================
// ALU
// ================================================================================================================================================
lieat_exu_com_alu alu(
  .clock(clock),
  .reset(reset),
  .com_req_sh(com_req_sh),
  .alu_req_valid(com_req_sel_alu),

  .alu_pc(com_pc),
  .alu_imm(com_imm),
  .alu_src1(com_src1),
  .alu_src2(com_src2),
  .alu_infobus(com_infobus),

  .alu_req_op1(alu_req_op1),
  .alu_req_op2(alu_req_op2),
  .alu_req_add(alu_req_add),
  .alu_req_sub(alu_req_sub),
  .alu_req_xor(alu_req_xor),
  .alu_req_sll(alu_req_sll),
  .alu_req_srl(alu_req_srl),
  .alu_req_sra(alu_req_sra),
  .alu_req_or(alu_req_or),
  .alu_req_and(alu_req_and),
  .alu_req_slt(alu_req_slt),
  .alu_req_sltu(alu_req_sltu),
  .alu_req_lui(alu_req_lui),
  .alu_o_ebreak(com_o_ebreak)
);
// ================================================================================================================================================
// BJP
// ================================================================================================================================================
lieat_exu_com_bjp bjp(
  .clock(clock),
  .reset(reset),
  .com_req_sh(com_req_sh),
  .bjp_valid(com_req_sel_bjp),
  .bjp_pc(com_pc),
  .bjp_imm(com_imm),
  .bjp_src1(com_src1),
  .bjp_src2(com_src2),
  .bjp_infobus(com_infobus),

  .bjp_o_data(bjp_o_data),
  .bjp_o_valid(bjp_o_valid),

  .bjp_prdt_en(prdt_en),
  .bjp_prdt_index(prdt_index),
  .bjp_prdt_res(prdt_res),
  .bjp_prdt_flush(prdt_flush),
  .bjp_prdt_pc(prdt_pc),
  .flush_sh(flush_sh)
);
// ================================================================================================================================================
// CSR
// ================================================================================================================================================
lieat_exu_com_csr csr(
  .clock(clock),
  .reset(reset),
  .com_req_sh(com_req_sh),
  .csr_valid(com_req_sel_csr),

  .csr_pc(com_pc),
  .csr_src1(com_src1),
  .csr_infobus(com_infobus),
  .csr_o_valid(csr_o_valid),
  .csr_o_data(csr_o_data),

  .ifu_csr_ren(ifu_csr_ren),
  .ifu_csr_idx(ifu_csr_idx),
  .ifu_csr_rdata(ifu_csr_rdata)
);
endmodule
