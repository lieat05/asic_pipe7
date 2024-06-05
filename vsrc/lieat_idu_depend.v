module lieat_idu_depend#(
  DEPTH = 3 
)(
  input                    clk,
  input                    rstn,
  input                    disp_ena,
  input [2:0]              disp_op,
  input                    disp_rs1en,
  input                    disp_rs2en,
  input                    disp_rdwen,
  input [`RGIDX_SIZE-1:0]  disp_rs1,
  input [`RGIDX_SIZE-1:0]  disp_rs2,
  input [`RGIDX_SIZE-1:0]  disp_rd,

  input                    remove_ena,
  input [1:0]              remove_op,

  input [`RGIDX_SIZE-1:0]  ifu_dep_rs1,
  input [`RGIDX_SIZE-1:0]  wbu_dep_rd,

  output                   raw_dep,
  output                   waw_dep,
  output                   ifu_dep,
  output                   longi_empty
);
// ================================================================================================================================================
// PTR
// ================================================================================================================================================
wire [1:0] wptr = (disp_op   == 3'b010) ? 2'b00 : (disp_op   == 3'b100) ? 2'b01 : 2'b11;//lsu muldiv
wire [1:0] rptr = remove_op;
// ================================================================================================================================================
// OITF SIGNAL
// ================================================================================================================================================
wire [DEPTH-1:0] oitf;//lsu muldiv others
wire [DEPTH-1:0] oitf_set;
wire [DEPTH-1:0] oitf_clr;
wire [DEPTH-1:0] oitf_ena;
wire [DEPTH-1:0] oitf_nxt;
wire [DEPTH-1:0] oitf_rdwen;
wire [`RGIDX_SIZE-1:0] oitf_rd [DEPTH-1:0];

wire [DEPTH-1:0] oitf_rs1_matchrd;
wire [DEPTH-1:0] oitf_rs2_matchrd;
wire [DEPTH-1:0] oitf_rd_matchrd;
wire [DEPTH-1:0] oitf_ifu_matchrd;

genvar i;
generate 
  for(i = 0;i < DEPTH; i = i + 1) begin
    assign oitf_set[i] = disp_ena   & (wptr == i);
    assign oitf_clr[i] = remove_ena & (rptr == i);
    assign oitf_ena[i] = oitf_set[i] | oitf_clr[i];
    assign oitf_nxt[i] = oitf_set[i] | (~oitf_clr[i]);

    lieat_general_dfflr #(1) oitf_dff (clk,rstn,oitf_ena[i],oitf_nxt[i],oitf[i]);
    lieat_general_dfflr #(1) oitf_rdwen_dff (clk,rstn,oitf_set[i],disp_rdwen,oitf_rdwen[i]);
    lieat_general_dfflr #(`RGIDX_SIZE) oitf_rd_dff (clk,rstn,oitf_set[i],disp_rd,oitf_rd[i]);
    
    assign oitf_rs1_matchrd[i] = ~oitf_clr[i] & oitf[i] & disp_rs1en & oitf_rdwen[i] & (disp_rs1 == oitf_rd[i]);
    assign oitf_rs2_matchrd[i] = ~oitf_clr[i] & oitf[i] & disp_rs2en & oitf_rdwen[i] & (disp_rs2 == oitf_rd[i]);
    assign oitf_rd_matchrd[i]  = ~oitf_clr[i] & oitf[i] & oitf_rdwen[i] & (wbu_dep_rd   == oitf_rd[i]);
    assign oitf_ifu_matchrd[i] = oitf[i] & oitf_rdwen[i] & (ifu_dep_rs1 == oitf_rd[i]);
  end
endgenerate
// ================================================================================================================================================
// OUTPUT SIGNAL
// ================================================================================================================================================
wire oitf_o_rs1_matchrd = | oitf_rs1_matchrd;
wire oitf_o_rs2_matchrd = | oitf_rs2_matchrd;
wire oitf_o_rd_matchrd  = | oitf_rd_matchrd;
assign ifu_dep = | oitf_ifu_matchrd;
assign raw_dep = oitf_o_rs1_matchrd | oitf_o_rs2_matchrd;
assign waw_dep = oitf_o_rd_matchrd;
assign longi_empty = ~(| oitf);
endmodule

