/* verilator lint_off DECLFILENAME */
module lieat_general_stagereg #(
  parameter DW = 32,
  parameter MASK = 0
)(
  input             clk,
  input            rstn,

  input         i_valid,
  output        i_ready,
  input [DW-1:0] i_data,

  output        o_valid,
  input         o_ready,
  output[DW-1:0] o_data
);

generate
  begin
      wire i_shakehand = i_valid & i_ready; 
      wire o_shakehand = o_valid & o_ready;
      wire valid_ena;
      wire valid_nxt;

      assign valid_ena = i_shakehand | o_shakehand;
      assign valid_nxt = i_shakehand | ~o_shakehand;
      
      lieat_general_dfflr #(1) valid_dff(clk,rstn,valid_ena,valid_nxt,o_valid);
      lieat_general_dffl #(DW) data_dff(clk,i_shakehand,i_data,pipe_out);

      assign i_ready = ~o_valid | o_shakehand;
  end
  reg [DW-1:0] pipe_out;
  if(MASK == 1) assign o_data = pipe_out & {DW{o_valid}};
  else assign o_data = pipe_out;
endgenerate

endmodule 
