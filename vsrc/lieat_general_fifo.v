module lieat_general_fifo # (
  parameter DP = 8,
  parameter DW = 32,
  parameter MASK = 1
)(
  input             clk,
  input            rstn,
  
  output     oitf_empty,
  input         i_valid,
  output        i_ready,
  input [DW-1:0] i_data,

  output        o_valid,
  input         o_ready,
  output[DW-1:0] o_data
);

genvar i;
generate
  if(DP == 0) begin
    assign o_data = i_data;
    assign i_ready = o_ready;
    assign o_valid = i_valid;
    assign oitf_empty = 1'b1;
  end
  else begin
    //state control
    wire [DP-1:0] fifo_state;
    wire [DP-1:0] fifo_state_nxt;
    wire i_shakehand = i_valid & i_ready; 
    wire o_shakehand = o_valid & o_ready;    
    wire fifo_state_rise = i_shakehand & ~o_shakehand;
    wire fifo_state_fall = ~i_shakehand & o_shakehand;
    assign fifo_state_nxt = fifo_state_rise ? {fifo_state[DP-2:0],1'b1} :
                            fifo_state_fall ? {1'b0,fifo_state[DP-1:1]} : fifo_state;
    lieat_general_dfflr #(DP) fifo_state_dfflr (clk,rstn,fifo_state_rise|fifo_state_fall,fifo_state_nxt,fifo_state);
    assign i_ready = ~fifo_state[DP-1] | o_shakehand;//can accept when fifo is not full or it is popping 
    assign o_valid = fifo_state[0] & (fifo_wptr != 0);
    assign oitf_empty = ~fifo_state[0];
    //ptr control
    wire [DP-1:0] fifo_wptr;
    wire [DP-1:0] fifo_wptr_nxt;
    wire [DP-1:0] fifo_rptr;
    wire [DP-1:0] fifo_rptr_nxt;
    if(DP == 1)begin
      assign fifo_rptr_nxt = 1'b1;
      assign fifo_wptr_nxt = 1'b1;
    end
    else begin
      assign fifo_rptr_nxt = fifo_rptr[DP-1] ? {{DP-1{1'b0}},1'b1} : {fifo_rptr[DP-2:0],1'b0};
      assign fifo_wptr_nxt = fifo_wptr[DP-1] ? {{DP-1{1'b0}},1'b1} : {fifo_wptr[DP-2:0],1'b0};
    end
    lieat_general_dfflrs #(1) fifo_rptr_0 (clk,rstn,o_shakehand,fifo_rptr_nxt[0],fifo_rptr[0]);
    lieat_general_dfflrs #(1) fifo_wptr_0 (clk,rstn,i_shakehand,fifo_wptr_nxt[0],fifo_wptr[0]);
    if(DP != 1) begin
      lieat_general_dfflr #(DP-1) fifo_rptr_DP (clk,rstn,o_shakehand,fifo_rptr_nxt[DP-1:1],fifo_rptr[DP-1:1]);
      lieat_general_dfflr #(DP-1) fifo_wptr_DP (clk,rstn,i_shakehand,fifo_wptr_nxt[DP-1:1],fifo_wptr[DP-1:1]);
    end
    //data control
    wire [DW-1:0] fifo_reg [DP-1:0];
    wire [DP-1:0] fifo_reg_en;
    wire [DW-1:0] fifo_out;
    for(i = 0; i < DP; i = i + 1) begin
      assign fifo_reg_en[i] = i_shakehand & fifo_wptr[i];
      lieat_general_dffl #(DW) fifo_rdata (clk,fifo_reg_en[i],i_data,fifo_reg[i]);
    end
    integer j;
    reg [DW-1:0] fifo_out;
    always @(*)begin
      fifo_out = {DW{1'b0}};
      for(j = 0; j < DP; j = j + 1)
      fifo_out = fifo_out | ({DW{fifo_rptr[j]}} & fifo_reg[j]);
    end
    if(MASK == 1) assign o_data = fifo_out & {DW{o_valid}};
    else assign o_data = fifo_out;
    end
  endgenerate
endmodule
