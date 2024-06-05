`include "vsrc/lieat_defines.v"
module lieat_regfile(
  input clk,
  input rstn,

  input  [`RGIDX_SIZE-1:0] ifu_rs1,
  output  [`XLEN-1:0]      ifu_src1,

  input  [`RGIDX_SIZE-1:0] exu_rs1,
  input  [`RGIDX_SIZE-1:0] exu_rs2,
  output [`XLEN-1:0]       exu_src1,
  output [`XLEN-1:0]       exu_src2,
  
  input  [`XLEN-1:0]       wb_pc,
  input                    wb_valid,
  input                    wb_en,
  input  [`RGIDX_SIZE-1:0] wb_rd,
  input  [`XLEN-1:0]       wb_data,
  input                    wb_lsu,//DIFFTEST
  input                    longi_empty//DIFFTEST
);
wire [`XLEN-1:0] regs [`RGIDX_NUM-1:0];
wire [`RGIDX_NUM-1:0] reg_wen;

genvar i;
generate
  for(i = 0; i < `RGIDX_NUM; i = i + 1) begin
    if(i == 0) begin
      assign reg_wen[i] = 1'b0;
      assign regs[i] = (`XLEN'b0 & {`XLEN{reg_wen[i]}});
    end
    else begin
      assign reg_wen[i] = (wb_rd == i) & wb_en;
      lieat_general_dfflr #(`XLEN) regfile (clk,rstn,reg_wen[i],wb_data,regs[i]); 
    end
  end
endgenerate

assign ifu_src1 = regs[ifu_rs1];
assign exu_src1 = regs[exu_rs1];
assign exu_src2 = regs[exu_rs2];
// ================================================================================================================================================
// DIFFTEST DPI-C
// ================================================================================================================================================
wire diff_ena;
wire diff_skip;
wire diff_sync;
wire diff_valid = diff_ena & wb_valid;
wire [`XLEN-1:0] diff_pc;
wire [`XLEN-1:0] diff_sync_data;
wire [`RGIDX_SIZE-1:0] diff_sync_rd;

lieat_general_dffr  #(1) diff_valid_delay(clk,rstn,wb_valid | diff_ena,diff_ena);
lieat_general_dfflr #(1) diff_skip_delay(clk,rstn,diff_valid,~longi_empty,diff_skip);
lieat_general_dfflr #(1) diff_sync_delay(clk,rstn,diff_valid,wb_lsu,diff_sync);
lieat_general_dfflr #(`RGIDX_SIZE) diff_sync_rd_delay(clk,rstn,diff_valid,wb_rd,diff_sync_rd);
lieat_general_dfflr #(`XLEN) diff_sync_data_delay(clk,rstn,diff_valid,wb_data,diff_sync_data);
lieat_general_dfflr #(`XLEN) diff_pc_delay(clk,rstn,wb_valid,wb_pc,diff_pc);

import "DPI-C" function void difftest_dut_regs(input int diff_pc, input int z0, input int ra, input int sp, input int gp, input int tp, input int t0, input int t1, input int t2,
                                              input int fp, input int s1, input int a0, input int a1, input int a2, input int a3, input int a4, input int a5, 
                                              input int a6, input int a7, input int s2, input int s3, input int s4, input int s5, input int s6, input int s7, 
                                              input int s8, input int s9, input int s10, input int a11, input int t3, input int t4, input int t5, input int t6);
import "DPI-C" function void difftest_dut_sync(input int diff_tag,input int diff_sync_data);
always @(posedge clk or negedge rstn) begin
  difftest_dut_regs(diff_pc,regs[0],regs[1],regs[2],regs[3],regs[4],regs[5],regs[6],regs[7],
                    regs[8],regs[9],regs[10],regs[11],regs[12],regs[13],regs[14],regs[15],
                    regs[16],regs[17],regs[18],regs[19],regs[20],regs[21],regs[22],regs[23],
                    regs[24],regs[25],regs[26],regs[27],regs[28],regs[29],regs[30],regs[31]);
  difftest_dut_sync({24'b0,diff_valid,diff_skip,diff_sync,diff_sync_rd},diff_sync_data);
end
endmodule
