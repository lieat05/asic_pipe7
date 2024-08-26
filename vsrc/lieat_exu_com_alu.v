module lieat_exu_com_alu(
  input              clock,
  input              reset,
  input              com_req_sh,
  input              alu_req_valid,

  input  [`XLEN-1:0] alu_pc,
  input  [`XLEN-1:0] alu_imm,
  input  [`XLEN-1:0] alu_src1,
  input  [`XLEN-1:0] alu_src2,
  input  [`XLEN-1:0] alu_infobus,

  output [`XLEN-1:0] alu_req_op1,
  output [`XLEN-1:0] alu_req_op2,
  output             alu_req_add,
  output             alu_req_sub,
  output             alu_req_xor,
  output             alu_req_sll,
  output             alu_req_srl,
  output             alu_req_sra,
  output             alu_req_or ,
  output             alu_req_and,
  output             alu_req_slt,
  output             alu_req_sltu,
  output             alu_req_lui,    
  output             alu_o_ebreak
);
// ================================================================================================================================================
// SIGNAL LIST
// ================================================================================================================================================
wire unused_ok = &{alu_infobus};
wire alu_ebreak  = alu_infobus[`INFOBUS_ALU_EBRK];
wire alu_op1sel  = alu_infobus[`INFOBUS_ALU_PC ];
wire alu_op2sel  = alu_infobus[`INFOBUS_ALU_IMM];

assign alu_req_op1  = alu_op1sel ? alu_pc  : alu_src1;
assign alu_req_op2  = alu_op2sel ? alu_imm : alu_src2;
assign alu_req_add  = alu_infobus [`INFOBUS_ALU_ADD ];
assign alu_req_sub  = alu_infobus [`INFOBUS_ALU_SUB ];
assign alu_req_xor  = alu_infobus [`INFOBUS_ALU_XOR ];
assign alu_req_sll  = alu_infobus [`INFOBUS_ALU_SLL ];
assign alu_req_srl  = alu_infobus [`INFOBUS_ALU_SRL ];
assign alu_req_sra  = alu_infobus [`INFOBUS_ALU_SRA ];
assign alu_req_or   = alu_infobus [`INFOBUS_ALU_OR  ];
assign alu_req_and  = alu_infobus [`INFOBUS_ALU_AND ];
assign alu_req_slt  = alu_infobus [`INFOBUS_ALU_SLT ];
assign alu_req_sltu = alu_infobus [`INFOBUS_ALU_SLTU];
assign alu_req_lui  = alu_infobus [`INFOBUS_ALU_LUI ];
// ================================================================================================================================================
// STAGE2
// ================================================================================================================================================
lieat_general_dfflr #(1) alu_wbck_ebreak_dff(clock,reset,com_req_sh & alu_req_valid,alu_ebreak,alu_o_ebreak);
endmodule
