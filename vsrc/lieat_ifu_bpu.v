module lieat_ifu_bpu # (
  parameter INDEX_NUM  = 32,
  parameter BHR_SIZE   = 2,
  parameter PHT_SIZE   = 4
)(
  input       clock,
  input       reset,
  
  input [4:0] index,
  input       inst_bxx,
  output      bxx_taken,

  input       prdt_result,
  input [4:0] prdt_index,
  input       prdt_en
);
reg [BHR_SIZE-1:0] pattern_history_table[INDEX_NUM-1:0][PHT_SIZE-1:0];//PHT
reg [BHR_SIZE-1:0] branch_history_table[INDEX_NUM-1:0];//BHR

wire [BHR_SIZE-1:0] branch_history = branch_history_table[index];
wire [BHR_SIZE-1:0] prdt_result_history = branch_history_table[prdt_index];
assign bxx_taken = inst_bxx & pattern_history_table[index][branch_history][1];

always@(posedge clock or posedge reset) begin
  if(reset)begin
    for(int i = 0;i < INDEX_NUM; i = i + 1)begin
      for(int j = 0; j < PHT_SIZE; j = j + 1)begin
        pattern_history_table[i][j] <= 2'b01;
      end
      branch_history_table[i] <= 2'b00;
    end
  end
  else if(prdt_en) begin
    case (pattern_history_table[prdt_index][prdt_result_history])
    2'b00: pattern_history_table[prdt_index][prdt_result_history] <= (prdt_result) ? 2'b01 : 2'b00;
    2'b01: pattern_history_table[prdt_index][prdt_result_history] <= (prdt_result) ? 2'b10 : 2'b00;
    2'b10: pattern_history_table[prdt_index][prdt_result_history] <= (prdt_result) ? 2'b11 : 2'b01;
    2'b11: pattern_history_table[prdt_index][prdt_result_history] <= (prdt_result) ? 2'b11 : 2'b10;
    endcase
    branch_history_table[prdt_index] <= {branch_history[0],prdt_result};
  end
end
endmodule
