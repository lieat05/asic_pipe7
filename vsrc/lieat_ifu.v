`include "vsrc/lieat_ifu_agu.v"
`include "vsrc/lieat_ifu_bpu.v"
`include "vsrc/lieat_ifu_icache.v"
module lieat_ifu(
  input                    clk,
  input                    rstn,
  //TO IDU
  output                   if_o_valid,
  input                    if_o_ready,
  output [`XLEN-1:0]       if_o_pc,
  output [`XLEN-1:0]       if_o_inst,
  output                   if_o_prdt_taken,
  //TO DRAM
  output                   icache_axi_arvalid,
  input                    icache_axi_arready,
  output [`XLEN-1:0]       icache_axi_araddr,
  input                    icache_axi_rvalid,
  output                   icache_axi_rready,
  input  [`XLEN-1:0]       icache_axi_rdata,
  //FROM EXU:branch callback
  input                    callback_en,
  input  [4:0]             callback_index,
  input                    callback_result,
  input                    callback_flush,
  input  [`XLEN-1:0]       callback_truepc,
  input                    callback_fencei,
  //TO EXU:csr write
  output                   ifu_csr_ren,
  output [11:0]            ifu_csr_idx,
  input  [`XLEN-1:0]       ifu_csr_rdata,
  //FROM REGFILE:jalr fetch src1
  output [`RGIDX_SIZE-1:0] jalr_rs1,
  input  [`XLEN-1:0]       jalr_src1,
  input                    jalr_dep,
  output                   wait_for_ifetch
);
// ================================================================================================================================================
// VALID-READY HANDSHAKE
// ================================================================================================================================================
wire ifetch_req_sh = ifetch_req_valid & ifetch_req_ready;
wire if_o_sh       = if_o_valid & if_o_ready;
// ================================================================================================================================================
// WAIT FOR CONDITION:FENCEI OR SRC1
// ================================================================================================================================================
wire fencei_req;//when ifu fetch fencei,next inst cant be fetched until exu write back fencei
wire jalr_need_wait;//wait for src1
wire fencei_need_wait;
wire fencei_need_wait_set = fencei_req & if_o_sh;
wire fencei_need_wait_clr = callback_fencei;
wire fencei_need_wait_ena = fencei_need_wait_set | fencei_need_wait_clr;
wire fencei_need_wait_nxt = fencei_need_wait_set | ~fencei_need_wait_clr;
lieat_general_dfflr #(1) fencei_need_wait_dff(clk,rstn,fencei_need_wait_ena,fencei_need_wait_nxt,fencei_need_wait);

wire ifu_need_wait       = jalr_need_wait | fencei_need_wait | fencei_req;
wire wait_for_ifetch_set = ifu_need_wait & if_o_sh;//case: output to IDU when waiting
wire wait_for_ifetch_clr = wait_for_ifetch & ~ifu_need_wait;//call once
wire wait_for_ifetch_ena = wait_for_ifetch_set | wait_for_ifetch_clr;
wire wait_for_ifetch_nxt = wait_for_ifetch_set | (~wait_for_ifetch_clr);
lieat_general_dfflr #(1) wait_for_ifetch_dff (clk,rstn,wait_for_ifetch_ena,wait_for_ifetch_nxt,wait_for_ifetch);
// ================================================================================================================================================
// FETCH PC
// ================================================================================================================================================
wire rst_req;
lieat_general_dffrs #(1) rst_req_dffrs(clk,rstn,1'b0,rst_req);
wire flush_req    = callback_flush;
wire ifetch_req   = (if_o_sh | wait_for_ifetch) & ~ifu_need_wait;

lieat_ifu_bpu bpu(
  .clk(clk),
  .rstn(rstn),

  .pc(pc),
  .inst(inst),
  .prdt_taken(prdt_taken),

  .jalr_rs1(jalr_rs1),
  .jalr_src1(jalr_src1),
  .jalr_dep(jalr_dep),
  .jalr_need_wait(jalr_need_wait),

  .ifetch_req(ifetch_req),
  .rst_req(rst_req),
  .flush_req(callback_flush),
  .flush_pc(callback_truepc),

  .bxx_callback_result(callback_result),
  .bxx_callback_index(callback_index),
  .bxx_callback_en(callback_en),

  .ifu_csr_ren(ifu_csr_ren),
  .ifu_csr_idx(ifu_csr_idx),
  .ifu_csr_rdata(ifu_csr_rdata),

  .need_fencei(fencei_req)
);
// ================================================================================================================================================
// FETCH INST
// ================================================================================================================================================
wire ifetch_req_valid;
wire ifetch_req_ready;
wire ifetch_req_valid_set = rst_req | flush_req | ifetch_req;
wire ifetch_req_valid_clr = ifetch_req_sh;
wire ifetch_req_valid_ena = ifetch_req_valid_set | ifetch_req_valid_clr;
wire ifetch_req_valid_nxt = ifetch_req_valid_set | (~ifetch_req_valid_clr);
lieat_general_dfflr #(1) ifetch_valid_req_dff (clk,rstn,ifetch_req_valid_ena,ifetch_req_valid_nxt,ifetch_req_valid);

lieat_ifu_icache icache(
  .clk(clk),
  .rstn(rstn),
  .flush_req(flush_req),
  .fencei_req(fencei_req),

  .ifetch_req_valid(ifetch_req_valid),
  .ifetch_req_ready(ifetch_req_ready),
  .ifetch_req_pc(pc),

  .ifetch_rsp_valid(if_o_valid),
  .ifetch_rsp_ready(if_o_ready),
  .ifetch_rsp_inst(inst),

  .icache_axi_arvalid(icache_axi_arvalid),
  .icache_axi_arready(icache_axi_arready),
  .icache_axi_araddr(icache_axi_araddr),

  .icache_axi_rvalid(icache_axi_rvalid),
  .icache_axi_rready(icache_axi_rready),
  .icache_axi_rdata(icache_axi_rdata)
);
// ================================================================================================================================================
// OUTPUT SINGAL
// ================================================================================================================================================
wire [`XLEN-1:0] pc;
wire [`XLEN-1:0] inst;
wire             prdt_taken;
assign if_o_pc   = pc;
assign if_o_inst = inst;
assign if_o_prdt_taken = prdt_taken;
endmodule
