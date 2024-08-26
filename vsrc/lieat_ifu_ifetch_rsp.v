module lieat_ifu_ifetch_rsp(
  input                 clock,
  input                 reset,

  input                 rsp_i_valid,//rsp always ready
  output                rsp_o_valid,//req_always ready
  input  [`XLEN-1:0]    rsp_i_pc,
  input  [`XLEN-1:0]    rsp_i_inst,

  output                rsp_o_rs1en,
  output [`REG_IDX-1:0] rsp_o_rs1,
  output                rsp_o_csr,
  output [11:0]         rsp_o_csridx,
  output [`XLEN-1:0]    rsp_o_immb,
  output                rsp_o_prdt_taken,
  output                rsp_o_fencei,
  
  input                 bxx_prdt_en,
  input  [4:0]          bxx_prdt_index,
  input                 bxx_prdt_result
);
// ================================================================================================================================================
// SIGNAL LIST
// ================================================================================================================================================
wire dec_jal;
wire dec_jalr;
wire dec_bxx;
wire dec_csr;
wire dec_rs1en;
wire dec_fencei;
wire [11:0]         dec_csridx;
wire [`XLEN-1:0]    dec_immb;
wire [`REG_IDX-1:0] dec_rs1;

wire bxx_taken;
wire prdt_taken;
wire [4:0] index = rsp_i_pc[6:2];
// ================================================================================================================================================
// DECODE MODULE
// ================================================================================================================================================
lieat_ifu_dec if_decode(
  .inst(rsp_i_inst),
  .dec_rs1(dec_rs1),
  .dec_rs1en(dec_rs1en),
  .dec_immb(dec_immb),
  .dec_jal(dec_jal),
  .dec_jalr(dec_jalr),
  .dec_bxx(dec_bxx),
  .dec_csr(dec_csr),
  .dec_csridx(dec_csridx),
  .dec_fencei(dec_fencei)
);

// ================================================================================================================================================
//  PRDT MODULE
// ================================================================================================================================================
lieat_ifu_bpu bpu(
  .clock(clock),
  .reset(reset),
  .index(index),
  .inst_bxx(dec_bxx),
  .bxx_taken(bxx_taken),
  .prdt_result(bxx_prdt_result),
  .prdt_index(bxx_prdt_index),
  .prdt_en(bxx_prdt_en)
);
assign rsp_o_valid      = rsp_i_valid;
assign rsp_o_rs1en      = dec_rs1en;
assign rsp_o_rs1        = dec_rs1;
assign rsp_o_csr        = dec_csr;
assign rsp_o_csridx     = dec_csridx;
assign rsp_o_immb       = dec_immb;
assign rsp_o_fencei     = dec_fencei;
assign rsp_o_prdt_taken = dec_jal | dec_jalr | bxx_taken | dec_csr;
endmodule
