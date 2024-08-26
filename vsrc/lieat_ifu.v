module lieat_ifu(
  input                 clock,
  input                 reset,

  output                if_o_valid,
  input                 if_o_ready,
  output [`XLEN-1:0]    if_o_pc,
  output [`XLEN-1:0]    if_o_inst,
  output                if_o_prdt_taken,

  output                icache_axi_arvalid,
  input                 icache_axi_arready,
  output [`XLEN-1:0]    icache_axi_araddr,
  input                 icache_axi_rvalid,
  output                icache_axi_rready,
  input  [63:0]         icache_axi_rdata,

  input                 ex_to_callback_prdt_en,
  input  [4:0]          ex_to_callback_prdt_index,
  input                 ex_to_callback_prdt_res,

  input                 ex_to_flush_req,
  input  [`XLEN-1:0]    ex_to_flush_pc,
  output                if_to_flush_sh,

  input                 fencei_over,

  output                ifu_csr_ren,
  output [11:0]         ifu_csr_idx,
  input  [`XLEN-1:0]    ifu_csr_rdata,

  output [`REG_IDX-1:0] ifu_jalr_rs1,
  input  [`XLEN-1:0]    ifu_jalr_src1,
  input                 ifu_jalr_dep,
  output                wait_for_ifetch
);
// ================================================================================================================================================
// SIGNAL LIST
// ================================================================================================================================================
wire if_o_sh = if_o_valid & if_o_ready;
wire ifetch_req_valid;
wire ifetch_req_ready;

wire ifetch_rsp_valid;
wire ifetch_rsp_csr;
wire ifetch_rsp_rs1en;
wire ifetch_rsp_fencei;
wire ifetch_rsp_prdt_taken;
wire [11:0] ifetch_rsp_csridx;
wire [`REG_IDX-1:0] ifetch_rsp_rs1;
wire [`XLEN-1:0] ifetch_rsp_src1;
wire [`XLEN-1:0] ifetch_rsp_immb;
wire [`XLEN-1:0] ifetch_rsp_pc;
wire [`XLEN-1:0] ifetch_rsp_inst;

wire [`XLEN-1:0] ifetch_req_pc;
// ================================================================================================================================================
// STAGE1:GENERARE_PC(AGU)  IFETCH_REQ
// ================================================================================================================================================
lieat_ifu_ifetch_req ifu_stage1(
  .clock(clock),
  .reset(reset),
  
  .req_i_ifsh(if_o_sh),
  .req_i_flush(ex_to_flush_req),
  .req_i_flush_pc(ex_to_flush_pc),
  .req_i_valid(ifetch_rsp_valid),
  .req_i_pc(ifetch_rsp_pc),
  .req_i_prdt_taken(ifetch_rsp_prdt_taken),
  .req_i_rs1en(ifetch_rsp_rs1en),
  .req_i_rs1(ifetch_rsp_rs1),
  .req_i_rs1dep(ifu_jalr_dep),
  .req_i_csr(ifetch_rsp_csr),
  .req_i_csridx(ifetch_rsp_csridx),
  .req_i_immb(ifetch_rsp_immb),
  .req_i_fencei(ifetch_rsp_fencei),
  .req_i_fencei_over(fencei_over),

  .req_fetch_csr(ifu_csr_ren),
  .req_fetch_csridx(ifu_csr_idx),
  .req_fetch_rs1(ifu_jalr_rs1),
  .req_fetch_src1(ifu_jalr_src1),
  .req_fetch_csr_rdata(ifu_csr_rdata),

  .req_o_valid(ifetch_req_valid),
  .req_o_ready(ifetch_req_ready),
  .req_o_pc(ifetch_req_pc),
  .req_o_wait(wait_for_ifetch)
);
// ================================================================================================================================================
// ICACHE
// ================================================================================================================================================
lieat_ifu_icache icache(
  .clock(clock),
  .reset(reset),
  .flush_req(ex_to_flush_req),
  .fencei_req(ifetch_rsp_fencei),

  .ifetch_req_valid(ifetch_req_valid),
  .ifetch_req_ready(ifetch_req_ready),
  .ifetch_req_pc(ifetch_req_pc),

  .ifetch_rsp_valid(if_o_valid),
  .ifetch_rsp_ready(if_o_ready),
  .ifetch_rsp_pc(ifetch_rsp_pc),
  .ifetch_rsp_inst(ifetch_rsp_inst),

  .icache_axi_arvalid(icache_axi_arvalid),
  .icache_axi_arready(icache_axi_arready),
  .icache_axi_araddr(icache_axi_araddr),

  .icache_axi_rvalid(icache_axi_rvalid),
  .icache_axi_rready(icache_axi_rready),
  .icache_axi_rdata(icache_axi_rdata)
);
// ================================================================================================================================================
// STAGE2:IFETCH_RSP BPU
// ================================================================================================================================================
lieat_ifu_ifetch_rsp ifu_stage2(
  .clock(clock),
  .reset(reset),

  .rsp_i_valid(if_o_valid),
  .rsp_i_pc(if_o_pc),
  .rsp_i_inst(if_o_inst),

  .rsp_o_valid(ifetch_rsp_valid),
  .rsp_o_rs1en(ifetch_rsp_rs1en),
  .rsp_o_rs1(ifetch_rsp_rs1),
  .rsp_o_csr(ifetch_rsp_csr),
  .rsp_o_csridx(ifetch_rsp_csridx),
  .rsp_o_immb(ifetch_rsp_immb),
  .rsp_o_prdt_taken(ifetch_rsp_prdt_taken),
  .rsp_o_fencei(ifetch_rsp_fencei),

  .bxx_prdt_result(ex_to_callback_prdt_res),
  .bxx_prdt_index(ex_to_callback_prdt_index),
  .bxx_prdt_en(ex_to_callback_prdt_en)
);
// ================================================================================================================================================
// OUTPUT SINGAL
// ================================================================================================================================================
assign if_o_pc = ifetch_rsp_pc;
assign if_o_inst = ifetch_rsp_inst;
assign if_o_prdt_taken = ifetch_rsp_prdt_taken;
assign if_to_flush_sh  = ifetch_req_ready;
endmodule
