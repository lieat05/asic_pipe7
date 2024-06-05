`include "vsrc/lieat_defines.v"
`include "vsrc/lieat_ifu_bpuprdt.v"
`include "vsrc/lieat_ifu_bpudec.v"
module lieat_ifu_bpu(
  input                    clk,
  input                    rstn,

  output [`XLEN-1:0]       pc,
  input  [`XLEN-1:0]       inst,
  output                   prdt_taken,

  input                    ifetch_req,
  input                    rst_req,
  input                    flush_req,
  input  [`XLEN-1:0]       flush_pc,

  output [`RGIDX_SIZE-1:0] jalr_rs1,
  input  [`XLEN-1:0]       jalr_src1,
  input                    jalr_dep,
  output                   jalr_need_wait,
  output                   need_fencei,

  input                    bxx_callback_result,
  input  [4:0]             bxx_callback_index,
  input                    bxx_callback_en,

  output                   ifu_csr_ren,
  output [11:0]            ifu_csr_idx,
  input  [`XLEN-1:0]       ifu_csr_rdata
);
// ================================================================================================================================================
// DECODE MODULE
// ================================================================================================================================================
wire inst_jal;
wire inst_jalr;
wire inst_bxx;
wire inst_ecall;
wire inst_mret;
wire [`XLEN-1:0] imm_branch;

lieat_ifu_decode decode(
  .inst(inst),
  .rs1(jalr_rs1),
  .imm_branch(imm_branch),
  .inst_jal(inst_jal),
  .inst_jalr(inst_jalr),
  .inst_bxx(inst_bxx),
  .inst_ecall(inst_ecall),
  .inst_mret(inst_mret),
  .inst_fencei(need_fencei)
);
assign ifu_csr_ren = inst_ecall | inst_mret;
assign ifu_csr_idx = inst_ecall ? 12'h305 : inst_mret ? 12'h341 : 12'h0;
// ================================================================================================================================================
//  PRDT MODULE
// ================================================================================================================================================
wire bxx_taken;
wire [4:0] pc_index = pc[6:2];

lieat_ifu_bpuprdt bpuprdt(
  .clk(clk),
  .rstn(rstn),
  .index(pc_index),
  .inst_bxx(inst_bxx),
  .bxx_taken(bxx_taken),
  .callback_result(bxx_callback_result),
  .callback_index(bxx_callback_index),
  .callback_en(bxx_callback_en)
);

lieat_ifu_agu agu(
  .clk(clk),
  .rst_req(rst_req),
  .flush_req(flush_req),
  .flush_pc(flush_pc),
  .ifetch_req(ifetch_req),
  .bxx_taken(bxx_taken),

  .inst_jal(inst_jal),
  .inst_jalr(inst_jalr),
  .inst_bxx(inst_bxx),
  .inst_ecall(inst_ecall),
  .inst_mret(inst_mret),

  .jalr_dep(jalr_dep),
  .jalr_src1(jalr_src1),
  .imm_branch(imm_branch),
  .ifu_csr_rdata(ifu_csr_rdata),

  .jalr_need_wait(jalr_need_wait),
  .prdt_taken(prdt_taken),
  .pc(pc)
);
endmodule
