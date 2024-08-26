module lieat_general_dfflrs # (//l:使用loaden使能 r:允许reset异步复位 s:默认输出全1
    parameter DW = 32
)(
  input                     clock,
  input                     reset,
  input                     loaden,
  input         [DW-1:0]    din,
  output        [DW-1:0]    qout
);

reg          reg_s1;
reg [DW-1:0] reg_qout;

always @(posedge clock or posedge reset) begin
  if (reset)begin
    reg_s1   <= 1'b0;
    reg_qout <= {DW{1'b1}};
  end
  else begin
    reg_s1   <= 1'b1;
    if (loaden == 1'b1) reg_qout <= reg_s1 ? din : {DW{1'b1}};
  end
end

assign qout = reg_qout;

endmodule
module lieat_general_dfflr # (//l:使用loaden使能 r:允许reset异步复位 s:默认输出全1
    parameter DW = 32
)(
  input                     clock,
  input                     reset,
  input                     loaden,
  input         [DW-1:0]    din,
  output        [DW-1:0]    qout
);

reg          reg_s1;
reg [DW-1:0] reg_qout;

always @(posedge clock or posedge reset)
begin
  if (reset)begin
    reg_s1   <= 1'b0;
    reg_qout <= {DW{1'b0}};
  end
  else begin
    reg_s1   <= 1'b1;
    if (loaden == 1'b1) reg_qout <= reg_s1 ? din : {DW{1'b0}};
  end
end

assign qout = reg_qout;

endmodule
module lieat_general_dffrd # (//l:使用loaden使能 r:允许reset异步复位 d:自定义默认输出
    parameter DW = 32,
    parameter DEFAULT = 32'h80000000
)(
  input                     clock,
  input                     reset,
  input         [DW-1:0]    din,
  output        [DW-1:0]    qout
);

reg          reg_s1;
reg [DW-1:0] reg_qout;

always @(posedge clock or posedge reset)
begin
  if (reset) begin
    reg_s1   <= 1'b0;
    reg_qout <= DEFAULT;
  end
  else begin
    reg_s1   <= 1'b1;
    reg_qout <= reg_s1 ? din : DEFAULT;
  end
end

assign qout = reg_qout;

endmodule
module lieat_general_dffrs # (//l:使用loaden使能 r:允许reset异步复位 s:默认输出全1
    parameter DW = 32
)(
  input                     clock,
  input                     reset,
  input         [DW-1:0]    din,
  output        [DW-1:0]    qout
);

reg          reg_s1;
reg [DW-1:0] reg_qout;

always @(posedge clock or posedge reset)
begin
  if (reset)begin
    reg_s1   <= 1'b0;
    reg_qout <= {DW{1'b1}};
  end
  else begin
    reg_s1   <= 1'b1;
    reg_qout <= reg_s1 ? din : {DW{1'b1}};
  end
end

assign qout = reg_qout;

endmodule
module lieat_general_dffr # (//l:使用loaden使能 r:允许reset异步复位 s:默认输出全1
    parameter DW = 32
)(
  input                     clock,
  input                     reset,
  input         [DW-1:0]    din,
  output        [DW-1:0]    qout
);

reg          reg_s1;
reg [DW-1:0] reg_qout;

always @(posedge clock or posedge reset)
begin
  if (reset)begin
    reg_s1   <= 1'b0;
    reg_qout <= {DW{1'b0}};
  end
  else begin
    reg_s1   <= 1'b1;
    reg_qout <= reg_s1 ? din : {DW{1'b0}};
  end
end

assign qout = reg_qout;
endmodule
