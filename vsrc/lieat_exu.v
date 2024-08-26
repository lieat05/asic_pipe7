module lieat_exu(
  input                 clock,
  input                 reset,
  
  input [`XLEN-1:0]     ex_i_pc,
  input [`XLEN-1:0]     ex_i_imm,
  input [`XLEN-1:0]     ex_i_infobus,
  input [`REG_IDX-1:0]  ex_i_rd,
  input                 ex_i_rdwen,

  input [`REG_IDX-1:0]  ex_i_rs1,
  input [`REG_IDX-1:0]  ex_i_rs2,
  input [`XLEN-1:0]     ex_i_reg_src1,
  input [`XLEN-1:0]     ex_i_reg_src2,
  
  input                 com_i_valid,
  output                com_i_ready,
  input                 lsu_i_valid,
  output                lsu_i_ready,
  input                 muldiv_i_valid,
  output                muldiv_i_ready,

  input                 oitf_waw_dep,
  output [`XLEN-1:0]    wbck_o_pc,
  output [2:0]          wbck_o_op,
  output                wbck_o_valid,
  output                wbck_o_en,
  output [`REG_IDX-1:0] wbck_o_rd,
  output [`XLEN-1:0]    wbck_o_data,
  output                wbck_o_lsu,
  output                wbck_o_ebreak,
  
  output                com_o_flush,
  output                lsu_o_flush,
  output                muldiv_o_flush,

  output                dcache_axi_arvalid,
  input                 dcache_axi_arready,
  output [`XLEN-1:0]    dcache_axi_araddr,
  output [2:0]          dcache_axi_arsize,
  input                 dcache_axi_rvalid,
  output                dcache_axi_rready,
  input  [63:0]         dcache_axi_rdata,
  output                dcache_axi_awvalid,
  input                 dcache_axi_awready,
  output [`XLEN-1:0]    dcache_axi_awaddr,
  output [2:0]          dcache_axi_awsize,
  output                dcache_axi_wvalid,
  input                 dcache_axi_wready,
  output [63:0]         dcache_axi_wdata,
  output [7:0]          dcache_axi_wstrb,
  input                 dcache_axi_bvalid,
  output                dcache_axi_bready,
  input  [1:0]          dcache_axi_bresp,

  output                ex_to_callback_prdt_en,
  output [4:0]          ex_to_callback_prdt_index,
  output                ex_to_callback_prdt_res,
  output                ex_to_flush_req,
  output [`XLEN-1:0]    ex_to_flush_pc,
  output                prdt_fenceifinish,
  input                 if_to_flush_sh,

  input                 ifu_csr_ren,
  input  [11:0]         ifu_csr_idx,
  output [`XLEN-1:0]    ifu_csr_rdata
);
// ================================================================================================================================================
// SIGNAL LIST
// ================================================================================================================================================
wire                ex_i_sh;
wire                com_i_sh;
wire                lsu_i_sh;
wire                muldiv_i_sh;

wire [`XLEN-1:0]    ex_i_src1;
wire [`XLEN-1:0]    ex_i_src2;

wire                com_o_valid;
wire                com_o_ready;
wire                com_o_wen;
wire [`XLEN-1:0]    com_o_pc;
wire [`XLEN-1:0]    com_o_data;
wire [`REG_IDX-1:0] com_o_rd;
wire                com_o_ebreak;

wire                lsu_o_valid;
wire                lsu_o_ready;
wire                lsu_o_wen;
wire [`XLEN-1:0]    lsu_o_pc;
wire [`XLEN-1:0]    lsu_o_data;
wire [`REG_IDX-1:0] lsu_o_rd;
wire                lsu_o_mmio;

wire                muldiv_o_valid;
wire                muldiv_o_ready;
wire                muldiv_o_wen;
wire [`XLEN-1:0]    muldiv_o_pc;
wire [`XLEN-1:0]    muldiv_o_data;
wire [`REG_IDX-1:0] muldiv_o_rd;

wire                flush_req;

wire                lsu_req_valid;
wire                lsu_req_ready;
wire                lsu_req_ren;
wire                lsu_req_wen;
wire [`XLEN-1:0]    lsu_req_addr;
wire [2:0]          lsu_req_flag;
wire                lsu_req_fencei;
wire [`XLEN-1:0]    lsu_req_wdata;
wire                lsu_rsp_valid;
wire                lsu_rsp_ready;
wire [`XLEN-1:0]    lsu_rsp_rdata;
// ================================================================================================================================================
// INPUT SIGNAL
// ================================================================================================================================================
assign ex_i_sh = com_i_sh | lsu_i_sh | muldiv_i_sh;
assign com_i_sh = com_i_valid & com_i_ready;
assign lsu_i_sh = lsu_i_valid & lsu_i_ready;
assign muldiv_i_sh = muldiv_i_valid & muldiv_i_ready;
// ================================================================================================================================================
// FORWARD SRC
// ================================================================================================================================================
assign ex_i_src1 = ex_i_reg_src1;
assign ex_i_src2 = ex_i_reg_src2;
// ================================================================================================================================================
// COM
// ================================================================================================================================================
lieat_exu_com com(
  .clock(clock),
  .reset(reset),
  
  .com_i_valid(com_i_valid),
  .com_i_ready(com_i_ready),
  .com_i_pc(ex_i_pc),
  .com_i_imm(ex_i_imm),
  .com_i_infobus(ex_i_infobus),
  .com_i_rd(ex_i_rd),
  .com_i_rdwen(ex_i_rdwen),
  .com_i_src1(ex_i_src1),
  .com_i_src2(ex_i_src2),

  .com_o_valid(com_o_valid),
  .com_o_ready(com_o_ready),
  .com_o_pc(com_o_pc),
  .com_o_wen(com_o_wen),
  .com_o_rd(com_o_rd),
  .com_o_data(com_o_data),
  .com_o_ebreak(com_o_ebreak),
  .com_o_flush(com_o_flush),

  .prdt_en(ex_to_callback_prdt_en),
  .prdt_index(ex_to_callback_prdt_index),
  .prdt_res(ex_to_callback_prdt_res),
  .prdt_flush(flush_req),
  .prdt_pc(ex_to_flush_pc),
  .flush_sh(if_to_flush_sh),
  
  .ifu_csr_ren(ifu_csr_ren),
  .ifu_csr_idx(ifu_csr_idx),
  .ifu_csr_rdata(ifu_csr_rdata)
);
assign ex_to_flush_req = flush_req;
// ================================================================================================================================================
// LSU
// ================================================================================================================================================
lieat_exu_lsu lsu(
  .clock(clock),
  .reset(reset),
  .flush_req(flush_req),
  .lsu_i_valid(lsu_i_valid),
  .lsu_i_ready(lsu_i_ready),
  .lsu_i_pc(ex_i_pc),
  .lsu_i_imm(ex_i_imm),
  .lsu_i_src1(ex_i_src1),
  .lsu_i_src2(ex_i_src2),
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
  .lsu_o_fencei_finish(prdt_fenceifinish),
  .lsu_o_flush(lsu_o_flush)
);
// ================================================================================================================================================
// MULDIV
// ================================================================================================================================================
lieat_exu_muldiv muldiv(
  .clock(clock),
  .reset(reset),
  .flush_req(flush_req),
  .muldiv_i_valid(muldiv_i_valid),
  .muldiv_i_ready(muldiv_i_ready),
  .muldiv_i_pc(ex_i_pc),
  .muldiv_i_src1(ex_i_src1),
  .muldiv_i_src2(ex_i_src2),
  .muldiv_i_infobus(ex_i_infobus),
  .muldiv_i_rd(ex_i_rd),
  .muldiv_i_rdwen(ex_i_rdwen),

  .muldiv_o_valid(muldiv_o_valid),
  .muldiv_o_ready(muldiv_o_ready),
  .muldiv_o_pc(muldiv_o_pc),
  .muldiv_o_wen(muldiv_o_wen),
  .muldiv_o_rd(muldiv_o_rd),
  .muldiv_o_data(muldiv_o_data),
  .muldiv_o_flush(muldiv_o_flush)
);
// ================================================================================================================================================
// WBCK
// ================================================================================================================================================
lieat_exu_wbu wbu(
  .clock(clock),
  .reset(reset),

  .com_wbck_valid(com_o_valid),
  .com_wbck_ready(com_o_ready),
  .com_wbck_pc(com_o_pc),
  .com_wbck_en(com_o_wen),
  .com_wbck_rd(com_o_rd),
  .com_wbck_data(com_o_data),
  .com_wbck_ebreak(com_o_ebreak),

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

  .oitf_waw_dep(oitf_waw_dep),
  .wbck_o_valid(wbck_o_valid),
  .wbck_o_op(wbck_o_op),
  .wbck_o_pc(wbck_o_pc),
  .wbck_o_en(wbck_o_en),
  .wbck_o_rd(wbck_o_rd),
  .wbck_o_data(wbck_o_data),
  .wbck_o_lsu(wbck_o_lsu),
  .wbck_o_ebreak(wbck_o_ebreak)
);
// ================================================================================================================================================
// LSU TO DCACHE:REQ AND RSP
// ================================================================================================================================================
lieat_exu_dcache dcache(
  .clock(clock),
  .reset(reset),
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
  .dcache_axi_wstrb(dcache_axi_wstrb),
  .dcache_axi_bvalid(dcache_axi_bvalid),
  .dcache_axi_bready(dcache_axi_bready),
  .dcache_axi_bresp(dcache_axi_bresp)
);
endmodule
