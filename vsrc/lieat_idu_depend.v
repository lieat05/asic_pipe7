module lieat_idu_depend#(
  DEPTH = 4 
)(
  input                clock,
  input                reset,
  input                disp_ena,
  input [2:0]          disp_op,
  input                disp_rs1en,
  input                disp_rs2en,
  input                disp_rdwen,
  input [`REG_IDX-1:0] disp_rs1,
  input [`REG_IDX-1:0] disp_rs2,
  input [`REG_IDX-1:0] disp_rd,

  input                wbck_ena,
  input [2:0]          wbck_op,
  input                com_flush,
  input                lsu_flush,
  input                muldiv_flush,

  input [`REG_IDX-1:0] ifu_jalr_rs1,
  input [`REG_IDX-1:0] wbu_dep_rd,

  output               disp_dep,
  output               wbck_dep,
  output               ifu_dep,
  output               oitf_full,
  output               longi_empty
);
// ================================================================================================================================================
// SIGNAL LIST
// ================================================================================================================================================
wire disp_com;
wire disp_lsu;
wire disp_muldiv;

wire wbck_com;
wire wbck_lsu;
wire wbck_muldiv;

wire [1:0] wptr;
wire [1:0] rptr;
wire [3:0] flush_ptr;
wire com_wptr;
wire com_rptr;

wire [DEPTH-1:0] oitf;//lsu muldiv others
wire [DEPTH-1:0] oitf_set;
wire [DEPTH-1:0] oitf_clr;
wire [DEPTH-1:0] oitf_ena;
wire [DEPTH-1:0] oitf_nxt;
wire [DEPTH-1:0] oitf_rdwen;
wire [`REG_IDX-1:0] oitf_rd [DEPTH-1:0];

wire [DEPTH-1:0] oitf_rs1_matchrd;
wire [DEPTH-1:0] oitf_rs2_matchrd;
wire [DEPTH-1:0] oitf_rd_matchrd;
wire [DEPTH-1:0] oitf_ifu_matchrd;
wire [DEPTH-1:0] wbck_rd_matchrd;

wire oitf_o_rs1_matchrd;
wire oitf_o_rs2_matchrd;
wire oitf_o_rd_matchrd;
wire wbck_o_rd_matchrd;
// ================================================================================================================================================
// OITF SIGNAL
// ================================================================================================================================================
assign disp_com = ~disp_lsu & ~disp_muldiv;
assign disp_lsu = (disp_op == 3'b010);
assign disp_muldiv = (disp_op == 3'b100);

assign wbck_com = wbck_op[0];
assign wbck_lsu = wbck_op[1];
assign wbck_muldiv = wbck_op[2];

lieat_general_dfflr #(1) com_wptr_dff(clock,reset,(disp_com & disp_ena) | com_flush,~com_wptr,com_wptr);
lieat_general_dfflr #(1) com_rptr_dff(clock,reset,wbck_com & wbck_ena,~com_rptr,com_rptr);

assign wptr = 
({2{disp_com}}    & {1'b1,com_wptr}) |
({2{disp_lsu}}    & 2'b00) |
({2{disp_muldiv}} & 2'b01) ;
assign rptr = 
({2{wbck_com}}    & {1'b1,com_rptr}) |
({2{wbck_lsu}}    & 2'b00) |
({2{wbck_muldiv}} & 2'b01) ;
assign flush_ptr = {
com_flush & ~com_wptr,
com_flush & com_wptr,
muldiv_flush,
lsu_flush
};
genvar i;
generate 
  for(i = 0;i < DEPTH; i = i + 1) begin
    assign oitf_set[i] = disp_ena   & (wptr == i);
    assign oitf_clr[i] = (wbck_ena & rptr == i) | flush_ptr[i];
    assign oitf_ena[i] = oitf_set[i] | oitf_clr[i];
    assign oitf_nxt[i] = oitf_set[i] | (~oitf_clr[i]);

    lieat_general_dfflr #(1) oitf_dff (clock,reset,oitf_ena[i],oitf_nxt[i],oitf[i]);
    lieat_general_dfflr #(1) oitf_rdwen_dff (clock,reset,oitf_set[i],disp_rdwen,oitf_rdwen[i]);
    lieat_general_dfflr #(`REG_IDX) oitf_rd_dff (clock,reset,oitf_set[i],disp_rd,oitf_rd[i]);
    
    assign oitf_rs1_matchrd[i] = oitf[i] & disp_rs1en & oitf_rdwen[i] & (disp_rs1 == oitf_rd[i]);
    assign oitf_rs2_matchrd[i] = oitf[i] & disp_rs2en & oitf_rdwen[i] & (disp_rs2 == oitf_rd[i]);
    assign oitf_rd_matchrd[i]  = oitf[i] & disp_rdwen & oitf_rdwen[i] & (disp_rd  == oitf_rd[i]);
    assign wbck_rd_matchrd[i]  = oitf[i] & oitf_rdwen[i] & (wbu_dep_rd   == oitf_rd[i]);
    assign oitf_ifu_matchrd[i] = oitf[i] & oitf_rdwen[i] & (ifu_jalr_rs1 == oitf_rd[i]);
  end
endgenerate
// ================================================================================================================================================
// OUTPUT SIGNAL
// ================================================================================================================================================
assign oitf_o_rs1_matchrd = | oitf_rs1_matchrd;
assign oitf_o_rs2_matchrd = | oitf_rs2_matchrd;
assign oitf_o_rd_matchrd  = | oitf_rd_matchrd;
assign wbck_o_rd_matchrd  = | wbck_rd_matchrd;
assign ifu_dep            = | oitf_ifu_matchrd;
assign oitf_full          = (disp_com & oitf[2] & oitf[3]) | (disp_lsu & oitf[0]) | (disp_muldiv & oitf[1]);

assign disp_dep = oitf_o_rs1_matchrd | oitf_o_rs2_matchrd | oitf_o_rd_matchrd;
assign wbck_dep = wbck_o_rd_matchrd;
assign longi_empty = ~oitf[0] & ~oitf[1];//DPIC
endmodule
