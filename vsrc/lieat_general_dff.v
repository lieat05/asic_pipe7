/* verilator lint_off DECLFILENAME */
module lieat_general_dffrd # (//l:使用loaden使能 r:允许rstn异步复位 d:自定义默认输出
    parameter DW = 32,
    parameter DEFAULT = 32'h80000000
)(
  input                     clk,
  input                     rstn,
  input         [DW-1:0]    din,
  output        [DW-1:0]    qout
);

reg [DW-1:0] reg_qout;

always @(posedge clk or negedge rstn)
begin
  if (rstn == 1'b0)
    reg_qout <= DEFAULT;
  else reg_qout <= din;
end

assign qout = reg_qout;

endmodule

module lieat_general_dfflrd # (//l:使用loaden使能 r:允许rstn异步复位 d:自定义默认输出
    parameter DW = 32,
    parameter DEFAULT = 32'h80000000
)(
  input                     clk,
  input                     rstn,
  input                     loaden,
  input         [DW-1:0]    din,
  output        [DW-1:0]    qout
);

reg [DW-1:0] reg_qout;

always @(posedge clk or negedge rstn)
begin
  if (rstn == 1'b0)
    reg_qout <= DEFAULT;
  else if (loaden == 1'b1)
    reg_qout <= din;
end

assign qout = reg_qout;

endmodule

module lieat_general_dfflrs # (//l:使用loaden使能 r:允许rstn异步复位 s:默认输出全1
    parameter DW = 32
)(
  input                     clk,
  input                     rstn,
  input                     loaden,
  input         [DW-1:0]    din,
  output        [DW-1:0]    qout
);

reg [DW-1:0] reg_qout;

always @(posedge clk or negedge rstn)
begin
  if (rstn == 1'b0)
    reg_qout <= {DW{1'b1}};
  else if (loaden == 1'b1)
    reg_qout <= din;
end

assign qout = reg_qout;

endmodule

module lieat_general_dfflr # (//l:使用loaden使能 r:允许rstn异步复位 s:默认输出全1
    parameter DW = 32
)(
  input                     clk,
  input                     rstn,
  input                     loaden,
  input         [DW-1:0]    din,
  output        [DW-1:0]    qout
);

reg [DW-1:0] reg_qout;

always @(posedge clk or negedge rstn)
begin
  if (rstn == 1'b0)
    reg_qout <= {DW{1'b0}};
  else if (loaden == 1'b1)
    reg_qout <= din;
end

assign qout = reg_qout;

endmodule

module lieat_general_dffrs # (//l:使用loaden使能 r:允许rstn异步复位 s:默认输出全1
    parameter DW = 32
)(
  input                     clk,
  input                     rstn,
  input         [DW-1:0]    din,
  output        [DW-1:0]    qout
);

reg [DW-1:0] reg_qout;

always @(posedge clk or negedge rstn)
begin
  if (rstn == 1'b0)
    reg_qout <= {DW{1'b1}};
  else reg_qout <= din;
end

assign qout = reg_qout;

endmodule

module lieat_general_dffr # (//l:使用loaden使能 r:允许rstn异步复位 s:默认输出全1
    parameter DW = 32
)(
  input                     clk,
  input                     rstn,
  input         [DW-1:0]    din,
  output        [DW-1:0]    qout
);

reg [DW-1:0] reg_qout;

always @(posedge clk or negedge rstn)
begin
  if (rstn == 1'b0)
    reg_qout <= {DW{1'b0}};
  else reg_qout <= din;
end

assign qout = reg_qout;

endmodule

module lieat_general_dffl # (//l:使用loaden使能 r:允许rstn异步复位 s:默认输出全1
    parameter DW = 32
)(
  input                     clk,
  input                     loaden,
  input         [DW-1:0]    din,
  output        [DW-1:0]    qout
);

reg [DW-1:0] reg_qout;

always @(posedge clk)
begin
  if (loaden == 1'b1)
    reg_qout <= din;
end

assign qout = reg_qout;

endmodule
