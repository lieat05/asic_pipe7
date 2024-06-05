module lieat_exu_wbu(
  input                     clk,
  input                     rstn,

  input                     com_wbck_valid,
  output                    com_wbck_ready,
  input [`XLEN-1:0]         com_wbck_pc,
  input                     com_wbck_en,
  input [`RGIDX_SIZE-1:0]   com_wbck_rd,
  input [`XLEN-1:0]         com_wbck_data,

  input                     lsu_wbck_valid,
  output                    lsu_wbck_ready,
  input [`XLEN-1:0]         lsu_wbck_pc,
  input                     lsu_wbck_en,
  input [`XLEN-1:0]         lsu_wbck_data,
  input [`RGIDX_SIZE-1:0]   lsu_wbck_rd,
  input                     lsu_wbck_mmio,

  input                     muldiv_wbck_valid,
  output                    muldiv_wbck_ready,
  input [`XLEN-1:0]         muldiv_wbck_pc,
  input                     muldiv_wbck_en,
  input [`XLEN-1:0]         muldiv_wbck_data,
  input [`RGIDX_SIZE-1:0]   muldiv_wbck_rd,

  output                    longi_wbck,
  output [1:0]              longi_wbck_op,
  input                     oitf_waw_dep,

  output                    wbck_o_valid,
  output [`XLEN-1:0]        wbck_o_pc,
  output                    wbck_o_en,
  output [`RGIDX_SIZE-1:0]  wbck_o_rd,
  output [`XLEN-1:0]        wbck_o_data,
  output                    wbck_o_lsu
);
assign muldiv_wbck_ready = ~ignore_waw_dep;
assign lsu_wbck_ready = ~muldiv_wbck_valid & ~ignore_waw_dep;
assign com_wbck_ready = (~lsu_wbck_valid & ~muldiv_wbck_valid & ~oitf_waw_dep) | ignore_waw_dep;

wire ignore_waw_dep;
wire ignore_waw_dep_set = ~oitf_waw_dep & com_wbck_valid & longi_wbck;
wire ignore_waw_dep_clr = ignore_waw_dep;
wire ignore_waw_dep_ena = ignore_waw_dep_set | ignore_waw_dep_clr;
wire ignore_waw_dep_nxt = ignore_waw_dep_set & ~ignore_waw_dep_clr;
lieat_general_dfflr #(1) ignore_waw_dep_dff(clk,rstn,ignore_waw_dep_ena,ignore_waw_dep_nxt,ignore_waw_dep);

assign longi_wbck   = lsu_wbck_valid | muldiv_wbck_valid;
assign longi_wbck_op= ignore_waw_dep ? 2'b11 : muldiv_wbck_valid ? 2'b01 : lsu_wbck_valid ? 2'b00 : 2'b11;
assign wbck_o_valid= (lsu_wbck_valid | ((com_wbck_valid & ~oitf_waw_dep) | ignore_waw_dep) | muldiv_wbck_valid);
assign wbck_o_en   = ignore_waw_dep    ? com_wbck_en :
                     muldiv_wbck_valid ? muldiv_wbck_en : 
                     lsu_wbck_valid    ? lsu_wbck_en :
                     com_wbck_valid    ? com_wbck_en : 1'b0;
assign wbck_o_pc   = ignore_waw_dep    ? com_wbck_pc :
                     muldiv_wbck_valid ? muldiv_wbck_pc : 
                     lsu_wbck_valid    ? lsu_wbck_pc :
                     com_wbck_valid    ? com_wbck_pc : `XLEN'b0;
assign wbck_o_rd   = ignore_waw_dep    ? com_wbck_rd :
                     muldiv_wbck_valid ? muldiv_wbck_rd : 
                     lsu_wbck_valid    ? lsu_wbck_rd :
                     com_wbck_valid    ? com_wbck_rd : `RGIDX_SIZE'b0;
assign wbck_o_data = ignore_waw_dep    ? com_wbck_data    :
                     muldiv_wbck_valid ? muldiv_wbck_data : 
                     lsu_wbck_valid    ? lsu_wbck_data    :
                     com_wbck_valid    ? com_wbck_data    : `XLEN'b0;
assign wbck_o_lsu  = lsu_wbck_mmio & ~ignore_waw_dep & ~muldiv_wbck_valid & lsu_wbck_valid & lsu_wbck_en;
endmodule
