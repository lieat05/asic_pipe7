module lieat_exu_lsu(
  input                 clock,
  input                 reset,
  input                 flush_req,
  input                 lsu_i_valid,
  output                lsu_i_ready,

  input [`XLEN-1:0]     lsu_i_pc,
  input [`XLEN-1:0]     lsu_i_imm,
  input [`XLEN-1:0]     lsu_i_src1,
  input [`XLEN-1:0]     lsu_i_src2,
  input [`XLEN-1:0]     lsu_i_infobus,
  input [`REG_IDX-1:0]  lsu_i_rd,
  input                 lsu_i_rdwen,

  output                lsu_req_valid,
  input                 lsu_req_ready,
  output                lsu_req_ren,
  output                lsu_req_wen,
  output [`XLEN-1:0]    lsu_req_addr,
  output [2:0]          lsu_req_flag,
  output [`XLEN-1:0]    lsu_req_wdata,
  output                lsu_req_fencei,

  input                 lsu_rsp_valid,
  output                lsu_rsp_ready,
  input  [`XLEN-1:0]    lsu_rsp_rdata,

  output                lsu_o_valid,
  input                 lsu_o_ready,
  output [`XLEN-1:0]    lsu_o_pc,
  output                lsu_o_wen,
  output [`REG_IDX-1:0] lsu_o_rd,
  output [`XLEN-1:0]    lsu_o_data,
  output                lsu_o_mmio,
  output                lsu_o_fencei_finish,
  output                lsu_o_flush
);
// ================================================================================================================================================
// SIGNAL LIST
// ================================================================================================================================================
wire lsu_i_sh = lsu_i_valid & lsu_i_ready;
wire lsu_o_sh = lsu_o_valid & lsu_o_ready;//lsu_rsp_sh
wire lsu_req_sh = lsu_req_valid & lsu_req_ready;

wire [`XLEN-1:0] lsu_i_addr;
wire lsu_rdwen;
wire [`REG_IDX-1:0] lsu_rd;
wire [`XLEN-1:0] lsu_pc;
wire [`XLEN-1:0] lsu_src2;
wire [`XLEN-1:0] lsu_infobus;
wire [`XLEN-1:0] lsu_addr;
// ================================================================================================================================================
// STAGE: INPUT
// ================================================================================================================================================
assign lsu_i_addr = lsu_i_src1 + lsu_i_imm;

lieat_general_dfflr #(`XLEN)    lsu_pc_dff(clock,reset,lsu_i_sh,lsu_i_pc,lsu_pc);
lieat_general_dfflr #(`XLEN)    lsu_infobus_dff(clock,reset,lsu_i_sh,lsu_i_infobus,lsu_infobus);
lieat_general_dfflr #(`REG_IDX) lsu_rd_dff(clock,reset,lsu_i_sh,lsu_i_rd,lsu_rd);
lieat_general_dfflr #(1)        lsu_rdwen_dff(clock,reset,lsu_i_sh,lsu_i_rdwen,lsu_rdwen);
lieat_general_dfflr #(`XLEN)    lsu_src1_dff(clock,reset,lsu_i_sh,lsu_i_addr,lsu_addr);//immb and src1
lieat_general_dfflr #(`XLEN)    lsu_src2_dff(clock,reset,lsu_i_sh,lsu_i_src2,lsu_src2);
// ================================================================================================================================================
// STAGE: REQ AND RSP
// ================================================================================================================================================
wire [1:0] lsu_sizesel  = lsu_infobus[`INFOBUS_LSU_SIZE];
wire       lsu_usignsel = lsu_infobus[`INFOBUS_LSU_USIGN];
wire       lsu_load     = lsu_infobus[`INFOBUS_LSU_LOAD];
wire       lsu_store    = lsu_infobus[`INFOBUS_LSU_STORE];
wire       lsu_fencei   = lsu_infobus[`INFOBUS_LSU_FENCEI];

wire lsu_req_valid_pre;
wire lsu_req_valid_pre_set = lsu_i_sh;
wire lsu_req_valid_pre_clr = lsu_req_sh | flush_req;
wire lsu_req_valid_pre_ena = lsu_req_valid_pre_set | lsu_req_valid_pre_clr;
wire lsu_req_valid_pre_nxt = lsu_req_valid_pre_set | (~lsu_req_valid_pre_clr);
lieat_general_dfflr #(1) lsu_req_valid_pre_dff(clock,reset,lsu_req_valid_pre_ena,lsu_req_valid_pre_nxt,lsu_req_valid_pre);
assign lsu_req_valid = lsu_req_valid_pre & ~flush_req;

assign lsu_rsp_ready = lsu_o_ready;
assign lsu_req_ren   = lsu_load;
assign lsu_req_wen   = lsu_store;
assign lsu_req_flag  = {lsu_usignsel,lsu_sizesel};
assign lsu_req_addr  = lsu_addr;
assign lsu_req_wdata = lsu_src2;
assign lsu_req_fencei= lsu_fencei;

assign lsu_i_ready = (~lsu_req_valid_pre & lsu_req_ready) | lsu_o_sh;
assign lsu_o_valid = lsu_rsp_valid;
assign lsu_o_pc   = lsu_pc;
assign lsu_o_wen  = lsu_rdwen;
assign lsu_o_rd   = lsu_rd;
assign lsu_o_data = lsu_rsp_rdata;
assign lsu_o_mmio = (lsu_req_addr[31] != 1'b1) & (lsu_req_addr[31:28] != 4'b0011);//DPI-C
assign lsu_o_fencei_finish = lsu_req_fencei & lsu_rsp_valid & lsu_rsp_ready;
assign lsu_o_flush = lsu_req_valid_pre & flush_req;

wire unused_ok = &{lsu_infobus};
endmodule
