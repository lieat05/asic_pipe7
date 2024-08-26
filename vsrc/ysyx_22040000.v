`include "lieat_defines.v"
`include "lieat_general_dff.v"

module ysyx_22040000(
  input         clock,
  input         reset,
  input         io_interrupt,
  input         io_master_awready,
  output        io_master_awvalid,
  output [3:0]  io_master_awid,
  output [31:0] io_master_awaddr,
  output [7:0]  io_master_awlen,
  output [2:0]  io_master_awsize,
  output [1:0]  io_master_awburst,

  input         io_master_wready,
  output        io_master_wvalid,
  output [63:0] io_master_wdata,
  output [7:0]  io_master_wstrb,
  output        io_master_wlast,

  output        io_master_bready,
  input         io_master_bvalid,
  input  [3:0]  io_master_bid,
  input  [1:0]  io_master_bresp,

  input         io_master_arready,
  output        io_master_arvalid,
  output [3:0]  io_master_arid,
  output [31:0] io_master_araddr,
  output [7:0]  io_master_arlen,
  output [2:0]  io_master_arsize,
  output [1:0]  io_master_arburst,

  output        io_master_rready,
  input         io_master_rvalid,
  input  [3:0]  io_master_rid,
  input  [1:0]  io_master_rresp,
  input  [63:0] io_master_rdata,
  input         io_master_rlast,

  output        io_slave_awready,
  input         io_slave_awvalid,
  input [3:0]   io_slave_awid,
  input [31:0]  io_slave_awaddr,
  input [7:0]   io_slave_awlen,
  input [2:0]   io_slave_awsize,
  input [1:0]   io_slave_awburst,

  output        io_slave_wready,
  input         io_slave_wvalid,
  input [63:0]  io_slave_wdata,
  input [7:0]   io_slave_wstrb,
  input         io_slave_wlast,

  input         io_slave_bready,
  output        io_slave_bvalid,
  output [3:0]  io_slave_bid,
  output [1:0]  io_slave_bresp,

  output        io_slave_arready,
  input         io_slave_arvalid,
  input [3:0]   io_slave_arid,
  input [31:0]  io_slave_araddr,
  input [7:0]   io_slave_arlen,
  input [2:0]   io_slave_arsize,
  input [1:0]   io_slave_arburst,

  input         io_slave_rready,
  output        io_slave_rvalid,
  output [3:0]  io_slave_rid,
  output [1:0]  io_slave_rresp,
  output [63:0] io_slave_rdata,
  output        io_slave_rlast,

  output [5:0]  io_sram0_addr,
  output        io_sram0_cen,
  output        io_sram0_wen,
  output [127:0]io_sram0_wmask,
  output [127:0]io_sram0_wdata,
  input  [127:0]io_sram0_rdata,
  output [5:0]  io_sram1_addr,
  output        io_sram1_cen,
  output        io_sram1_wen,
  output [127:0]io_sram1_wmask,
  output [127:0]io_sram1_wdata,
  input  [127:0]io_sram1_rdata,
  output [5:0]  io_sram2_addr,
  output        io_sram2_cen,
  output        io_sram2_wen,
  output [127:0]io_sram2_wmask,
  output [127:0]io_sram2_wdata,
  input  [127:0]io_sram2_rdata,
  output [5:0]  io_sram3_addr,
  output        io_sram3_cen,
  output        io_sram3_wen,
  output [127:0]io_sram3_wmask,
  output [127:0]io_sram3_wdata,
  input  [127:0]io_sram3_rdata,
  output [5:0]  io_sram4_addr,
  output        io_sram4_cen,
  output        io_sram4_wen,
  output [127:0]io_sram4_wmask,
  output [127:0]io_sram4_wdata,
  input  [127:0]io_sram4_rdata,
  output [5:0]  io_sram5_addr,
  output        io_sram5_cen,
  output        io_sram5_wen,
  output [127:0]io_sram5_wmask,
  output [127:0]io_sram5_wdata,
  input  [127:0]io_sram5_rdata,
  output [5:0]  io_sram6_addr,
  output        io_sram6_cen,
  output        io_sram6_wen,
  output [127:0]io_sram6_wmask,
  output [127:0]io_sram6_wdata,
  input  [127:0]io_sram6_rdata,
  output [5:0]  io_sram7_addr,
  output        io_sram7_cen,
  output        io_sram7_wen,
  output [127:0]io_sram7_wmask,
  output [127:0]io_sram7_wdata,
  input  [127:0]io_sram7_rdata
);
assign io_slave_awready = 1'b0;
assign io_slave_wready = 1'b0;
assign io_slave_bvalid = 1'b0;
assign io_slave_bid = 4'b0;
assign io_slave_bresp = 2'b0;
assign io_slave_arready = 1'b0;
assign io_slave_rvalid = 1'b0;
assign io_slave_rid = 4'b0;
assign io_slave_rresp = 2'b0;
assign io_slave_rdata = 64'b0;
assign io_slave_rlast = 1'b0;

assign io_sram0_addr = 6'b0;
assign io_sram1_addr = 6'b0;
assign io_sram2_addr = 6'b0;
assign io_sram3_addr = 6'b0;
assign io_sram4_addr = 6'b0;
assign io_sram5_addr = 6'b0;
assign io_sram6_addr = 6'b0;
assign io_sram7_addr = 6'b0;
assign io_sram0_cen  = 1'b0;
assign io_sram1_cen  = 1'b0;
assign io_sram2_cen  = 1'b0;
assign io_sram3_cen  = 1'b0;
assign io_sram4_cen  = 1'b0;
assign io_sram5_cen  = 1'b0;
assign io_sram6_cen  = 1'b0;
assign io_sram7_cen  = 1'b0;
assign io_sram0_wen  = 1'b0;
assign io_sram1_wen  = 1'b0;
assign io_sram2_wen  = 1'b0;
assign io_sram3_wen  = 1'b0;
assign io_sram4_wen  = 1'b0;
assign io_sram5_wen  = 1'b0;
assign io_sram6_wen  = 1'b0;
assign io_sram7_wen  = 1'b0;
assign io_sram0_wmask = 128'b0;
assign io_sram1_wmask = 128'b0;
assign io_sram2_wmask = 128'b0;
assign io_sram3_wmask = 128'b0;
assign io_sram4_wmask = 128'b0;
assign io_sram5_wmask = 128'b0;
assign io_sram6_wmask = 128'b0;
assign io_sram7_wmask = 128'b0;
assign io_sram0_wdata = 128'b0;
assign io_sram1_wdata = 128'b0;
assign io_sram2_wdata = 128'b0;
assign io_sram3_wdata = 128'b0;
assign io_sram4_wdata = 128'b0;
assign io_sram5_wdata = 128'b0;
assign io_sram6_wdata = 128'b0;
assign io_sram7_wdata = 128'b0;
// ================================================================================================================================================
// SIGNAL LIST
// ================================================================================================================================================
wire unused_ok =&{io_interrupt,io_slave_awvalid,io_slave_awid,io_slave_awaddr,io_slave_awlen,io_slave_awsize,io_slave_awburst,io_slave_wvalid,io_slave_wdata,io_slave_wstrb,io_slave_wlast,io_slave_bready,io_slave_arvalid,io_slave_arid,io_slave_araddr,io_slave_arlen,io_slave_arsize,io_slave_arburst,io_slave_rready,
io_sram0_rdata,io_sram1_rdata,io_sram2_rdata,io_sram3_rdata,io_sram4_rdata,io_sram5_rdata,io_sram6_rdata,io_sram7_rdata};

wire                icache_axi_arvalid;
wire                icache_axi_arready;
wire [`XLEN-1:0]    icache_axi_araddr;
wire                icache_axi_rvalid;
wire                icache_axi_rready;
wire [`AXILEN-1:0]  icache_axi_rdata;
wire                dcache_axi_arvalid;
wire                dcache_axi_arready;
wire [`XLEN-1:0]    dcache_axi_araddr;
wire [2:0]          dcache_axi_arsize;
wire                dcache_axi_rvalid;
wire                dcache_axi_rready;
wire [`AXILEN-1:0]  dcache_axi_rdata;
wire                dcache_axi_awvalid;
wire                dcache_axi_awready;
wire [`XLEN-1:0]    dcache_axi_awaddr;
wire [2:0]          dcache_axi_awsize;
wire                dcache_axi_wvalid;
wire                dcache_axi_wready;
wire [`AXILEN-1:0]  dcache_axi_wdata;
wire [7:0]          dcache_axi_wstrb;
wire                dcache_axi_bvalid;
wire                dcache_axi_bready;
wire [1:0]          dcache_axi_bresp;

wire                if_o_valid;
wire                if_o_ready;
wire [`XLEN-1:0]    if_o_pc;
wire [`XLEN-1:0]    if_o_inst;
wire                if_o_prdt_taken;

wire                ifu_csr_ren;
wire [11:0]         ifu_csr_idx;
wire [`XLEN-1:0]    ifu_csr_rdata;

wire                id_o_com_valid;
wire                id_o_com_ready;
wire                id_o_lsu_valid;
wire                id_o_lsu_ready;
wire                id_o_muldiv_valid;
wire                id_o_muldiv_ready;

wire [`XLEN-1:0]    id_o_pc;
wire [`XLEN-1:0]    id_o_imm;
wire [`XLEN-1:0]    id_o_infobus;
wire [`REG_IDX-1:0] id_o_rs1;
wire [`REG_IDX-1:0] id_o_rs2;
wire [`REG_IDX-1:0] id_o_rd;
wire                id_o_rdwen;
wire [`XLEN-1:0]    id_o_reg_src1;
wire [`XLEN-1:0]    id_o_reg_src2;

wire                wbck_dep;
wire                wbck_o_valid;
wire [2:0]          wbck_o_op;
wire                wbck_o_en;
wire [`XLEN-1:0]    wbck_o_pc;
wire [`REG_IDX-1:0] wbck_o_rd;
wire [`XLEN-1:0]    wbck_o_data;
wire                wbck_o_lsu;
wire                wbck_o_ebreak;

wire                ex_to_callback_prdt_en;
wire [4:0]          ex_to_callback_prdt_index;
wire                ex_to_callback_prdt_res;
wire                ex_to_flush_req;
wire [`XLEN-1:0]    ex_to_flush_pc;
wire                prdt_fenceifinish;

wire                if_to_flush_sh;
wire                com_o_flush;
wire                lsu_o_flush;
wire                muldiv_o_flush;
wire                longi_empty;

wire [`REG_IDX-1:0] ifu_reg_rs1;
wire [`XLEN-1:0]    ifu_reg_src1;
wire                ifu_jalr_dep;
wire                wait_for_ifetch;
// ================================================================================================================================================
// IFU
// ================================================================================================================================================
lieat_ifu ifu(
  .clock(clock),
  .reset(reset),
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
  //FROM EXU:PRDT CALLBACK
  .ex_to_callback_prdt_en(ex_to_callback_prdt_en),
  .ex_to_callback_prdt_index(ex_to_callback_prdt_index),
  .ex_to_callback_prdt_res(ex_to_callback_prdt_res),
  //FROM EXU:FLUSH
  .ex_to_flush_req(ex_to_flush_req),
  .ex_to_flush_pc(ex_to_flush_pc),
  .if_to_flush_sh(if_to_flush_sh),
  //FROM EXU:fencei_finish
  .fencei_over(prdt_fenceifinish),
  //TO EXU:csr write
  .ifu_csr_ren(ifu_csr_ren),
  .ifu_csr_idx(ifu_csr_idx),
  .ifu_csr_rdata(ifu_csr_rdata),
  //FROM REGFILE:jalr fetch src1
  .ifu_jalr_rs1(ifu_reg_rs1),
  .ifu_jalr_src1(ifu_reg_src1),
  .ifu_jalr_dep(ifu_jalr_dep),
  .wait_for_ifetch(wait_for_ifetch)
);
// ================================================================================================================================================
// IDU
// ================================================================================================================================================
lieat_idu idu(
  .clock(clock),
  .reset(reset),
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
  //FROM EXU:RS1
  .ifu_jalr_rs1(ifu_reg_rs1),
  .ifu_jalr_dep(ifu_jalr_dep),
  .wait_for_ifetch(wait_for_ifetch),
  //FROM EXU:FLUSH
  .flush_req(ex_to_flush_req),
  .com_flush(com_o_flush),
  .lsu_flush(lsu_o_flush),
  .muldiv_flush(muldiv_o_flush),
  //FROM EXU:OITF WBCK
  .wbck_dep(wbck_dep),
  .wbck_rd(wbck_o_rd),
  .wbck_op(wbck_o_op),
  .wbck_valid(wbck_o_valid),
  .longi_empty(longi_empty)
);
// ================================================================================================================================================
// EXU
// ================================================================================================================================================
lieat_exu exu(
  .clock(clock),
  .reset(reset),
  //FROM IDU
  .ex_i_pc(id_o_pc),
  .ex_i_imm(id_o_imm),
  .ex_i_infobus(id_o_infobus),
  .ex_i_rd(id_o_rd),
  .ex_i_rdwen(id_o_rdwen),
  .ex_i_rs1(id_o_rs1),
  .ex_i_rs2(id_o_rs2),
  .ex_i_reg_src1(id_o_reg_src1),
  .ex_i_reg_src2(id_o_reg_src2),
  //FROM IDU
  .com_i_valid(id_o_com_valid),
  .com_i_ready(id_o_com_ready),
  .lsu_i_valid(id_o_lsu_valid),
  .lsu_i_ready(id_o_lsu_ready),
  .muldiv_i_valid(id_o_muldiv_valid),
  .muldiv_i_ready(id_o_muldiv_ready),
  //WBCK
  .wbck_o_valid(wbck_o_valid),
  .wbck_o_op(wbck_o_op),
  .wbck_o_pc(wbck_o_pc),
  .wbck_o_en(wbck_o_en),
  .wbck_o_rd(wbck_o_rd),
  .wbck_o_data(wbck_o_data),
  .wbck_o_lsu(wbck_o_lsu),
  .wbck_o_ebreak(wbck_o_ebreak),
  //FROM IDU:LONGI DEP
  .com_o_flush(com_o_flush),
  .lsu_o_flush(lsu_o_flush),
  .muldiv_o_flush(muldiv_o_flush),
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
  .dcache_axi_wstrb(dcache_axi_wstrb),
  .dcache_axi_bvalid(dcache_axi_bvalid),
  .dcache_axi_bready(dcache_axi_bready),
  .dcache_axi_bresp(dcache_axi_bresp),
  //TO IFU:PRDT prdt
  .ex_to_callback_prdt_en(ex_to_callback_prdt_en),
  .ex_to_callback_prdt_index(ex_to_callback_prdt_index),
  .ex_to_callback_prdt_res(ex_to_callback_prdt_res),
  //FROM EXU:FLUSH
  .ex_to_flush_req(ex_to_flush_req),
  .ex_to_flush_pc(ex_to_flush_pc),
  .prdt_fenceifinish(prdt_fenceifinish),
  .if_to_flush_sh(if_to_flush_sh),
  //FROM IFU:CSR WRITE
  .ifu_csr_ren(ifu_csr_ren),
  .ifu_csr_idx(ifu_csr_idx),
  .ifu_csr_rdata(ifu_csr_rdata)
);
// ================================================================================================================================================
// Regfile and Difftest
// ================================================================================================================================================
lieat_regfile regfile(
  .clock(clock),
  .reset(reset),

  .ifu_rs1(ifu_reg_rs1),
  .exu_rs1(id_o_rs1),
  .exu_rs2(id_o_rs2),
  .ifu_src1(ifu_reg_src1),
  .exu_src1(id_o_reg_src1),
  .exu_src2(id_o_reg_src2),

  .wb_pc(wbck_o_pc),
  .wb_valid(wbck_o_valid),
  .wb_en(wbck_o_en),
  .wb_rd(wbck_o_rd),
  .wb_data(wbck_o_data),
  .wb_lsu(wbck_o_lsu),
  .wb_ebreak(wbck_o_ebreak),
  .longi_empty(longi_empty)
);
// ================================================================================================================================================
// AXI MASTER
// ================================================================================================================================================
lieat_axi_master axi_master(
  .clock(clock),
  .reset(reset),
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
  .dcache_axi_wstrb(dcache_axi_wstrb),
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

