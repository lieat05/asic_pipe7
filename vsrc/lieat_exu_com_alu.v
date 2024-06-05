module lieat_exu_com_alu(
  input                    clk,
  input                    rstn,

  input                    alu_i_valid,
  input [`XLEN-1:0]        alu_i_pc,
  input [`XLEN-1:0]        alu_i_imm,
  input [`XLEN-1:0]        alu_i_src1,
  input [`XLEN-1:0]        alu_i_src2,
  input [`XLEN-1:0]        alu_i_infobus,

  output                   alu_req,
  output [`XLEN-1:0]       alu_req_op1,
  output [`XLEN-1:0]       alu_req_op2,
  output                   alu_req_add,
  output                   alu_req_sub,
  output                   alu_req_xor,
  output                   alu_req_sll,
  output                   alu_req_srl,
  output                   alu_req_sra,
  output                   alu_req_or ,
  output                   alu_req_and,
  output                   alu_req_slt,
  output                   alu_req_sltu,
  output                   alu_req_lui,
  input  [`XLEN-1:0]       alu_req_res,
  output [`XLEN-1:0]       alu_wbck_data
);
wire unused_ok = &{alu_i_infobus};
wire alu_ebreak  = alu_i_infobus[`INFOBUS_ALU_EBRK];
wire alu_op1sel  = alu_i_infobus[`INFOBUS_ALU_PC ];
wire alu_op2sel  = alu_i_infobus[`INFOBUS_ALU_IMM];

assign alu_req      = alu_i_valid;
assign alu_req_op1  = alu_op1sel ? alu_i_pc  : alu_i_src1;
assign alu_req_op2  = alu_op2sel ? alu_i_imm : alu_i_src2;
assign alu_req_add  = alu_i_infobus [`INFOBUS_ALU_ADD ];
assign alu_req_sub  = alu_i_infobus [`INFOBUS_ALU_SUB ];
assign alu_req_xor  = alu_i_infobus [`INFOBUS_ALU_XOR ];
assign alu_req_sll  = alu_i_infobus [`INFOBUS_ALU_SLL ];
assign alu_req_srl  = alu_i_infobus [`INFOBUS_ALU_SRL ];
assign alu_req_sra  = alu_i_infobus [`INFOBUS_ALU_SRA ];
assign alu_req_or   = alu_i_infobus [`INFOBUS_ALU_OR  ];
assign alu_req_and  = alu_i_infobus [`INFOBUS_ALU_AND ];
assign alu_req_slt  = alu_i_infobus [`INFOBUS_ALU_SLT ];
assign alu_req_sltu = alu_i_infobus [`INFOBUS_ALU_SLTU];
assign alu_req_lui  = alu_i_infobus [`INFOBUS_ALU_LUI ];
assign alu_wbck_data= alu_req_res;

import "DPI-C" function void ebreak(input int halt_pc);
always @(posedge clk or negedge rstn) begin
  if(alu_ebreak) ebreak(alu_i_pc);
end
endmodule
