module lieat_axi_master(
  // ================================================================================================================================================
  // ICACHE
  // ================================================================================================================================================
  input  [`XLEN-1:0] icache_axi_araddr,
  input              icache_axi_arvalid,
  output             icache_axi_arready,

  output [`XLEN-1:0] icache_axi_rdata,
  output             icache_axi_rvalid,
  input              icache_axi_rready,
  // ================================================================================================================================================
  // DCACHE
  // ================================================================================================================================================
  input              dcache_axi_arvalid,
  output             dcache_axi_arready,
  input  [`XLEN-1:0] dcache_axi_araddr,
  input  [2:0]       dcache_axi_arsize,
  //R channel
  output             dcache_axi_rvalid,
  input              dcache_axi_rready,
  output [`XLEN-1:0] dcache_axi_rdata,
  //AW channel
  input              dcache_axi_awvalid,
  output             dcache_axi_awready,
  input  [`XLEN-1:0] dcache_axi_awaddr,
  input  [2:0]       dcache_axi_awsize,  
  //W channel
  input              dcache_axi_wvalid,
  output             dcache_axi_wready,
  input  [`XLEN-1:0] dcache_axi_wdata,
  //B channel
  output             dcache_axi_bvalid,
  input              dcache_axi_bready,
  output [1:0]       dcache_axi_bresp,
  // ================================================================================================================================================
  // MASTER
  // ================================================================================================================================================
  input              io_master_awready,
  output             io_master_awvalid,
  output [31:0]      io_master_awaddr,
  output [3:0]       io_master_awid,
  output [7:0]       io_master_awlen,
  output [2:0]       io_master_awsize,
  output [1:0]       io_master_awburst,

  input              io_master_wready,
  output             io_master_wvalid,
  output [31:0]      io_master_wdata,
  output [7:0]       io_master_wstrb,
  output             io_master_wlast,

  output             io_master_bready,
  input              io_master_bvalid,
  input  [1:0]       io_master_bresp,
  input  [3:0]       io_master_bid,

  input              io_master_arready,
  output             io_master_arvalid,
  output [31:0]      io_master_araddr,
  output [3:0]       io_master_arid,
  output [7:0]       io_master_arlen,
  output [2:0]       io_master_arsize,
  output [1:0]       io_master_arburst,

  output             io_master_rready,
  input              io_master_rvalid,
  input  [1:0]       io_master_rresp,
  input  [31:0]      io_master_rdata,
  input              io_master_rlast,
  input  [3:0]       io_master_rid
);
wire unused_ok = &{io_master_bresp,io_master_bid,io_master_rresp,io_master_rlast};
// ================================================================================================================================================
// ONLY DCACHE
// ================================================================================================================================================
assign io_master_awvalid = dcache_axi_awvalid;
assign io_master_awaddr  = dcache_axi_awaddr;
assign io_master_awlen   = 8'b0;
assign io_master_awid    = 4'b0001;
assign io_master_awsize  = dcache_axi_awsize;
assign io_master_awburst = 2'b0;
assign io_master_wlast   = 1'b0;
assign io_master_wvalid  = dcache_axi_wvalid;
assign io_master_wdata   = dcache_axi_wdata;
assign io_master_wstrb   = 8'b0;
assign io_master_wlast   = 1'b0;
assign io_master_bready  = dcache_axi_bready;

assign dcache_axi_awready= io_master_awready;
assign dcache_axi_wready = io_master_wready;
assign dcache_axi_bvalid = io_master_bvalid;
assign dcache_axi_bresp  = io_master_bresp;
// ================================================================================================================================================
// DCACHE AND ICACHE:D FIRST THEN I
// ================================================================================================================================================
assign io_master_arvalid = dcache_axi_arvalid | icache_axi_arvalid;
assign io_master_araddr  = dcache_axi_arvalid ? dcache_axi_araddr :
                           icache_axi_arvalid ? icache_axi_araddr : 32'h0;
assign io_master_arid    = dcache_axi_arvalid ? 4'b0001           :
                           icache_axi_arvalid ? 4'b0010           : 4'b0000;
assign io_master_arlen   = 8'b0;
assign io_master_arsize  = dcache_axi_arvalid ? dcache_axi_arsize :
                           icache_axi_arvalid ? 3'b100            : 3'b0;
assign io_master_arburst = 2'b0;
assign io_master_rready  = (io_master_rid == 4'b0001) ? dcache_axi_rready :
                           (io_master_rid == 4'b0010) ? icache_axi_rready : 1'b0;

assign icache_axi_arready = io_master_arready & (~dcache_axi_arvalid);
assign icache_axi_rvalid  = (io_master_rid == 4'b0010) & io_master_rvalid ;
assign icache_axi_rdata   = {`XLEN{(io_master_rid == 4'b0010)}} & io_master_rdata;

assign dcache_axi_arready = io_master_arready;
assign dcache_axi_rvalid  = (io_master_rid == 4'b0001) & io_master_rvalid;
assign dcache_axi_rdata   = {`XLEN{(io_master_rid == 4'b0001)}} & io_master_rdata;
endmodule
