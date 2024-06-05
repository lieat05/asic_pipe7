`include "vsrc/lieat_exu_com.v"
`include "vsrc/lieat_exu_lsu.v"
`include "vsrc/lieat_exu_wbu.v"
`include "vsrc/lieat_exu_muldiv.v"
`include "vsrc/lieat_exu_share.v"
`include "vsrc/lieat_exu_dcache.v"
module lieat_exu(
  input                    clk,
  input                    rstn,
  
  input [`XLEN-1:0]        ex_i_pc,
  input [`XLEN-1:0]        ex_i_imm,
  input [`XLEN-1:0]        ex_i_infobus,
  input [`RGIDX_SIZE-1:0]  ex_i_rs1,
  input [`RGIDX_SIZE-1:0]  ex_i_rs2,
  input [`RGIDX_SIZE-1:0]  ex_i_rd,
  input                    ex_i_rdwen,

  output [`RGIDX_SIZE-1:0] ex_reg_rs1,
  output [`RGIDX_SIZE-1:0] ex_reg_rs2,
  input [`XLEN-1:0]        ex_reg_src1,
  input [`XLEN-1:0]        ex_reg_src2,
  
  input                    com_i_valid,
  output                   com_i_ready,
  input                    lsu_i_valid,
  output                   lsu_i_ready,
  input                    muldiv_i_valid,
  output                   muldiv_i_ready,

  output                   longi_wbck,
  output [1:0]             longi_wbck_op,
  input                    oitf_waw_dep,

  output [`XLEN-1:0]       wbck_o_pc,
  output                   wbck_o_valid,
  output                   wbck_o_en,
  output [`RGIDX_SIZE-1:0] wbck_o_rd,
  output [`XLEN-1:0]       wbck_o_data,
  output                   wbck_o_lsu,
  
  output                   dcache_axi_arvalid,
  input                    dcache_axi_arready,
  output [`XLEN-1:0]       dcache_axi_araddr,
  output [2:0]             dcache_axi_arsize,
  input                    dcache_axi_rvalid,
  output                   dcache_axi_rready,
  input  [`XLEN-1:0]       dcache_axi_rdata,
  output                   dcache_axi_awvalid,
  input                    dcache_axi_awready,
  output [`XLEN-1:0]       dcache_axi_awaddr,
  output [2:0]             dcache_axi_awsize,
  output                   dcache_axi_wvalid,
  input                    dcache_axi_wready,
  output [`XLEN-1:0]       dcache_axi_wdata,
  input                    dcache_axi_bvalid,
  output                   dcache_axi_bready,
  input  [1:0]             dcache_axi_bresp,

  output                   callback_en,
  output [4:0]             callback_index,
  output                   callback_result,
  output                   callback_flush,
  output [`XLEN-1:0]       callback_truepc,
  output                   callback_fenceifinish,

  input                    ifu_csr_ren,
  input  [11:0]            ifu_csr_idx,
  output [`XLEN-1:0]       ifu_csr_rdata,

  input  [`RGIDX_SIZE-1:0] jalr_rs1,
  input  [`XLEN-1:0]       jalr_reg_src1,
  output [`XLEN-1:0]       jalr_src1
);
// ================================================================================================================================================
// INPUT SIGNAL
// ================================================================================================================================================
wire ex_i_sh = com_i_sh | lsu_i_sh | muldiv_i_sh;
wire com_i_sh = com_i_valid & com_i_ready;
wire lsu_i_sh = lsu_i_valid & lsu_i_ready;
wire muldiv_i_sh = muldiv_i_valid & muldiv_i_ready;
lieat_general_dfflr #(5) ex_rs1_dff(clk,rstn,ex_i_sh,ex_i_rs1,ex_reg_rs1);
lieat_general_dfflr #(5) ex_rs2_dff(clk,rstn,ex_i_sh,ex_i_rs2,ex_reg_rs2);
// ================================================================================================================================================
// FORWARD SRC
// ================================================================================================================================================
wire com_forward_valid;
wire [`XLEN-1:0] com_forward_data;
wire com_forward_rs1_valid  = com_forward_valid & (com_o_rd == ex_reg_rs1);
wire com_forward_rs2_valid  = com_forward_valid & (com_o_rd == ex_reg_rs2);
wire com_forward_jalr_valid = com_o_valid & com_o_wen & (com_o_rd == jalr_rs1);
wire [`XLEN-1:0] ex_src1    = com_forward_rs1_valid ? com_forward_data : ex_reg_src1;
wire [`XLEN-1:0] ex_src2    = com_forward_rs2_valid ? com_forward_data : ex_reg_src2;
assign jalr_src1            = com_forward_jalr_valid ? com_o_data : jalr_reg_src1;
// ================================================================================================================================================
// COM
// ================================================================================================================================================
lieat_exu_com com(
  .clk(clk),
  .rstn(rstn),
  
  .com_i_valid(com_i_valid),
  .com_i_ready(com_i_ready),
  .com_i_pc(ex_i_pc),
  .com_i_imm(ex_i_imm),
  .com_i_src1(ex_src1),
  .com_i_src2(ex_src2),
  .com_i_infobus(ex_i_infobus),
  .com_i_rd(ex_i_rd),
  .com_i_rdwen(ex_i_rdwen),

  .com_o_valid(com_o_valid),
  .com_o_ready(com_o_ready),
  .com_o_pc(com_o_pc),
  .com_o_wen(com_o_wen),
  .com_o_rd(com_o_rd),
  .com_o_data(com_o_data),
  .com_forward_valid(com_forward_valid),
  .com_forward_data(com_forward_data),

  .callback_en(callback_en),
  .callback_index(callback_index),
  .callback_result(callback_result),
  .callback_flush(callback_flush),
  .callback_truepc(callback_truepc),

  .ifu_csr_ren(ifu_csr_ren),
  .ifu_csr_idx(ifu_csr_idx),
  .ifu_csr_rdata(ifu_csr_rdata)
);
// ================================================================================================================================================
// LSU
// ================================================================================================================================================
lieat_exu_lsu lsu(
  .clk(clk),
  .rstn(rstn),
  .lsu_i_valid(lsu_i_valid),
  .lsu_i_ready(lsu_i_ready),
  .lsu_i_pc(ex_i_pc),
  .lsu_i_imm(ex_i_imm),
  .lsu_i_src1(ex_src1),
  .lsu_i_src2(ex_src2),
  .lsu_i_infobus(ex_i_infobus),
  .lsu_i_rd(ex_i_rd),
  .lsu_i_rdwen(ex_i_rdwen),

  .lsu_req_valid(lsu_req_valid),
  .lsu_req_ready(lsu_req_ready),
  .lsu_req_ren(lsu_req_ren),
  .lsu_req_wen(lsu_req_wen),
  .lsu_req_addr(lsu_req_addr),
  .lsu_req_flag(lsu_req_flag),
  .lsu_req_wdata(lsu_req_wdata),
  .lsu_req_fencei(lsu_req_fencei),

  .lsu_rsp_valid(lsu_rsp_valid),
  .lsu_rsp_ready(lsu_rsp_ready),
  .lsu_rsp_rdata(lsu_rsp_rdata),

  .lsu_o_valid(lsu_o_valid),
  .lsu_o_ready(lsu_o_ready),
  .lsu_o_pc(lsu_o_pc),
  .lsu_o_wen(lsu_o_wen),
  .lsu_o_rd(lsu_o_rd),
  .lsu_o_data(lsu_o_data),
  .lsu_o_mmio(lsu_o_mmio),
  .lsu_o_fencei_finish(callback_fenceifinish)
);
// ================================================================================================================================================
// MULDIV
// ================================================================================================================================================
lieat_exu_muldiv muldiv(
  .clk(clk),
  .rstn(rstn),
  .muldiv_i_valid(muldiv_i_valid),
  .muldiv_i_ready(muldiv_i_ready),
  .muldiv_i_pc(ex_i_pc),
  .muldiv_i_src1(ex_src1),
  .muldiv_i_src2(ex_src2),
  .muldiv_i_infobus(ex_i_infobus),
  .muldiv_i_rd(ex_i_rd),
  .muldiv_i_rdwen(ex_i_rdwen),

  .muldiv_o_valid(muldiv_o_valid),
  .muldiv_o_ready(muldiv_o_ready),
  .muldiv_o_pc(muldiv_o_pc),
  .muldiv_o_wen(muldiv_o_wen),
  .muldiv_o_rd(muldiv_o_rd),
  .muldiv_o_data(muldiv_o_data)
);
// ================================================================================================================================================
// WBCK
// ================================================================================================================================================
wire com_o_valid;
wire com_o_ready;
wire com_o_wen;
wire [`XLEN-1:0] com_o_pc;
wire [`XLEN-1:0] com_o_data;
wire [`RGIDX_SIZE-1:0] com_o_rd;

wire lsu_o_valid;
wire lsu_o_ready;
wire lsu_o_wen;
wire [`XLEN-1:0] lsu_o_pc;
wire [`XLEN-1:0] lsu_o_data;
wire [`RGIDX_SIZE-1:0] lsu_o_rd;
wire lsu_o_mmio;

wire muldiv_o_valid;
wire muldiv_o_ready;
wire muldiv_o_wen;
wire [`XLEN-1:0] muldiv_o_pc;
wire [`XLEN-1:0] muldiv_o_data;
wire [`RGIDX_SIZE-1:0] muldiv_o_rd;

lieat_exu_wbu wbu(
  .clk(clk),
  .rstn(rstn),

  .com_wbck_valid(com_o_valid),
  .com_wbck_ready(com_o_ready),
  .com_wbck_pc(com_o_pc),
  .com_wbck_en(com_o_wen),
  .com_wbck_rd(com_o_rd),
  .com_wbck_data(com_o_data),

  .lsu_wbck_valid(lsu_o_valid),
  .lsu_wbck_ready(lsu_o_ready),
  .lsu_wbck_pc(lsu_o_pc),
  .lsu_wbck_en(lsu_o_wen),
  .lsu_wbck_rd(lsu_o_rd),
  .lsu_wbck_data(lsu_o_data),
  .lsu_wbck_mmio(lsu_o_mmio),

  .muldiv_wbck_valid(muldiv_o_valid),
  .muldiv_wbck_ready(muldiv_o_ready),
  .muldiv_wbck_pc(muldiv_o_pc),
  .muldiv_wbck_en(muldiv_o_wen),
  .muldiv_wbck_rd(muldiv_o_rd),
  .muldiv_wbck_data(muldiv_o_data),

  .longi_wbck(longi_wbck),
  .longi_wbck_op(longi_wbck_op),
  .oitf_waw_dep(oitf_waw_dep),

  .wbck_o_valid(wbck_o_valid),
  .wbck_o_pc(wbck_o_pc),
  .wbck_o_en(wbck_o_en),
  .wbck_o_rd(wbck_o_rd),
  .wbck_o_data(wbck_o_data),
  .wbck_o_lsu(wbck_o_lsu)
);
// ================================================================================================================================================
// LSU TO DCACHE:REQ AND RSP
// ================================================================================================================================================
wire             lsu_req_valid;
wire             lsu_req_ready;
wire             lsu_req_ren;
wire             lsu_req_wen;
wire [`XLEN-1:0] lsu_req_addr;
wire [2:0]       lsu_req_flag;
wire             lsu_req_fencei;
wire [`XLEN-1:0] lsu_req_wdata;
wire             lsu_rsp_valid;
wire             lsu_rsp_ready;
wire [`XLEN-1:0] lsu_rsp_rdata;

lieat_exu_dcache dcache(
  .clk(clk),
  .rstn(rstn),
  .lsu_req_valid(lsu_req_valid),
  .lsu_req_ready(lsu_req_ready),
  .lsu_req_ren(lsu_req_ren),
  .lsu_req_wen(lsu_req_wen),
  .lsu_req_addr(lsu_req_addr),
  .lsu_req_flag(lsu_req_flag),
  .lsu_req_wdata(lsu_req_wdata),
  .lsu_rsp_valid(lsu_rsp_valid),
  .lsu_rsp_ready(lsu_rsp_ready),
  .lsu_rsp_rdata(lsu_rsp_rdata),
  .lsu_req_fencei(lsu_req_fencei),
  .dcache_axi_arvalid(dcache_axi_arvalid),
  .dcache_axi_arready(dcache_axi_arready),
  .dcache_axi_araddr(dcache_axi_araddr),
  .dcache_axi_arsize(dcache_axi_arsize),
  .dcache_axi_rvalid(dcache_axi_rvalid),
  .dcache_axi_rready(dcache_axi_rready),
  .dcache_axi_rdata(dcache_axi_rdata),
  .dcache_axi_awvalid(dcache_axi_awvalid),
  .dcache_axi_awready(dcache_axi_awready),
  .dcache_axi_awaddr(dcache_axi_awaddr),
  .dcache_axi_awsize(dcache_axi_awsize),
  .dcache_axi_wvalid(dcache_axi_wvalid),
  .dcache_axi_wready(dcache_axi_wready),
  .dcache_axi_wdata(dcache_axi_wdata),
  .dcache_axi_bvalid(dcache_axi_bvalid),
  .dcache_axi_bready(dcache_axi_bready),
  .dcache_axi_bresp(dcache_axi_bresp)
);

endmodule
