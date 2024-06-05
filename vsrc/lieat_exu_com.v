`include "vsrc/lieat_exu_com_alu.v"
`include "vsrc/lieat_exu_com_bjp.v"
`include "vsrc/lieat_exu_com_csr.v"
module lieat_exu_com(
  input                    clk,
  input                    rstn,  

  input                    com_i_valid,
  output                   com_i_ready,
  input [`XLEN-1:0]        com_i_pc,
  input [`XLEN-1:0]        com_i_imm,
  input [`XLEN-1:0]        com_i_src1,
  input [`XLEN-1:0]        com_i_src2,
  input [`XLEN-1:0]        com_i_infobus,
  input [`RGIDX_SIZE-1:0]  com_i_rd,
  input                    com_i_rdwen,

  output                   com_o_valid,
  input                    com_o_ready,
  output [`XLEN-1:0]       com_o_pc,
  output                   com_o_wen,
  output [`RGIDX_SIZE-1:0] com_o_rd,
  output [`XLEN-1:0]       com_o_data,

  output                   com_forward_valid,
  output [`XLEN-1:0]       com_forward_data,

  output                   callback_en,
  output [`RGIDX_SIZE-1:0] callback_index,
  output                   callback_result,
  output                   callback_flush,
  output [`XLEN-1:0]       callback_truepc,

  input                    ifu_csr_ren,
  input  [`CSR_IDX-1:0]    ifu_csr_idx,
  output [`XLEN-1:0]       ifu_csr_rdata
);
// ================================================================================================================================================
// INPUT SIGNAL
// ================================================================================================================================================
wire com_i_sh = com_i_valid & com_i_ready;
wire com_o_sh = com_o_valid & com_o_ready;
assign com_i_ready   = ~com_o_valid | com_o_sh;

wire [`XLEN-1:0] com_pc;
wire [`XLEN-1:0] com_imm;
wire [`XLEN-1:0] com_infobus;
wire [`RGIDX_SIZE-1:0] com_rd;
wire com_rdwen;
lieat_general_dfflr #(32) com_pc_dff(clk,rstn,com_i_sh,com_i_pc,com_pc);
lieat_general_dfflr #(32) com_imm_dff(clk,rstn,com_i_sh,com_i_imm,com_imm);
lieat_general_dfflr #(32) com_infobus_dff(clk,rstn,com_i_sh,com_i_infobus,com_infobus);
lieat_general_dfflr #(5)  com_rd_dff(clk,rstn,com_i_sh,com_i_rd,com_rd);
lieat_general_dfflr #(1)  com_rdwen_dff(clk,rstn,com_i_sh,com_i_rdwen,com_rdwen);

// ================================================================================================================================================
// STATE CONTROL
// ================================================================================================================================================
wire com_o_valid_set = com_i_sh;
wire com_o_valid_clr = com_o_sh;
wire com_o_valid_ena = com_o_valid_set | com_o_valid_clr;
wire com_o_valid_nxt = com_o_valid_set | ~com_o_valid_clr;
lieat_general_dfflr #(1) com_o_valid_dff(clk,rstn,com_o_valid_ena,com_o_valid_nxt,com_o_valid);

wire com_req_valid;
wire com_req_valid_set = com_i_sh;
wire com_req_valid_clr = com_req_valid;
wire com_req_valid_ena = com_req_valid_set | com_req_valid_clr;
wire com_req_valid_nxt = com_req_valid_set | ~com_req_valid_clr;
lieat_general_dfflr #(1) com_req_valid_dff(clk,rstn,com_req_valid_ena,com_req_valid_nxt,com_req_valid);

// ================================================================================================================================================
// INPUT DISP AND OUTPUT SEL
// ================================================================================================================================================
wire             alu_i_valid   = com_req_valid & (com_infobus[`INFOBUS_OP] == 3'd0);
wire [`XLEN-1:0] alu_i_pc      = {`XLEN{alu_i_valid}} & com_pc;
wire [`XLEN-1:0] alu_i_imm     = {`XLEN{alu_i_valid}} & com_imm;
wire [`XLEN-1:0] alu_i_src1    = {`XLEN{alu_i_valid}} & com_i_src1;
wire [`XLEN-1:0] alu_i_src2    = {`XLEN{alu_i_valid}} & com_i_src2;
wire [`XLEN-1:0] alu_i_infobus = {`XLEN{alu_i_valid}} & com_infobus;

wire             bjp_i_valid   = com_req_valid & (com_infobus[`INFOBUS_OP] == 3'd1);
wire [`XLEN-1:0] bjp_i_pc      = {`XLEN{bjp_i_valid}} & com_pc;
wire [`XLEN-1:0] bjp_i_imm     = {`XLEN{bjp_i_valid}} & com_imm;
wire [`XLEN-1:0] bjp_i_src1    = {`XLEN{bjp_i_valid}} & com_i_src1;
wire [`XLEN-1:0] bjp_i_src2    = {`XLEN{bjp_i_valid}} & com_i_src2;
wire [`XLEN-1:0] bjp_i_infobus = {`XLEN{bjp_i_valid}} & com_infobus;

wire             csr_i_valid   = com_req_valid & (com_infobus[`INFOBUS_OP] == 3'd3);
wire [`XLEN-1:0] csr_i_pc      = {`XLEN{csr_i_valid}} & com_pc;
wire [`XLEN-1:0] csr_i_src1    = {`XLEN{csr_i_valid}} & com_i_src1;
wire [`XLEN-1:0] csr_i_infobus = {`XLEN{csr_i_valid}} & com_infobus;

wire [`XLEN-1:0] alu_wbck_data;
wire [`XLEN-1:0] bjp_wbck_data;
wire [`XLEN-1:0] csr_wbck_data;
wire [`XLEN-1:0] com_wbck_data_nxt = alu_wbck_data | bjp_wbck_data | csr_wbck_data;
wire [`XLEN-1:0] com_wbck_data_reg;
lieat_general_dffr #(1) com_forward_valid_dff(clk,rstn,com_o_valid & ~com_o_ready,com_forward_valid);
lieat_general_dfflr #(32) com_o_data_dff(clk,rstn,com_req_valid,com_wbck_data_nxt,com_wbck_data_reg);

assign com_o_pc   = com_pc;
assign com_o_wen  = com_rdwen;
assign com_o_rd   = com_rd;
assign com_o_data = com_req_valid ? com_wbck_data_nxt : com_wbck_data_reg;
assign com_forward_data = com_wbck_data_reg;

// ================================================================================================================================================
// ALU
// ================================================================================================================================================
lieat_exu_com_alu alu(
  .clk(clk),
  .rstn(rstn),

  .alu_i_valid(alu_i_valid),
  .alu_i_pc(alu_i_pc),
  .alu_i_imm(alu_i_imm),
  .alu_i_src1(alu_i_src1),
  .alu_i_src2(alu_i_src2),
  .alu_i_infobus(alu_i_infobus),

  .alu_req(alu_req),
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
  .alu_req_res(alu_req_res),
  .alu_wbck_data(alu_wbck_data)
);

// ================================================================================================================================================
// BJP
// ================================================================================================================================================
lieat_exu_com_bjp bjp(
  .bjp_i_valid(bjp_i_valid),
  .bjp_i_pc(bjp_i_pc),
  .bjp_i_imm(bjp_i_imm),
  .bjp_i_src1(bjp_i_src1),
  .bjp_i_src2(bjp_i_src2),
  .bjp_i_infobus(bjp_i_infobus),

  .bjp_req(bjp_req),
  .bjp_req_op1(bjp_req_op1),
  .bjp_req_op2(bjp_req_op2),
  .bjp_req_cmp(bjp_req_cmp),
  .bjp_req_beq(bjp_req_beq),
  .bjp_req_bne(bjp_req_bne),
  .bjp_req_blt(bjp_req_blt),
  .bjp_req_bgt(bjp_req_bgt),
  .bjp_req_bltu(bjp_req_bltu),
  .bjp_req_bgtu(bjp_req_bgtu),
  .bjp_req_add(bjp_req_add),
  .bjp_req_res(bjp_req_res),
  .bjp_wbck_data(bjp_wbck_data),

  .callback_en(callback_en),
  .callback_index(callback_index),
  .callback_result(callback_result),
  .callback_flush(callback_flush),
  .callback_truepc(callback_truepc)
);

// ================================================================================================================================================
// CSR
// ================================================================================================================================================
lieat_exu_com_csr csr(
  .csr_i_valid(csr_i_valid),
  .csr_i_pc(csr_i_pc),
  .csr_i_src1(csr_i_src1),
  .csr_i_infobus(csr_i_infobus),

  .csr_req(csr_req),
  .csr_req_op1(csr_req_op1),
  .csr_req_op2(csr_req_op2),
  .csr_req_or(csr_req_or),
  .csr_req_and(csr_req_and),
  .csr_req_res(csr_req_res),
  .csr_wbck_data(csr_wbck_data),

  .csr_ena(csr_ena),
  .csr_write(csr_write),
  .csr_read(csr_read),
  .csr_idx(csr_idx),
  .csr_wdata(csr_wdata),
  .csr_rdata(csr_rdata),
  .csr_idx2(csr_idx2),
  .csr_wdata2(csr_wdata2)
);

// ================================================================================================================================================
// SHARE COMMUTE
// ================================================================================================================================================
wire             alu_req;
wire             alu_req_add;
wire             alu_req_sub;
wire             alu_req_xor;
wire             alu_req_sll;
wire             alu_req_srl;
wire             alu_req_sra;
wire             alu_req_or;
wire             alu_req_and;
wire             alu_req_slt;
wire             alu_req_sltu;
wire             alu_req_lui;
wire [`XLEN-1:0] alu_req_op1;
wire [`XLEN-1:0] alu_req_op2;
wire [`XLEN-1:0] alu_req_res;

wire             bjp_req;
wire             bjp_req_cmp;
wire             bjp_req_add;
wire             bjp_req_beq;
wire             bjp_req_bne;
wire             bjp_req_blt;
wire             bjp_req_bgt;
wire             bjp_req_bltu;
wire             bjp_req_bgtu;
wire [`XLEN-1:0] bjp_req_op1;
wire [`XLEN-1:0] bjp_req_op2;
wire [`XLEN-1:0] bjp_req_res;

wire             csr_req;
wire             csr_req_or;
wire             csr_req_and;
wire [`XLEN-1:0] csr_req_op1;
wire [`XLEN-1:0] csr_req_op2;
wire [`XLEN-1:0] csr_req_res;

lieat_exu_share share(
  .alu_req(alu_req),
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
  .alu_req_result(alu_req_res),

  .bjp_req(bjp_req),
  .bjp_req_op1(bjp_req_op1),
  .bjp_req_op2(bjp_req_op2),
  .bjp_req_cmp(bjp_req_cmp),
  .bjp_req_add(bjp_req_add),
  .bjp_req_beq(bjp_req_beq),
  .bjp_req_bne(bjp_req_bne),
  .bjp_req_blt(bjp_req_blt),
  .bjp_req_bgt(bjp_req_bgt),
  .bjp_req_bltu(bjp_req_bltu),
  .bjp_req_bgtu(bjp_req_bgtu),
  .bjp_req_result(bjp_req_res),

  .csr_req(csr_req),
  .csr_req_op1(csr_req_op1),
  .csr_req_op2(csr_req_op2),
  .csr_req_or(csr_req_or),
  .csr_req_and(csr_req_and),
  .csr_req_result(csr_req_res)
);

// ================================================================================================================================================
// CSR REG
// ================================================================================================================================================
wire                csr_ena;
wire                csr_write;
wire                csr_read;
wire [`CSR_IDX-1:0] csr_idx;
wire [`XLEN-1:0]    csr_wdata;
wire [`XLEN-1:0]    csr_rdata;
wire [`CSR_IDX-1:0] csr_idx2;
wire [`XLEN-1:0]    csr_wdata2;

lieat_exu_com_csrreg csrreg(
  .clk(clk),
  .rstn(rstn),
  .csr_ena(csr_ena),
  .csr_write(csr_write),
  .csr_read(csr_read),
  .csr_idx(csr_idx),
  .csr_wdata(csr_wdata),
  .csr_rdata(csr_rdata),
  .csr_idx2(csr_idx2),
  .csr_wdata2(csr_wdata2),
  .ifu_csr_ren(ifu_csr_ren),
  .ifu_csr_idx(ifu_csr_idx),
  .ifu_csr_rdata(ifu_csr_rdata)
);
endmodule
