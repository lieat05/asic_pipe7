`include "vsrc/lieat_idu_dec.v"
`include "vsrc/lieat_idu_disp.v"
`include "vsrc/lieat_idu_depend.v"
module lieat_idu (
  input                    clk,
  input                    rstn,
  
  input                    id_i_valid,
  output                   id_i_ready,
  input  [`XLEN-1:0]       id_i_pc,
  input  [`XLEN-1:0]       id_i_inst,
  input                    id_i_prdt_taken,
  
  output                   id_o_com_valid,
  input                    id_o_com_ready,
  output                   id_o_lsu_valid,
  input                    id_o_lsu_ready,
  output                   id_o_muldiv_valid,
  input                    id_o_muldiv_ready,
  output [`XLEN-1:0]       id_o_pc,
  output [`XLEN-1:0]       id_o_imm,
  output [`XLEN-1:0]       id_o_infobus,
  output [`RGIDX_SIZE-1:0] id_o_rs1,
  output [`RGIDX_SIZE-1:0] id_o_rs2,
  output [`RGIDX_SIZE-1:0] id_o_rd,
  output                   id_o_rdwen,

  input  [`RGIDX_SIZE-1:0] jalr_rs1,
  input                    wait_for_ifetch,
  output                   jalr_dep,

  input                    flush_req,
  input  [`RGIDX_SIZE-1:0] wbck_rd,
  output                   wbck_dep,
  input                    longi_wbck,
  input  [1:0]             longi_wbck_op,
  output                   longi_empty
);
wire unused_ok = &{dec_rv32,dec_ilgl};
// ================================================================================================================================================
// INPUT SIGNAL
// ================================================================================================================================================
wire id_i_sh = id_i_valid & id_i_ready;

wire [`XLEN-1:0] pc;
wire [`XLEN-1:0] inst;
wire             prdt_taken;
lieat_general_dfflr #(32) id_pc_dff(clk,rstn,id_i_sh,id_i_pc,pc);
lieat_general_dfflr #(32) id_inst_dff(clk,rstn,id_i_sh,id_i_inst,inst);
lieat_general_dfflr #(1)  id_prdt_taken_dff(clk,rstn,id_i_sh,id_i_prdt_taken,prdt_taken);
// ================================================================================================================================================
// DECODE MODULE
// ================================================================================================================================================
wire                   dec_rs1en;
wire                   dec_rs2en;
wire                   dec_rdwen;
wire [`RGIDX_SIZE-1:0] dec_rs1;
wire [`RGIDX_SIZE-1:0] dec_rs2;
wire [`RGIDX_SIZE-1:0] dec_rd;
wire [`XLEN-1:0]       dec_imm;
wire [`XLEN-1:0]       dec_infobus;
wire                   dec_rv32;
wire                   dec_ilgl;

lieat_idu_dec decode(
  .inst(inst),
  .prdt_taken(prdt_taken),
  .id_rv32(dec_rv32),
  .id_rs1en(dec_rs1en),
  .id_rs2en(dec_rs2en),
  .id_rdwen(dec_rdwen),
  .id_rs1(dec_rs1),
  .id_rs2(dec_rs2),
  .id_rd(dec_rd),
  .id_imm(dec_imm),
  .id_infobus(dec_infobus),
  .id_ilgl(dec_ilgl)
);
// ================================================================================================================================================
// LONG_INST OITF MODULE
// ================================================================================================================================================
wire longi_disp;
wire raw_dep;
wire disp_condition = (~raw_dep);

lieat_idu_depend depend(
  .clk(clk),
  .rstn(rstn),
  .disp_ena(longi_disp),
  .disp_op(disp_op),
  .disp_rs1en(dec_rs1en),
  .disp_rs2en(dec_rs2en),
  .disp_rdwen(dec_rdwen),
  .disp_rs1(dec_rs1),
  .disp_rs2(dec_rs2),
  .disp_rd(dec_rd),

  .remove_ena(longi_wbck),
  .remove_op(longi_wbck_op),

  .ifu_dep_rs1(jalr_rs1),
  .wbu_dep_rd(wbck_rd),
  .raw_dep(raw_dep),
  .waw_dep(wbck_dep),
  .ifu_dep(ifu_longi_dep),
  .longi_empty(longi_empty)
);
// ================================================================================================================================================
// DISP MODULE
// ================================================================================================================================================
wire [2:0] disp_op = dec_infobus[`INFOBUS_OP];
lieat_idu_disp disp(
  .clk(clk),
  .rstn(rstn),

  .id_i_valid(id_i_valid),
  .id_i_ready(id_i_ready),
  .disp_op(disp_op),

  .disp_com_valid(id_o_com_valid),
  .disp_com_ready(id_o_com_ready),
  .disp_lsu_valid(id_o_lsu_valid),
  .disp_lsu_ready(id_o_lsu_ready),
  .disp_muldiv_valid(id_o_muldiv_valid),
  .disp_muldiv_ready(id_o_muldiv_ready),

  .longi_disp(longi_disp),
  .disp_condition(disp_condition),
  .flush_req(flush_req)
);
// ================================================================================================================================================
// OUTPUT SIGNAL
// ================================================================================================================================================
wire ifu_longi_dep;
wire jalr_id_dep  = (jalr_rs1 == dec_rd) & dec_rdwen & (id_o_com_valid | id_o_lsu_valid | id_o_muldiv_valid) & (~wait_for_ifetch);
assign jalr_dep = ifu_longi_dep | jalr_id_dep;

assign id_o_pc = pc;
assign id_o_imm = dec_imm;
assign id_o_infobus = dec_infobus;
assign id_o_rs1 = dec_rs1;
assign id_o_rs2 = dec_rs2;
assign id_o_rd = dec_rd;
assign id_o_rdwen = dec_rdwen;
endmodule
