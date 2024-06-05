module lieat_exu_lsu(
  input                    clk,
  input                    rstn,

  input                    lsu_i_valid,
  output                   lsu_i_ready,

  input [`XLEN-1:0]        lsu_i_pc,
  input [`XLEN-1:0]        lsu_i_imm,
  input [`XLEN-1:0]        lsu_i_src1,
  input [`XLEN-1:0]        lsu_i_src2,
  input [`XLEN-1:0]        lsu_i_infobus,
  input [`RGIDX_SIZE-1:0]  lsu_i_rd,
  input                    lsu_i_rdwen,

  output                   lsu_req_valid,
  input                    lsu_req_ready,
  output                   lsu_req_ren,
  output                   lsu_req_wen,
  output [`XLEN-1:0]       lsu_req_addr,
  output [2:0]             lsu_req_flag,
  output [`XLEN-1:0]       lsu_req_wdata,
  output                   lsu_req_fencei,

  input                    lsu_rsp_valid,
  output                   lsu_rsp_ready,
  input  [`XLEN-1:0]       lsu_rsp_rdata,

  output                   lsu_o_valid,
  input                    lsu_o_ready,
  output [`XLEN-1:0]       lsu_o_pc,
  output                   lsu_o_wen,
  output [`RGIDX_SIZE-1:0] lsu_o_rd,
  output [`XLEN-1:0]       lsu_o_data,
  output                   lsu_o_mmio,
  output                   lsu_o_fencei_finish
);
wire unused_ok = &{lsu_infobus};
wire lsu_i_sh = lsu_i_valid & lsu_i_ready;
wire lsu_o_sh = lsu_o_valid & lsu_o_ready;
wire lsu_req_sh = lsu_req_valid & lsu_req_ready;

wire [`XLEN-1:0] lsu_pc;
wire [`XLEN-1:0] lsu_imm;
wire [`XLEN-1:0] lsu_infobus;
wire [`RGIDX_SIZE-1:0] lsu_rd;
wire lsu_rdwen;
lieat_general_dfflr #(32) lsu_pc_dff(clk,rstn,lsu_i_sh,lsu_i_pc,lsu_pc);
lieat_general_dfflr #(32) lsu_imm_dff(clk,rstn,lsu_i_sh,lsu_i_imm,lsu_imm);
lieat_general_dfflr #(32) lsu_infobus_dff(clk,rstn,lsu_i_sh,lsu_i_infobus,lsu_infobus);
lieat_general_dfflr #(5)  lsu_rd_dff(clk,rstn,lsu_i_sh,lsu_i_rd,lsu_rd);
lieat_general_dfflr #(1)  lsu_rdwen_dff(clk,rstn,lsu_i_sh,lsu_i_rdwen,lsu_rdwen);

wire [1:0] lsu_sizesel  = lsu_infobus[`INFOBUS_LSU_SIZE];
wire       lsu_usignsel = lsu_infobus[`INFOBUS_LSU_USIGN];
wire       lsu_load     = lsu_infobus[`INFOBUS_LSU_LOAD];
wire       lsu_store    = lsu_infobus[`INFOBUS_LSU_STORE];
wire       lsu_fencei   = lsu_infobus[`INFOBUS_LSU_FENCEI];
//channel:LSU to DCACHE
wire lsu_req_valid_set = lsu_i_sh;
wire lsu_req_valid_clr = lsu_req_sh;
wire lsu_req_valid_ena = lsu_req_valid_set | lsu_req_valid_clr;
wire lsu_req_valid_nxt = lsu_req_valid_set | (~lsu_req_valid_clr);
lieat_general_dfflr #(1) lsu_req_valid_dff(clk,rstn,lsu_req_valid_ena,lsu_req_valid_nxt,lsu_req_valid);

wire lsu_src_valid;
wire lsu_src_valid_set = lsu_i_sh;
wire lsu_src_valid_clr = lsu_src_valid;
wire lsu_src_valid_ena = lsu_src_valid_set | lsu_src_valid_clr;
wire lsu_src_valid_nxt = lsu_src_valid_set | (~lsu_src_valid_clr);
lieat_general_dfflr #(1) lsu_src_valid_dff(clk,rstn,lsu_src_valid_ena,lsu_src_valid_nxt,lsu_src_valid);

wire [`XLEN-1:0] lsu_req_addr_nxt = lsu_i_src1 + lsu_imm;
reg [`XLEN-1:0] lsu_req_addr_reg;
reg [`XLEN-1:0] lsu_req_wdata_reg;
lieat_general_dfflr #(`XLEN) lsu_addr_dff(clk,rstn,lsu_src_valid,lsu_req_addr_nxt,lsu_req_addr_reg);
lieat_general_dfflr #(`XLEN) lsu_wdata_dff(clk,rstn,lsu_src_valid,lsu_i_src2,lsu_req_wdata_reg);

assign lsu_rsp_ready = lsu_o_ready;
assign lsu_req_ren   = lsu_load;
assign lsu_req_wen   = lsu_store;
assign lsu_req_flag  = {lsu_usignsel,lsu_sizesel};
assign lsu_req_addr  = lsu_src_valid ? lsu_req_addr_nxt : lsu_req_addr_reg;
assign lsu_req_wdata = lsu_src_valid ? lsu_i_src2       : lsu_req_wdata_reg;
assign lsu_req_fencei= lsu_fencei;

assign lsu_i_ready = (~lsu_req_valid & lsu_req_ready) | lsu_o_sh;
assign lsu_o_valid   = lsu_rsp_valid;
assign lsu_o_pc   = lsu_pc;
assign lsu_o_wen  = lsu_rdwen;
assign lsu_o_rd   = lsu_rd;
assign lsu_o_data = lsu_rsp_rdata;
assign lsu_o_mmio = (lsu_req_addr[31:27] != 5'b10000);
assign lsu_o_fencei_finish = lsu_req_fencei & lsu_rsp_valid & lsu_rsp_ready;
endmodule
