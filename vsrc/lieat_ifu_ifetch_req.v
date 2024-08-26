module lieat_ifu_ifetch_req(
  input              clock,
  input              reset,

  input              req_i_flush,
  input [`XLEN-1:0]  req_i_flush_pc,
  input              req_i_ifsh,

  input              req_i_valid,//rsp always ready
  input [`XLEN-1:0]  req_i_pc,
  input              req_i_prdt_taken,
  input              req_i_rs1en,
  input [4:0]        req_i_rs1,
  input              req_i_rs1dep,
  input              req_i_csr,
  input [11:0]       req_i_csridx,
  input [`XLEN-1:0]  req_i_immb,
  input              req_i_fencei,
  input              req_i_fencei_over,

  output [4:0]       req_fetch_rs1,
  output             req_fetch_csr,
  output [11:0]      req_fetch_csridx,
  input  [`XLEN-1:0] req_fetch_csr_rdata,
  input  [`XLEN-1:0] req_fetch_src1,

  input              req_o_ready,
  output             req_o_valid,
  output [`XLEN-1:0] req_o_pc,
  output             req_o_wait
);
// ================================================================================================================================================
// SIGNAL LIST
// ================================================================================================================================================
wire [`XLEN-1:0] pc_op1;
wire [`XLEN-1:0] pc_op2;
wire [`XLEN-1:0] ifetch_pc;
wire [`XLEN-1:0] ifetch_pc_nxt;

wire req_o_sh;
wire rst_req;
wire ifetch_req;
wire flush_req;

wire rs1_need_wait_r;
wire rs1_need_wait_nxt;
wire rs1_need_wait;
wire fencei_need_wait_r;
wire fencei_need_wait;
wire ifu_need_wait;
wire req_o_wait_pre;

assign req_fetch_rs1 = req_i_rs1;
assign req_fetch_csr = req_i_csr;
assign req_fetch_csridx = req_i_csridx;
// ================================================================================================================================================
// STATE CONTROL
// ================================================================================================================================================
assign req_o_sh = req_o_valid & req_o_ready;
lieat_general_dfflrs #(1) rst_req_dff(clock,reset,req_o_sh,1'b0,rst_req);
assign flush_req = req_i_flush;

wire ifetch_req_set = (req_i_ifsh | req_o_wait) & ~ifu_need_wait;
wire ifetch_req_clr = req_o_sh;
wire ifetch_req_ena = ifetch_req_set | ifetch_req_clr;
wire ifetch_req_nxt = ifetch_req_set | (~ifetch_req_clr);
lieat_general_dfflr #(1) ifetch_valid_req_dff (clock,reset,ifetch_req_ena,ifetch_req_nxt,ifetch_req);
assign req_o_valid = ifetch_req | rst_req | flush_req;

assign rs1_need_wait_nxt = req_i_rs1en & req_i_rs1dep;
lieat_general_dfflr #(1) rs1_need_wait_r_dff(clock,reset,1'b1,rs1_need_wait_nxt,rs1_need_wait_r);
wire fencei_need_wait_set = req_i_valid & req_i_fencei;
wire fencei_need_wait_clr = req_i_fencei_over;//fencei finish
wire fencei_need_wait_ena = fencei_need_wait_set |  fencei_need_wait_clr;
wire fencei_need_wait_nxt = fencei_need_wait_set | ~fencei_need_wait_clr;
lieat_general_dfflr #(1) fencei_need_wait_r_dff(clock,reset,fencei_need_wait_ena,fencei_need_wait_nxt,fencei_need_wait_r);

assign rs1_need_wait    = rs1_need_wait_nxt | rs1_need_wait_r;
assign fencei_need_wait = (req_i_fencei & req_i_valid) | fencei_need_wait_r;
assign ifu_need_wait    = rs1_need_wait | fencei_need_wait;

wire req_o_wait_set = ifu_need_wait & req_i_ifsh;//case: output to IDU when waiting
wire req_o_wait_clr = req_o_sh;//call once
wire req_o_wait_ena = req_o_wait_set | req_o_wait_clr;
wire req_o_wait_nxt = req_o_wait_set | (~req_o_wait_clr);
lieat_general_dfflr #(1) req_o_wait_dff (clock,reset,req_o_wait_ena,req_o_wait_nxt,req_o_wait_pre);
assign req_o_wait = req_o_wait_pre & ~req_o_sh;
// ================================================================================================================================================
// AGU
// ================================================================================================================================================                               
assign pc_op1 = req_i_csr ? req_fetch_csr_rdata : 
({`XLEN{req_i_rs1en              }} & req_fetch_src1     ) |
({`XLEN{~req_i_csr & ~req_i_rs1en}} & req_i_pc           ) ;
assign pc_op2 = req_i_prdt_taken ? req_i_immb : 32'h4;

assign ifetch_pc_nxt = pc_op1 + pc_op2;
lieat_general_dfflr #(`XLEN) pc_dff(clock,reset,1'b1,ifetch_pc_nxt,ifetch_pc);
assign req_o_pc = (~rst_req & ~req_i_flush) ? ifetch_pc : req_i_flush ? req_i_flush_pc : `PC_DEFAULT;
endmodule
