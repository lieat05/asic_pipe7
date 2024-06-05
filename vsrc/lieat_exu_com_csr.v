`include "vsrc/lieat_exu_com_csrreg.v"
module lieat_exu_com_csr(
  input                 csr_i_valid,
  input  [`XLEN-1:0]    csr_i_pc,
  input  [`XLEN-1:0]    csr_i_src1,
  input  [`XLEN-1:0]    csr_i_infobus,

  output                csr_req,
  output [`XLEN-1:0]    csr_req_op1,
  output [`XLEN-1:0]    csr_req_op2,
  output                csr_req_or,
  output                csr_req_and,
  input  [`XLEN-1:0]    csr_req_res,
  output [`XLEN-1:0]    csr_wbck_data,

  output                csr_ena,
  output                csr_write,
  output                csr_read,
  output [`CSR_IDX-1:0] csr_idx,
  output [`XLEN-1:0]    csr_wdata,
  input  [`XLEN-1:0]    csr_rdata,
  output [`CSR_IDX-1:0] csr_idx2,
  output [`XLEN-1:0]    csr_wdata2
);
wire unused_ok = &{csr_i_infobus};
wire       csr_csrrw  = csr_i_infobus[`INFOBUS_CSR_CSRRW ];
wire       csr_csrrs  = csr_i_infobus[`INFOBUS_CSR_CSRRS ];
wire       csr_csrrc  = csr_i_infobus[`INFOBUS_CSR_CSRRC ];
wire       csr_ecall  = csr_i_infobus[`INFOBUS_CSR_ECAL  ];
wire       csr_rs1imm = csr_i_infobus[`INFOBUS_CSR_RS1IMM];
wire [4:0] csr_imm    = csr_i_infobus[`INFOBUS_CSR_ZIMMM ];

assign csr_ena     = csr_i_valid;
assign csr_write   = csr_i_valid;
assign csr_read    = csr_i_valid;
assign csr_idx     = csr_ecall ? `CSR_IDX'h341 : csr_i_infobus[`INFOBUS_CSR_CSRIDX];
assign csr_idx2    = csr_ecall ? `CSR_IDX'h342 : `CSR_IDX'h0;
assign csr_wdata   = csr_ecall ? csr_i_pc : csr_req_res;
assign csr_wdata2  = {31'h0,csr_ecall};

assign csr_req     = csr_i_valid;
assign csr_req_op1 = csr_rs1imm ? {27'b0,csr_imm} : csr_i_src1;
assign csr_req_op2 = ({`XLEN{csr_csrrw}} & `XLEN'h0  ) | 
                     ({`XLEN{csr_csrrs}} & csr_rdata ) | 
                     ({`XLEN{csr_csrrc}} & csr_rdata );
assign csr_req_or  = csr_csrrs | csr_csrrw;
assign csr_req_and = csr_csrrc;
assign csr_wbck_data = csr_rdata;
endmodule
