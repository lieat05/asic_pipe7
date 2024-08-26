module lieat_idu_disp(
  input       clock,
  input       reset,
  input       id_i_valid,
  output      id_i_ready,

  input [2:0] disp_op,
  input       disp_condition,
  input       flush_req,

  output      disp_com_valid,
  input       disp_com_ready,  
  output      disp_lsu_valid,
  input       disp_lsu_ready,
  output      disp_muldiv_valid,
  input       disp_muldiv_ready,
  output      longi_disp
);
// ================================================================================================================================================
// VALID-READY SHAKEHAND
// ================================================================================================================================================
wire id_i_sh;
wire id_o_sh;
wire disp_com_sh;
wire disp_lsu_sh;
wire disp_muldiv_sh;

wire op_alu;
wire op_bjp;
wire op_lsu;
wire op_csr;
wire op_mul;
wire op_com;

wire disp_valid;
wire disp_valid_pre;
// ================================================================================================================================================
// SHAKEHAND
// ================================================================================================================================================
assign id_i_sh = id_i_valid & id_i_ready;
assign id_o_sh = disp_com_sh | disp_lsu_sh | disp_muldiv_sh;
assign disp_com_sh = disp_com_valid & disp_com_ready;
assign disp_lsu_sh = disp_lsu_valid & disp_lsu_ready;
assign disp_muldiv_sh = disp_muldiv_valid & disp_muldiv_ready;
// ================================================================================================================================================
// OP_SEL
// ================================================================================================================================================
assign op_alu = (disp_op == 3'd0);
assign op_bjp = (disp_op == 3'd1);
assign op_lsu = (disp_op == 3'd2);
assign op_csr = (disp_op == 3'd3);
assign op_mul = (disp_op == 3'd4);
assign op_com = op_alu | op_bjp | op_csr;

wire disp_valid_set = id_i_sh;
wire disp_valid_clr = id_o_sh;
wire disp_valid_ena = disp_valid_set | disp_valid_clr | flush_req;
wire disp_valid_nxt = (disp_valid_set | (~disp_valid_clr)) & (~flush_req);
lieat_general_dfflr #(1) disp_valid_dff(clock,reset,disp_valid_ena,disp_valid_nxt,disp_valid_pre);
assign disp_valid = disp_valid_pre & disp_condition & (~flush_req);//case:valid but oitf_raw_dep
// ================================================================================================================================================
// OUTPUT SIGNAL
// ================================================================================================================================================
assign longi_disp = id_o_sh;
assign disp_com_valid = disp_valid & op_com;
assign disp_lsu_valid = disp_valid & op_lsu;
assign disp_muldiv_valid = disp_valid & op_mul;
assign id_i_ready = (~disp_valid_pre) | id_o_sh;
endmodule
