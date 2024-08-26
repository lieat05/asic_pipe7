module lieat_idu (
  input                 clock,
  input                 reset,
  
  input                 id_i_valid,
  output                id_i_ready,
  input  [`XLEN-1:0]    id_i_pc,
  input  [`XLEN-1:0]    id_i_inst,
  input                 id_i_prdt_taken,
  
  output                id_o_com_valid,
  input                 id_o_com_ready,
  output                id_o_lsu_valid,
  input                 id_o_lsu_ready,
  output                id_o_muldiv_valid,
  input                 id_o_muldiv_ready,
  output [`XLEN-1:0]    id_o_pc,
  output [`XLEN-1:0]    id_o_imm,
  output [`XLEN-1:0]    id_o_infobus,
  output [`REG_IDX-1:0] id_o_rs1,
  output [`REG_IDX-1:0] id_o_rs2,
  output [`REG_IDX-1:0] id_o_rd,
  output                id_o_rdwen,

  input  [`REG_IDX-1:0] ifu_jalr_rs1,
  input                 wait_for_ifetch,
  output                ifu_jalr_dep,

  input                 flush_req,
  input                 com_flush,
  input                 lsu_flush,
  input                 muldiv_flush,

  input                 wbck_valid,
  input  [2:0]          wbck_op,
  input  [`REG_IDX-1:0] wbck_rd,
  output                wbck_dep,
  output                longi_empty
);
// ================================================================================================================================================
// SIGNAL LIST
// ================================================================================================================================================
wire id_i_sh;

wire [`XLEN-1:0]    id_pc;
wire [`XLEN-1:0]    id_inst;
wire                id_prdt_taken;

wire                dec_rs1en;
wire                dec_rs2en;
wire                dec_rdwen;
wire [`REG_IDX-1:0] dec_rs1;
wire [`REG_IDX-1:0] dec_rs2;
wire [`REG_IDX-1:0] dec_rd;
wire [`XLEN-1:0]    dec_imm;
wire [`XLEN-1:0]    dec_infobus;
wire                dec_rv32;
wire                dec_ilgl;

wire                longi_disp;
wire                disp_dep;
wire                oitf_full;
wire                disp_condition;
wire [2:0]          disp_op;

wire                ifu_longi_dep;
wire                jalr_id_dep;
// ================================================================================================================================================
// INPUT SIGNAL
// ================================================================================================================================================
assign id_i_sh = id_i_valid & id_i_ready;

lieat_general_dfflr #(`XLEN) id_pc_dff(clock,reset,id_i_sh,id_i_pc,id_pc);
lieat_general_dfflr #(`XLEN) id_inst_dff(clock,reset,id_i_sh,id_i_inst,id_inst);
lieat_general_dfflr #(1)     id_prdt_taken_dff(clock,reset,id_i_sh,id_i_prdt_taken,id_prdt_taken);
// ================================================================================================================================================
// DECODE MODULE
// ================================================================================================================================================
lieat_idu_dec decode(
  .inst(id_inst),
  .prdt_taken(id_prdt_taken),
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
lieat_idu_depend depend(
  .clock(clock),
  .reset(reset),
  .disp_ena(longi_disp),
  .disp_op(disp_op),
  .disp_rs1en(dec_rs1en),
  .disp_rs2en(dec_rs2en),
  .disp_rdwen(dec_rdwen),
  .disp_rs1(dec_rs1),
  .disp_rs2(dec_rs2),
  .disp_rd(dec_rd),

  .wbck_ena(wbck_valid),
  .wbck_op(wbck_op),
  .com_flush(com_flush),
  .lsu_flush(lsu_flush),
  .muldiv_flush(muldiv_flush),

  .ifu_jalr_rs1(ifu_jalr_rs1),
  .wbu_dep_rd(wbck_rd),
  .disp_dep(disp_dep),
  .wbck_dep(wbck_dep),
  .ifu_dep(ifu_longi_dep),
  .oitf_full(oitf_full),
  .longi_empty(longi_empty)
);
assign disp_condition = (~disp_dep) & (~oitf_full);
// ================================================================================================================================================
// DISP MODULE
// ================================================================================================================================================
assign disp_op = dec_infobus[`INFOBUS_OP];
lieat_idu_disp disp(
  .clock(clock),
  .reset(reset),

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
assign jalr_id_dep  = (ifu_jalr_rs1 == dec_rd) & dec_rdwen & (~wait_for_ifetch);
assign ifu_jalr_dep = ifu_longi_dep | jalr_id_dep;

assign id_o_pc = id_pc;
assign id_o_imm = dec_imm;
assign id_o_infobus = dec_infobus;
assign id_o_rs1 = dec_rs1;
assign id_o_rs2 = dec_rs2;
assign id_o_rd = dec_rd;
assign id_o_rdwen = dec_rdwen;

wire unused_ok = &{dec_rv32,dec_ilgl};
endmodule
