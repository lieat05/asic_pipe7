module lieat_ifu_decode(
  input  [`XLEN-1:0]       inst,
  output [`RGIDX_SIZE-1:0] rs1,
  output [`XLEN-1:0]       imm_branch,
  output                   inst_jal,
  output                   inst_jalr,
  output                   inst_bxx,
  output                   inst_ecall,
  output                   inst_mret,
  output                   inst_fencei
);
assign rs1 = inst[19:15];
wire [6:0] opcode   = inst[6:0];

wire opcode_6_5_11  = (opcode[6:5] == 2'b11);
wire opcode_6_5_00  = (opcode[6:5] == 2'b00);
wire opcode_4_2_000 = (opcode[4:2] == 3'b000);
wire opcode_4_2_001 = (opcode[4:2] == 3'b001);
wire opcode_4_2_011 = (opcode[4:2] == 3'b011);
wire opcode_4_2_100 = (opcode[4:2] == 3'b100);
wire opcode_1_0_11  = (opcode[1:0] == 2'b11);

assign inst_jal     = opcode_6_5_11 & opcode_4_2_011 & opcode_1_0_11;
assign inst_jalr    = opcode_6_5_11 & opcode_4_2_001 & opcode_1_0_11;
assign inst_bxx     = opcode_6_5_11 & opcode_4_2_000 & opcode_1_0_11;//beq bne blt bge bltu bgeu
assign inst_ecall   = opcode_6_5_11 & opcode_4_2_100 & opcode_1_0_11 & (inst[14:12] == 3'b000) & (inst[31:20] == 12'b000000000000);
assign inst_mret    = opcode_6_5_11 & opcode_4_2_100 & opcode_1_0_11 & (inst[14:12] == 3'b000) & (inst[31:20] == 12'b001100000010);
assign inst_fencei  = opcode_6_5_00 & opcode_4_2_011 & opcode_1_0_11 & (inst[14:12] == 3'b001);

assign imm_branch   = (inst_jal)  ? imm_jal  :
                      (inst_jalr) ? imm_jalr :
                      (inst_bxx)  ? imm_bxx  : 32'h0;

wire [`XLEN-1:0] imm_jal = {{12{inst[31]}},inst[19:12],inst[20],inst[30:21],1'b0};
wire [`XLEN-1:0] imm_jalr= {{20{inst[31]}},inst[31:20]};
wire [`XLEN-1:0] imm_bxx = {{20{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0};

endmodule
