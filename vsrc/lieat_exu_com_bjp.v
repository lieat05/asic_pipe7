module lieat_exu_com_bjp(
  input                    bjp_i_valid,
  input [`XLEN-1:0]        bjp_i_pc,
  input [`XLEN-1:0]        bjp_i_imm,
  input [`XLEN-1:0]        bjp_i_src1,
  input [`XLEN-1:0]        bjp_i_src2,
  input [`XLEN-1:0]        bjp_i_infobus,
  
  output                   bjp_req,
  output [`XLEN-1:0]       bjp_req_op1,
  output [`XLEN-1:0]       bjp_req_op2,
  output                   bjp_req_cmp,
  output                   bjp_req_beq,
  output                   bjp_req_bne,
  output                   bjp_req_blt,
  output                   bjp_req_bgt,
  output                   bjp_req_bltu,
  output                   bjp_req_bgtu,
  output                   bjp_req_add,
  input  [`XLEN-1:0]       bjp_req_res,
  output [`XLEN-1:0]       bjp_wbck_data,
  
  output                   callback_en,
  output [4:0]             callback_index,
  output                   callback_result,
  output                   callback_flush,
  output [`XLEN-1:0]       callback_truepc
);
wire unused_ok = &{bjp_i_infobus};
wire bjp_rv32 = bjp_i_infobus[`INFOBUS_BJP_RV32];
wire bjp_jump = bjp_i_infobus[`INFOBUS_BJP_JUMP];
wire bjp_prdt = bjp_i_infobus[`INFOBUS_BJP_BPRDT];
wire bjp_cmp  = bjp_req_res[0];
wire [31:0] offset = bjp_cmp ? bjp_i_imm : 32'd4;

assign bjp_req     = bjp_i_valid;
assign bjp_req_op1 = bjp_jump ? bjp_i_pc : bjp_i_src1;
assign bjp_req_op2 = bjp_jump ? (bjp_rv32 ? `XLEN'd4 : `XLEN'd2) : bjp_i_src2;
assign bjp_req_add = bjp_jump;
assign bjp_req_beq = bjp_i_infobus[`INFOBUS_BJP_BEQ];
assign bjp_req_bne = bjp_i_infobus[`INFOBUS_BJP_BNE];
assign bjp_req_blt = bjp_i_infobus[`INFOBUS_BJP_BLT];
assign bjp_req_bgt = bjp_i_infobus[`INFOBUS_BJP_BGT];
assign bjp_req_bltu= bjp_i_infobus[`INFOBUS_BJP_BLTU];
assign bjp_req_bgtu= bjp_i_infobus[`INFOBUS_BJP_BGTU];
assign bjp_req_cmp = bjp_i_infobus[`INFOBUS_BJP_BXX];
assign bjp_wbck_data = bjp_req_res;

assign callback_en     = bjp_req_cmp;
assign callback_index  = bjp_i_pc[6:2];
assign callback_result = bjp_cmp;
assign callback_flush  = bjp_req_cmp & (bjp_prdt ^ bjp_cmp);
assign callback_truepc = bjp_i_pc + offset;
endmodule
