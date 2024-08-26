module lieat_exu_com_csr(
  input                 clock,
  input                 reset,
  input                 com_req_sh,
  input                 csr_valid,
  input  [`XLEN-1:0]    csr_pc,
  input  [`XLEN-1:0]    csr_src1,
  input  [`XLEN-1:0]    csr_infobus,

  output                csr_o_valid,
  output [`XLEN-1:0]    csr_o_data,
  input                 ifu_csr_ren,
  input  [`CSR_IDX-1:0] ifu_csr_idx,
  output [`XLEN-1:0]    ifu_csr_rdata
);
// ================================================================================================================================================
// SIGNAL LIST
// ================================================================================================================================================
wire unused_ok = &{csr_infobus};
wire csr_csrrw                 = csr_infobus[`INFOBUS_CSR_CSRRW ];
wire csr_csrrs                 = csr_infobus[`INFOBUS_CSR_CSRRS ];
wire csr_csrrc                 = csr_infobus[`INFOBUS_CSR_CSRRC ];
wire csr_ecall                 = csr_infobus[`INFOBUS_CSR_ECAL  ];
wire csr_rs1imm                = csr_infobus[`INFOBUS_CSR_RS1IMM];
wire [4:0] csr_imm             = csr_infobus[`INFOBUS_CSR_ZIMMM ];
wire [`CSR_IDX-1:0] csr_csridx = csr_infobus[`INFOBUS_CSR_CSRIDX];

wire [`XLEN-1:0] csr_op1;
wire [`XLEN-1:0] csr_op2;
wire             csr_or;
wire             csr_and;

wire [`XLEN-1:0] csr_res;
wire [`XLEN-1:0] csr_orer_res;
wire [`XLEN-1:0] csr_ander_res;

wire                csr_reg_ena;
wire                csr_reg_write;
wire                csr_reg_read;
wire [`CSR_IDX-1:0] csr_reg_idx;
wire [`XLEN-1:0]    csr_reg_wdata;
wire [`XLEN-1:0]    csr_reg_rdata;
wire [`CSR_IDX-1:0] csr_reg_idx2;
wire [`XLEN-1:0]    csr_reg_wdata2;
// ================================================================================================================================================
// STAGE1
// ================================================================================================================================================
assign csr_op1 = csr_rs1imm ? {27'b0,csr_imm} : csr_src1;
assign csr_op2 = 
({`XLEN{csr_csrrw}} & `XLEN'h0  ) | 
({`XLEN{csr_csrrs}} & csr_reg_rdata ) | 
({`XLEN{csr_csrrc}} & csr_reg_rdata ) ;
assign csr_or  = csr_csrrs | csr_csrrw;
assign csr_and = csr_csrrc;

assign csr_orer_res  = csr_op1 | csr_op2;
assign csr_ander_res = csr_op1 & csr_op2;
assign csr_res       = ({`XLEN{csr_or}} & csr_orer_res) | ({`XLEN{csr_and}} & csr_ander_res);
// ================================================================================================================================================
// STAGE2
// ================================================================================================================================================
lieat_general_dfflr #(1) csr_o_valid_dff(clock,reset,com_req_sh,csr_valid,csr_o_valid);
lieat_general_dfflr #(`XLEN) csr_o_data_dff(clock,reset,com_req_sh,csr_reg_rdata,csr_o_data);
// ================================================================================================================================================
// CSR REG
// ================================================================================================================================================
assign csr_reg_ena     = 1'b1;
assign csr_reg_write   = csr_valid;
assign csr_reg_read    = csr_valid;
assign csr_reg_idx     = csr_ecall ? `CSR_IDX'h341 : csr_csridx;
assign csr_reg_idx2    = csr_ecall ? `CSR_IDX'h342 : `CSR_IDX'h0;
assign csr_reg_wdata   = csr_ecall ? csr_pc : csr_res;
assign csr_reg_wdata2  = {31'h0,csr_ecall};

lieat_exu_com_csrreg csrreg(
  .clock(clock),
  .reset(reset),
  .csr_ena(csr_reg_ena),
  .csr_write(csr_reg_write),
  .csr_read(csr_reg_read),
  .csr_idx(csr_reg_idx),
  .csr_wdata(csr_reg_wdata),
  .csr_rdata(csr_reg_rdata),
  .csr_idx2(csr_reg_idx2),
  .csr_wdata2(csr_reg_wdata2),
  .ifu_csr_ren(ifu_csr_ren),
  .ifu_csr_idx(ifu_csr_idx),
  .ifu_csr_rdata(ifu_csr_rdata)
);
endmodule
