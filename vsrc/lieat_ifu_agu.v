module lieat_ifu_agu(
input              clk,

input              rst_req,
input              flush_req,
input  [`XLEN-1:0] flush_pc,
input              ifetch_req,
input              bxx_taken,

input              inst_jal,
input              inst_jalr,
input              inst_bxx,
input              inst_ecall,
input              inst_mret,

input  [`XLEN-1:0] imm_branch,
input  [`XLEN-1:0] ifu_csr_rdata,

input              jalr_dep,
input  [`XLEN-1:0] jalr_src1,

output             jalr_need_wait,
output             prdt_taken,
output [`XLEN-1:0] pc
);
assign prdt_taken = (inst_jal | inst_jalr | bxx_taken | inst_mret | inst_ecall);
assign jalr_need_wait = inst_jalr & jalr_dep;

wire             pc_ena       = ifetch_req | rst_req | flush_req;
wire [`XLEN-1:0] pc_offset    = 32'd4;
wire [`XLEN-1:0] taken_pc_op1 = (inst_ecall | inst_mret) ? ifu_csr_rdata : (inst_jal | inst_bxx) ? pc : jalr_src1;
wire [`XLEN-1:0] taken_pc_op2 = (inst_ecall | inst_mret) ? 32'h0         : imm_branch;
wire [`XLEN-1:0] pc_op1       = prdt_taken ? taken_pc_op1  : pc;
wire [`XLEN-1:0] pc_op2       = prdt_taken ? taken_pc_op2  : pc_offset;
wire [`XLEN-1:0] pc_nxt_pre   = pc_op1 + pc_op2;
wire [`XLEN-1:0] pc_nxt       = rst_req    ? `PC_DEFAULT : 
                                flush_req  ? flush_pc : 
                                ifetch_req ? (pc_nxt_pre & 32'hfffffffe) : 32'h0;
lieat_general_dffl #(`XLEN) pc_dff (clk,pc_ena,pc_nxt,pc);
endmodule
