`include "vsrc/lieat_exu_mul.v"
`include "vsrc/lieat_exu_div.v"
module lieat_exu_muldiv(
  input                    clk,
  input                    rstn,
  
  input                    muldiv_i_valid,
  output                   muldiv_i_ready,
  input  [`XLEN-1:0]       muldiv_i_pc,
  input  [`XLEN-1:0]       muldiv_i_src1,
  input  [`XLEN-1:0]       muldiv_i_src2,
  input  [`XLEN-1:0]       muldiv_i_infobus,
  input  [`RGIDX_SIZE-1:0] muldiv_i_rd,
  input                    muldiv_i_rdwen,

  output                   muldiv_o_valid,
  input                    muldiv_o_ready,
  output [`XLEN-1:0]       muldiv_o_pc,
  output                   muldiv_o_wen,
  output [`RGIDX_SIZE-1:0] muldiv_o_rd,
  output [`XLEN-1:0]       muldiv_o_data
);
wire unused_ok = &{muldiv_infobus,div_o_divisor0};
wire muldiv_i_sh   = muldiv_i_valid & muldiv_i_ready;
wire muldiv_o_sh   = muldiv_o_valid & muldiv_o_ready;

wire [`XLEN-1:0] muldiv_pc;
wire [`XLEN-1:0] muldiv_infobus;
wire [`RGIDX_SIZE-1:0] muldiv_rd;
wire muldiv_rdwen;
lieat_general_dfflr #(32) muldiv_pc_dff(clk,rstn,muldiv_i_sh,muldiv_i_pc,muldiv_pc);
lieat_general_dfflr #(32) muldiv_infobus_dff(clk,rstn,muldiv_i_sh,muldiv_i_infobus,muldiv_infobus);
lieat_general_dfflr #(5)  muldiv_rd_dff(clk,rstn,muldiv_i_sh,muldiv_i_rd,muldiv_rd);
lieat_general_dfflr #(1)  muldiv_rdwen_dff(clk,rstn,muldiv_i_sh,muldiv_i_rdwen,muldiv_rdwen);

wire muldiv_req_sh = mul_req_sh | div_req_sh;
wire div_req_sh    = div_req_valid & div_req_ready;
wire mul_req_sh    = mul_req_valid & mul_req_ready;

wire muldiv_req_valid;
wire muldiv_req_valid_set = muldiv_i_sh;
wire muldiv_req_valid_clr = muldiv_req_sh;
wire muldiv_req_valid_ena = muldiv_req_valid_set | muldiv_req_valid_clr;
wire muldiv_req_valid_nxt = muldiv_req_valid_set | ~muldiv_req_valid_clr;
lieat_general_dfflr #(1) muldiv_req_valid_dff(clk,rstn,muldiv_req_valid_ena,muldiv_req_valid_nxt,muldiv_req_valid);
wire muldiv_req_ready = mul_req_ready & div_req_ready;
assign muldiv_i_ready = (~muldiv_req_valid & muldiv_req_ready) | muldiv_o_sh;

wire mul_req_valid = muldiv_req_valid & op_mul;
wire div_req_valid = muldiv_req_valid & op_div;
wire mul_req_ready;
wire div_req_ready;

wire op_mul = muldiv_mul | muldiv_mulh | muldiv_mulhsu | muldiv_mulhu;
wire op_div = muldiv_div | muldiv_divu | muldiv_rem    | muldiv_remu;
wire muldiv_mul    = muldiv_infobus[`INFOBUS_MUL_MUL   ];
wire muldiv_mulh   = muldiv_infobus[`INFOBUS_MUL_MULH  ];
wire muldiv_mulhsu = muldiv_infobus[`INFOBUS_MUL_MULHSU];
wire muldiv_mulhu  = muldiv_infobus[`INFOBUS_MUL_MULHU ];
wire muldiv_div    = muldiv_infobus[`INFOBUS_MUL_DIV   ];
wire muldiv_divu   = muldiv_infobus[`INFOBUS_MUL_DIVU  ];
wire muldiv_rem    = muldiv_infobus[`INFOBUS_MUL_REM   ];
wire muldiv_remu   = muldiv_infobus[`INFOBUS_MUL_REMU  ];

wire             mul_i_signed1 = muldiv_mulh | muldiv_mulhsu;
wire             mul_i_signed2 = muldiv_mulh;
wire [`XLEN-1:0] mul_i_multiplicand = muldiv_i_src1;
wire [`XLEN-1:0] mul_i_multiplier   = muldiv_i_src2;
wire [`XLEN-1:0] mul_o_resl;
wire [`XLEN-1:0] mul_o_resh;
wire             mul_o_ready = muldiv_o_ready;
wire             mul_o_valid;

wire             div_i_signed   = muldiv_div | muldiv_rem;
wire [`XLEN-1:0] div_i_dividend = muldiv_i_src1;
wire [`XLEN-1:0] div_i_divisor  = muldiv_i_src2;
wire [`XLEN-1:0] div_o_quot;
wire [`XLEN-1:0] div_o_rem;
wire             div_o_divisor0;
wire             div_o_ready = muldiv_o_ready;
wire             div_o_valid;

lieat_exu_mul mul(
  .clk(clk),
  .rstn(rstn),
  .mul_i_valid(mul_req_valid),
  .mul_i_ready(mul_req_ready),
  .mul_i_signed1(mul_i_signed1),
  .mul_i_signed2(mul_i_signed2),
  .mul_i_multiplicand(mul_i_multiplicand),
  .mul_i_multiplier(mul_i_multiplier),
  .mul_o_valid(mul_o_valid),
  .mul_o_ready(mul_o_ready),
  .mul_o_resh(mul_o_resh),
  .mul_o_resl(mul_o_resl)
);

lieat_exu_div div(
  .clk(clk),
  .rstn(rstn),
  .div_i_valid(div_req_valid),
  .div_i_ready(div_req_ready),
  .div_i_signed(div_i_signed),
  .div_i_dividend(div_i_dividend),
  .div_i_divisor(div_i_divisor),
  .div_o_valid(div_o_valid),
  .div_o_ready(div_o_ready),
  .div_o_quot(div_o_quot),
  .div_o_rem(div_o_rem),
  .div_o_divisor0(div_o_divisor0)
);
wire mul_low  = muldiv_mul;
wire mul_high = muldiv_mulh | muldiv_mulhsu | muldiv_mulhu;
wire div_quot = muldiv_div | muldiv_divu;
wire div_rem  = muldiv_rem | muldiv_remu;

assign muldiv_o_pc    = muldiv_pc;
assign muldiv_o_rd    = muldiv_rd;
assign muldiv_o_wen   = muldiv_rdwen;
assign muldiv_o_data = ({`XLEN{mul_low }} & mul_o_resl) | 
                       ({`XLEN{mul_high}} & mul_o_resh) |
                       ({`XLEN{div_quot}} & div_o_quot) |
                       ({`XLEN{div_rem }} & div_o_rem) ;
assign muldiv_o_valid = mul_o_valid | div_o_valid;
endmodule
