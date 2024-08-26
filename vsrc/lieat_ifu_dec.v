module lieat_ifu_dec(
  input  [`XLEN-1:0]    inst,
  output [`REG_IDX-1:0] dec_rs1,
  output                dec_rs1en,
  output [`XLEN-1:0]    dec_immb,
  output                dec_jal,
  output                dec_jalr,
  output                dec_bxx,
  output                dec_csr,
  output [11:0]         dec_csridx,
  output                dec_fencei
);
wire dec_ecall;
wire dec_mret;

wire opcode_6_5_11  =  inst[6] &  inst[5];
wire opcode_6_5_00  = ~inst[6] & ~inst[5];
wire opcode_4_2_000 = ~inst[4] & ~inst[3] & ~inst[2];
wire opcode_4_2_001 = ~inst[4] & ~inst[3] &  inst[2];
wire opcode_4_2_011 = ~inst[4] &  inst[3] &  inst[2];
wire opcode_4_2_100 =  inst[4] &  inst[3] &  inst[2];
wire opcode_1_0_11  =  inst[1] &  inst[0];

wire [`XLEN-1:0] imm_jal = {{12{inst[31]}},inst[19:12],inst[20],inst[30:21],1'b0};
wire [`XLEN-1:0] imm_jalr= {{20{inst[31]}},inst[31:20]};
wire [`XLEN-1:0] imm_bxx = {{20{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0};

assign dec_rs1 = inst[19:15];
assign dec_rs1en = dec_jalr;
assign dec_jal     = opcode_6_5_11 & opcode_4_2_011 & opcode_1_0_11;
assign dec_jalr    = opcode_6_5_11 & opcode_4_2_001 & opcode_1_0_11;
assign dec_bxx     = opcode_6_5_11 & opcode_4_2_000 & opcode_1_0_11;//beq bne blt bge bltu bgeu
assign dec_ecall   = opcode_6_5_11 & opcode_4_2_100 & opcode_1_0_11 & (~inst[14] & ~inst[13] & ~inst[12]) & (~inst[31] & ~inst[30] & ~inst[29] & ~inst[28]) & (~inst[27] & ~inst[26] & ~inst[25] & ~inst[24]) & (~inst[23] & ~inst[22] & ~inst[21] & ~inst[20]);
assign dec_mret    = opcode_6_5_11 & opcode_4_2_100 & opcode_1_0_11 & (~inst[14] & ~inst[13] & ~inst[12]) & (~inst[31] & ~inst[30] &  inst[29] &  inst[28]) & (~inst[27] & ~inst[26] & ~inst[25] & ~inst[24]) & (~inst[23] & ~inst[22] &  inst[21] & ~inst[20]);
assign dec_fencei  = opcode_6_5_00 & opcode_4_2_011 & opcode_1_0_11 & (~inst[14] & ~inst[13] & inst[12]);
assign dec_immb   = 
({`XLEN{(dec_jal )}} & imm_jal ) |
({`XLEN{(dec_jalr)}} & imm_jalr) |
({`XLEN{(dec_bxx )}} & imm_bxx ) ;

assign dec_csr    = dec_ecall | dec_mret;
assign dec_csridx = {5'b00110,dec_mret,3'b0,dec_ecall,2'b01};
endmodule
