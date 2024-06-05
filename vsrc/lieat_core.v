`include "vsrc/lieat_ifu.v"
`include "vsrc/lieat_idu.v"
`include "vsrc/lieat_exu.v"
`include "vsrc/lieat_regfile.v"
`include "vsrc/lieat_axi_master.v"
module lieat_core(
  input clk,
  input rstn,

  input              io_master_awready,
  output             io_master_awvalid,
  output [31:0]      io_master_awaddr,
  output [3:0]       io_master_awid,
  output [7:0]       io_master_awlen,
  output [2:0]       io_master_awsize,
  output [1:0]       io_master_awburst,

  input              io_master_wready,
  output             io_master_wvalid,
  output [31:0]      io_master_wdata,
  output [7:0]       io_master_wstrb,
  output             io_master_wlast,

  output             io_master_bready,
  input              io_master_bvalid,
  input  [1:0]       io_master_bresp,
  input  [3:0]       io_master_bid,

  input              io_master_arready,
  output             io_master_arvalid,
  output [31:0]      io_master_araddr,
  output [3:0]       io_master_arid,
  output [7:0]       io_master_arlen,
  output [2:0]       io_master_arsize,
  output [1:0]       io_master_arburst,

  output             io_master_rready,
  input              io_master_rvalid,
  input  [1:0]       io_master_rresp,
  input  [31:0]      io_master_rdata,
  input              io_master_rlast,
  input  [3:0]       io_master_rid
);
// ================================================================================================================================================
// IFU
// ================================================================================================================================================
wire                   if_o_valid;
wire                   if_o_ready;
wire [`XLEN-1:0]       if_o_pc;
wire [`XLEN-1:0]       if_o_inst;
wire                   if_o_prdt_taken;

wire                   ifu_csr_ren;
wire [11:0]            ifu_csr_idx;
wire [`XLEN-1:0]       ifu_csr_rdata;

lieat_ifu ifu(
  .clk(clk),
  .rstn(rstn),
  //TO IDU
  .if_o_valid(if_o_valid),
  .if_o_ready(if_o_ready),
  .if_o_pc(if_o_pc),
  .if_o_inst(if_o_inst),
  .if_o_prdt_taken(if_o_prdt_taken),
  //TO DRAM
  .icache_axi_arvalid(icache_axi_arvalid),
  .icache_axi_arready(icache_axi_arready),
  .icache_axi_araddr(icache_axi_araddr),
  .icache_axi_rvalid(icache_axi_rvalid),
  .icache_axi_rready(icache_axi_rready),
  .icache_axi_rdata(icache_axi_rdata),
  //FROM EXU:branch callback
  .callback_en(callback_en),
  .callback_index(callback_index),
  .callback_result(callback_result),
  .callback_flush(callback_flush),
  .callback_truepc(callback_truepc),
  .callback_fencei(callback_fenceifinish),
  //TO EXU:csr write
  .ifu_csr_ren(ifu_csr_ren),
  .ifu_csr_idx(ifu_csr_idx),
  .ifu_csr_rdata(ifu_csr_rdata),
  //FROM REGFILE:jalr fetch src1
  .jalr_rs1(if_reg_rs1),
  .jalr_src1(jalr_src1),
  .jalr_dep(jalr_dep),
  .wait_for_ifetch(wait_for_ifetch)
);
// ================================================================================================================================================
// IDU
// ================================================================================================================================================
wire                   id_o_com_valid;
wire                   id_o_com_ready;
wire                   id_o_lsu_valid;
wire                   id_o_lsu_ready;
wire                   id_o_muldiv_valid;
wire                   id_o_muldiv_ready;

wire [`XLEN-1:0]       id_o_pc;
wire [`XLEN-1:0]       id_o_imm;
wire [`XLEN-1:0]       id_o_infobus;
wire [`RGIDX_SIZE-1:0] id_o_rs1;
wire [`RGIDX_SIZE-1:0] id_o_rs2;
wire [`RGIDX_SIZE-1:0] id_o_rd;
wire                   id_o_rdwen;

wire                   jalr_dep;
wire                   wait_for_ifetch;

lieat_idu idu(
  .clk(clk),
  .rstn(rstn),
  //FROM IFU
  .id_i_valid(if_o_valid),
  .id_i_ready(if_o_ready),
  .id_i_pc(if_o_pc),
  .id_i_inst(if_o_inst),
  .id_i_prdt_taken(if_o_prdt_taken),
  //TO EXU
  .id_o_com_valid(id_o_com_valid),
  .id_o_com_ready(id_o_com_ready),
  .id_o_lsu_valid(id_o_lsu_valid),
  .id_o_lsu_ready(id_o_lsu_ready),
  .id_o_muldiv_valid(id_o_muldiv_valid),
  .id_o_muldiv_ready(id_o_muldiv_ready),
  .id_o_pc(id_o_pc),
  .id_o_imm(id_o_imm),
  .id_o_infobus(id_o_infobus),
  .id_o_rs1(id_o_rs1),
  .id_o_rs2(id_o_rs2),
  .id_o_rd(id_o_rd),
  .id_o_rdwen(id_o_rdwen),
  //FROM EXU:flush
  .jalr_rs1(if_reg_rs1),
  .wait_for_ifetch(wait_for_ifetch),
  .jalr_dep(jalr_dep),
  .flush_req(callback_flush),
  //FROM EXU:depend record
  .wbck_dep(wbck_dep),
  .wbck_rd(wbck_o_rd),
  .longi_wbck(longi_wbck),
  .longi_wbck_op(longi_wbck_op),
  .longi_empty(longi_empty)
);
// ================================================================================================================================================
// EXU
// ================================================================================================================================================
wire                   wbck_dep;
wire                   wbck_o_valid;
wire                   wbck_o_en;
wire [`XLEN-1:0]       wbck_o_pc;
wire [`RGIDX_SIZE-1:0] wbck_o_rd;
wire [`XLEN-1:0]       wbck_o_data;
wire                   wbck_o_lsu;

wire                   callback_en;
wire [4:0]             callback_index;
wire                   callback_result;
wire                   callback_flush;
wire [`XLEN-1:0]       callback_truepc;
wire                   callback_fenceifinish;

wire                   longi_empty;
wire                   longi_wbck;
wire [1:0]             longi_wbck_op;

wire [`XLEN-1:0]       jalr_src1;
lieat_exu exu(
  .clk(clk),
  .rstn(rstn),
  //FROM IDU
  .ex_i_pc(id_o_pc),
  .ex_i_imm(id_o_imm),
  .ex_i_infobus(id_o_infobus),
  .ex_i_rs1(id_o_rs1),
  .ex_i_rs2(id_o_rs2),
  .ex_i_rd(id_o_rd),
  .ex_i_rdwen(id_o_rdwen),
  //INTERACT REGFILE:FETCH SRC
  .ex_reg_rs1(ex_reg_rs1),
  .ex_reg_rs2(ex_reg_rs2),
  .ex_reg_src1(ex_reg_src1),
  .ex_reg_src2(ex_reg_src2),
  //FROM IDU
  .com_i_valid(id_o_com_valid),
  .com_i_ready(id_o_com_ready),
  .lsu_i_valid(id_o_lsu_valid),
  .lsu_i_ready(id_o_lsu_ready),
  .muldiv_i_valid(id_o_muldiv_valid),
  .muldiv_i_ready(id_o_muldiv_ready),
  //WBCK
  .wbck_o_valid(wbck_o_valid),
  .wbck_o_pc(wbck_o_pc),
  .wbck_o_en(wbck_o_en),
  .wbck_o_rd(wbck_o_rd),
  .wbck_o_data(wbck_o_data),
  .wbck_o_lsu(wbck_o_lsu),
  //FROM IDU:LONGI DEP
  .longi_wbck(longi_wbck),
  .longi_wbck_op(longi_wbck_op),
  .oitf_waw_dep(wbck_dep),
  //DCACHE:AXI SRAM
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
  .dcache_axi_bresp(dcache_axi_bresp),
  //TO IFU:PRDT CALLBACK
  .callback_en(callback_en),
  .callback_index(callback_index),
  .callback_result(callback_result),
  .callback_flush(callback_flush),
  .callback_truepc(callback_truepc),
  .callback_fenceifinish(callback_fenceifinish),
  //FROM IFU:CSR WRITE
  .ifu_csr_ren(ifu_csr_ren),
  .ifu_csr_idx(ifu_csr_idx),
  .ifu_csr_rdata(ifu_csr_rdata),
  //TO IFU:FORWARD SRC1
  .jalr_rs1(if_reg_rs1),
  .jalr_reg_src1(if_reg_src1),
  .jalr_src1(jalr_src1)
);
// ================================================================================================================================================
// Regfile and Difftest(by DPI-C)
// ================================================================================================================================================
wire [`RGIDX_SIZE-1:0] if_reg_rs1;
wire [`RGIDX_SIZE-1:0] ex_reg_rs1;
wire [`RGIDX_SIZE-1:0] ex_reg_rs2;
wire [`XLEN-1:0]       if_reg_src1;
wire [`XLEN-1:0]       ex_reg_src1;
wire [`XLEN-1:0]       ex_reg_src2;

lieat_regfile regfile(
  .clk(clk),
  .rstn(rstn),

  .ifu_rs1(if_reg_rs1),
  .exu_rs1(ex_reg_rs1),
  .exu_rs2(ex_reg_rs2),
  .ifu_src1(if_reg_src1),
  .exu_src1(ex_reg_src1),
  .exu_src2(ex_reg_src2),

  .wb_pc(wbck_o_pc),
  .wb_valid(wbck_o_valid),
  .wb_en(wbck_o_en),
  .wb_rd(wbck_o_rd),
  .wb_data(wbck_o_data),
  .wb_lsu(wbck_o_lsu),
  .longi_empty(longi_empty)
);
// ================================================================================================================================================
// AXI MASTER
// ================================================================================================================================================
wire             icache_axi_arvalid;
wire             icache_axi_arready;
wire [`XLEN-1:0] icache_axi_araddr;
wire             icache_axi_rvalid;
wire             icache_axi_rready;
wire [`XLEN-1:0] icache_axi_rdata;
wire             dcache_axi_arvalid;
wire             dcache_axi_arready;
wire [`XLEN-1:0] dcache_axi_araddr;
wire [2:0]       dcache_axi_arsize;
wire             dcache_axi_rvalid;
wire             dcache_axi_rready;
wire [`XLEN-1:0] dcache_axi_rdata;
wire             dcache_axi_awvalid;
wire             dcache_axi_awready;
wire [`XLEN-1:0] dcache_axi_awaddr;
wire [2:0]       dcache_axi_awsize;
wire             dcache_axi_wvalid;
wire             dcache_axi_wready;
wire [`XLEN-1:0] dcache_axi_wdata;
wire             dcache_axi_bvalid;
wire             dcache_axi_bready;
wire [1:0]       dcache_axi_bresp;

lieat_axi_master axi_master(
  .icache_axi_arvalid(icache_axi_arvalid),
  .icache_axi_arready(icache_axi_arready),
  .icache_axi_araddr(icache_axi_araddr),
  .icache_axi_rvalid(icache_axi_rvalid),
  .icache_axi_rready(icache_axi_rready),
  .icache_axi_rdata(icache_axi_rdata),
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
  .dcache_axi_bresp(dcache_axi_bresp),

  .io_master_awready(io_master_awready),
  .io_master_awvalid(io_master_awvalid),
  .io_master_awaddr(io_master_awaddr),
  .io_master_awid(io_master_awid),
  .io_master_awlen(io_master_awlen),
  .io_master_awsize(io_master_awsize),
  .io_master_awburst(io_master_awburst),

  .io_master_wready(io_master_wready),
  .io_master_wvalid(io_master_wvalid),
  .io_master_wdata(io_master_wdata),
  .io_master_wstrb(io_master_wstrb),
  .io_master_wlast(io_master_wlast),

  .io_master_bready(io_master_bready),
  .io_master_bvalid(io_master_bvalid),
  .io_master_bresp(io_master_bresp),
  .io_master_bid(io_master_bid),

  .io_master_arready(io_master_arready),
  .io_master_arvalid(io_master_arvalid),
  .io_master_araddr(io_master_araddr),
  .io_master_arid(io_master_arid),
  .io_master_arlen(io_master_arlen),
  .io_master_arsize(io_master_arsize),
  .io_master_arburst(io_master_arburst),

  .io_master_rready(io_master_rready),
  .io_master_rvalid(io_master_rvalid),
  .io_master_rresp(io_master_rresp),
  .io_master_rdata(io_master_rdata),
  .io_master_rlast(io_master_rlast),
  .io_master_rid(io_master_rid)
);
endmodule
