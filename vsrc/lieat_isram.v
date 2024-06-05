module lieat_isram#(
  parameter delay = 1
)(
  input              clk,
  input              rstn,

  input  [`XLEN-1:0] icache_axi_araddr,
  input              icache_axi_arvalid,
  output             icache_axi_arready,

  output [`XLEN-1:0] icache_axi_rdata,
  output             icache_axi_rvalid,
  input              icache_axi_rready
);
wire ar_sh = icache_axi_arvalid & icache_axi_arready;
wire r_sh  = icache_axi_rvalid  & icache_axi_rready;

//when need delay
always @(posedge clk or negedge rstn) begin
  if(ar_sh) if(delay != 0) begin
    if(delay == 1)sram_valid_delay <= ar_sh;
    else sram_valid_delay <= #(delay*2-2) ar_sh;
  end
  if(r_sh) sram_valid_delay <= 1'b0;
end

wire icache_axi_arready_set = r_sh;
wire icache_axi_arready_clr = ar_sh;
wire icache_axi_arready_ena = icache_axi_arready_set | icache_axi_arready_clr;
wire icache_axi_arready_nxt = icache_axi_arready_set | (~icache_axi_arready_clr);
lieat_general_dfflrs #(1) icache_axi_arready_dff (clk,rstn,icache_axi_arready_ena,icache_axi_arready_nxt,icache_axi_arready);
wire icache_axi_rvalid_set = (delay == 0) ? ar_sh : (~r_sh & sram_valid_delay);
wire icache_axi_rvalid_clr = r_sh;
wire icache_axi_rvalid_ena = icache_axi_rvalid_set | icache_axi_rvalid_clr;
wire icache_axi_rvalid_nxt = icache_axi_rvalid_set | (~icache_axi_rvalid_clr);
lieat_general_dfflr #(1) icache_axi_rvalid_dff (clk,rstn,icache_axi_rvalid_ena,icache_axi_rvalid_nxt,icache_axi_rvalid);

assign icache_axi_rdata = sram_rdata;

wire [`XLEN-1:0] sram_raddr = icache_axi_araddr;
wire [7:0]       sram_rlen  = 8'd4;
reg  [`XLEN-1:0] sram_rdata;
reg              sram_valid_delay;
import "DPI-C" function void pmem_read(input int sram_addr,output int sram_rdata,input byte sram_len);
always @(posedge clk or negedge rstn) if(ar_sh) pmem_read(sram_raddr, sram_rdata, sram_rlen);

endmodule
