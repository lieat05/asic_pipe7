module lieat_exu_dcache #(
  parameter CACHE_WAY = 2,
  parameter INDEX_LEN = 6,//cache has 2 ways: 1KB
  parameter CACHE_SIZE = 64,//each way has 64 blocks
  parameter TAG_WIDTH  = 24,
  parameter OFFSET_LEN = 2//each block has 4 bytes
)(
  input                clock,
  input                reset,

  input                lsu_req_valid,
  output               lsu_req_ready,
  input                lsu_req_ren,
  input                lsu_req_wen,
  input  [`XLEN-1:0]   lsu_req_addr,
  input  [2:0]         lsu_req_flag,
  input  [`XLEN-1:0]   lsu_req_wdata,
  output               lsu_rsp_valid,
  input                lsu_rsp_ready,
  output [`XLEN-1:0]   lsu_rsp_rdata,
  input                lsu_req_fencei,
  //AR channel
  output               dcache_axi_arvalid,
  input                dcache_axi_arready,
  output [`XLEN-1:0]   dcache_axi_araddr,
  output [2:0]         dcache_axi_arsize,
  //R channel
  input                dcache_axi_rvalid,
  output               dcache_axi_rready,
  input  [`AXILEN-1:0] dcache_axi_rdata,
  //AW channel
  output               dcache_axi_awvalid,
  input                dcache_axi_awready,
  output [`XLEN-1:0]   dcache_axi_awaddr,
  output [2:0]         dcache_axi_awsize,
  //W channel
  output               dcache_axi_wvalid,
  input                dcache_axi_wready,
  output [`AXILEN-1:0] dcache_axi_wdata,
  output [7:0]         dcache_axi_wstrb,
  //B channel
  input                dcache_axi_bvalid,
  output               dcache_axi_bready,
  input  [1:0]         dcache_axi_bresp
);

// ================================================================================================================================================
// SIGNAL LIST
// ================================================================================================================================================
wire lsu_req_sh = lsu_req_valid & lsu_req_ready;
wire lsu_rsp_sh = lsu_rsp_valid & lsu_rsp_ready;
wire aw_sh  = dcache_axi_awvalid & dcache_axi_awready;
wire w_sh   = dcache_axi_wvalid & dcache_axi_wready;
wire ar_sh  = dcache_axi_arvalid & dcache_axi_arready;
wire r_sh   = dcache_axi_rvalid & dcache_axi_rready;
wire b_sh   = dcache_axi_bvalid & dcache_axi_bready;

localparam STATE_IDLE = 3'b001;
localparam STATE_VALD = 3'b010;
localparam STATE_BUSY = 3'b100;
localparam STATE_IDLE_BIT = 0;
localparam STATE_VALD_BIT = 1;
localparam STATE_BUSY_BIT = 2;

localparam STATER_IDE = 4'b0001;
localparam STATER_AR  = 4'b0010;
localparam STATER_R   = 4'b0100;
localparam STATER_VLD = 4'b1000;
localparam STATER_IDE_BIT = 0;
localparam STATER_AR_BIT  = 1;
localparam STATER_R_BIT   = 2;
localparam STATER_VLD_BIT = 3;

localparam STATEW_IDE = 6'b000001;
localparam STATEW_AWW = 6'b000010;
localparam STATEW_AW  = 6'b000100;
localparam STATEW_W   = 6'b001000;
localparam STATEW_B   = 6'b010000;
localparam STATEW_VLD = 6'b100000;
localparam STATEW_IDE_BIT = 0;
localparam STATEW_AWW_BIT = 1;
localparam STATEW_AW_BIT  = 2;
localparam STATEW_W_BIT   = 3;
localparam STATEW_B_BIT   = 4;
localparam STATEW_VLD_BIT = 5;

reg [2:0] state_r;
reg [3:0] state_rr;
reg [5:0] state_wr;
reg [2:0] state_nxt;
reg [3:0] state_rnxt;
reg [5:0] state_wnxt;

wire [INDEX_LEN:0] count;
wire [INDEX_LEN:0] count_nxt;
wire count_ena;
wire count_over;
wire sync_ena;
wire sync_clean;
wire sync_valid;

wire lsu_req_addr_inside;
wire lsu_req_hit0;
wire lsu_req_hit1;
wire lsu_req_hit;
wire lsu_req_miss0;
wire lsu_req_miss1;
wire lsu_req_miss;
wire lsu_req_clean;
wire lsu_req_dirty;
wire lsu_req_read_outaddr;
wire lsu_req_read_hit;
wire lsu_req_read_miss;
wire lsu_req_read_miss_wb;
wire lsu_req_write_outaddr;
wire lsu_req_write_hit;
wire lsu_req_write_miss;
wire lsu_req_write_miss_wb;
wire lsu_req_write_miss_rd;
wire lsu_req_write_miss_wbrd;
wire lsu_req_axi_idle;
wire lsu_req_axi_read;
wire lsu_req_axi_write;
wire lsu_req_axi_wbrd;
wire lsu_req_axi_sync;

wire hsel0;
wire hsel1;
wire msel0;
wire msel1;
wire read_outaddr;
wire read_hit;
wire read_miss;//no need wb
wire read_miss_wb;
wire write_outaddr;
wire write_hit;
wire write_miss;
wire write_miss_wb;
wire write_miss_rd;
wire write_miss_wbrd;
wire axi_idle;
wire axi_read;
wire axi_write;
wire axi_wbrd;
wire axi_sync;

wire axi_read_valid;
wire axi_write_valid;
wire axi_wbrd_valid;
wire axi_sync_valid;

wire [1:0] lsu_req_bytesel;
wire [TAG_WIDTH-1:0] lsu_req_tag;
wire [INDEX_LEN-1:0] lsu_req_index;
wire [1:0] bytesel;
wire [TAG_WIDTH-1:0] tag;
wire [INDEX_LEN-1:0] index;
reg  [TAG_WIDTH+4:0] dcache_extend  [CACHE_SIZE-1:0][CACHE_WAY-1:0];//TAG_WIDTH + VALID_BIT1 + LRU_BIT 4

wire len1;
wire len2;
wire len4;

wire [`XLEN-1:0]   dcache_axi_rdata32;
wire [2:0]         lsu_req_dcache_axi_awsize;
wire [7:0]         lsu_req_dcache_axi_wstrb;
wire [`XLEN-1:0]   lsu_req_dcache_axi_awaddr;
wire [`XLEN-1:0]   lsu_req_dcache_axi_wdata32;
wire [`AXILEN-1:0] lsu_req_dcache_axi_wdata;

wire [7:0] 	   dcache_axi_wstrb_pre;
wire [`XLEN-1:0]   dcache_axi_awaddr_pre;
wire [`AXILEN-1:0] dcache_axi_wdata_pre;

wire dcache_sram_cen = 1'b1;
wire dcache_sram_wen;
wire [5:0]         dcache_sram_addr;
wire [`AXILEN-1:0] dcache_sram_data;
wire [`AXILEN-1:0] dcache_sram_rdata;
wire [`AXILEN-1:0] read_miss_sram_data;
wire [`AXILEN-1:0] write_hit_sram_data;
wire [`AXILEN-1:0] write_miss_sram_data;
// ================================================================================================================================================
// STATE CONTROL
// ================================================================================================================================================
always @(*) begin
  case(state_wr)
    STATEW_IDE:state_wnxt = {
    1'b0,
    (aw_sh & w_sh),
    (aw_sh & ~w_sh),
    (~aw_sh & w_sh),
    (dcache_axi_awvalid & ~aw_sh & ~w_sh),
    (~dcache_axi_awvalid)};
    STATEW_AWW:state_wnxt = {
    1'b0,
    (aw_sh & w_sh),
    (aw_sh & ~w_sh),
    (~aw_sh & w_sh),
    (~aw_sh & ~w_sh),
    1'b0};
    STATEW_AW :state_wnxt = {
    1'b0,
    aw_sh,
    1'b0,
    ~aw_sh,
    2'b0};
    STATEW_W  :state_wnxt = {
    1'b0,
    w_sh,
    ~w_sh,
    3'b0};
    STATEW_B  :state_wnxt = {
    ~axi_sync & b_sh & ~lsu_rsp_sh,
    ~b_sh,
    3'b0,
    b_sh & (lsu_rsp_sh | axi_sync)};
    STATEW_VLD:state_wnxt = {
    ~lsu_rsp_sh,
    4'b0,
    lsu_rsp_sh};
    default   :state_wnxt = STATEW_IDE;
  endcase
  case(state_rr)
    STATER_IDE:state_rnxt = {
    1'b0,
    ar_sh,
    ~ar_sh & dcache_axi_arvalid,
    ~dcache_axi_arvalid
    };
    STATER_AR :state_rnxt = {
    1'b0,
    ar_sh,
    ~ar_sh,
    1'b0  
    };
    STATER_R  :state_rnxt = {
    r_sh & ~lsu_rsp_sh,
    ~r_sh,
    1'b0,
    r_sh & lsu_rsp_sh
    };
    STATER_VLD:state_rnxt = {
    ~lsu_rsp_sh,
    2'b0,
    lsu_rsp_sh
    };
    default:state_rnxt = STATER_IDE;
  endcase
  case(state_r)
    STATE_IDLE:state_nxt = {
    lsu_req_sh,
    1'b0,
    ~lsu_req_sh
    };
    STATE_BUSY:state_nxt = {
    ~lsu_rsp_valid,
    lsu_rsp_valid & ~lsu_rsp_ready,
    lsu_rsp_sh
    };
    STATE_VALD:state_nxt = {
    1'b0,
    ~lsu_rsp_sh,
    lsu_rsp_sh
    };
    default:state_nxt = STATE_IDLE;
  endcase
end
lieat_general_dffrd #(
  .DW(3),
  .DEFAULT(STATE_IDLE)
) dcache_state_dff(clock,reset,state_nxt,state_r);
lieat_general_dffrd #(
  .DW(4),
  .DEFAULT(STATER_IDE)
) dcache_stater_dff(clock,reset,state_rnxt,state_rr);
lieat_general_dffrd #(
  .DW(6),
  .DEFAULT(STATEW_IDE)
) dcache_statew_dff(clock,reset,state_wnxt,state_wr);

//assign lsu_req_addr_inside = (lsu_req_addr[31] == 1'b1) | (lsu_req_addr[31:16] == 16'h3000);//0x8000 and 0x3000
assign lsu_req_addr_inside = (lsu_req_addr[31:16] == 16'h0f00) | (lsu_req_addr[31:16] == 16'h2000);
assign lsu_req_hit0 = lsu_req_addr_inside & (dcache_extend[lsu_req_index][0][TAG_WIDTH+4:5] == lsu_req_tag);
assign lsu_req_hit1 = lsu_req_addr_inside & (dcache_extend[lsu_req_index][1][TAG_WIDTH+4:5] == lsu_req_tag);
assign lsu_req_hit = lsu_req_hit0 | lsu_req_hit1;
assign lsu_req_miss0 = (dcache_extend[lsu_req_index][0][3:0] > dcache_extend[lsu_req_index][1][3:0]);
assign lsu_req_miss1 = ~lsu_req_miss0;
assign lsu_req_miss = lsu_req_addr_inside & (~lsu_req_hit);
assign lsu_req_clean = (lsu_req_miss0 & ~dcache_extend[lsu_req_index][0][4]) | (lsu_req_miss1 & ~dcache_extend[lsu_req_index][1][4]);
assign lsu_req_dirty = (lsu_req_miss0 &  dcache_extend[lsu_req_index][0][4]) | (lsu_req_miss1 &  dcache_extend[lsu_req_index][1][4]);

assign lsu_req_read_outaddr    = lsu_req_ren & ~lsu_req_addr_inside;
assign lsu_req_read_hit        = lsu_req_ren & lsu_req_hit;
assign lsu_req_read_miss       = lsu_req_ren & lsu_req_miss & lsu_req_clean;
assign lsu_req_read_miss_wb    = lsu_req_ren & lsu_req_miss & lsu_req_dirty;

assign lsu_req_write_outaddr   = lsu_req_wen & ~lsu_req_addr_inside;
assign lsu_req_write_hit       = lsu_req_wen & lsu_req_hit;
assign lsu_req_write_miss      = lsu_req_wen & lsu_req_miss & lsu_req_clean & lsu_req_flag[1];
assign lsu_req_write_miss_wb   = lsu_req_wen & lsu_req_miss & lsu_req_dirty & lsu_req_flag[1];
assign lsu_req_write_miss_rd   = lsu_req_wen & lsu_req_miss & lsu_req_clean & ~lsu_req_flag[1];
assign lsu_req_write_miss_wbrd = lsu_req_wen & lsu_req_miss & lsu_req_dirty & ~lsu_req_flag[1];

assign lsu_req_axi_idle  = lsu_req_write_hit | lsu_req_read_hit | lsu_req_write_miss;
assign lsu_req_axi_read  = lsu_req_read_outaddr | lsu_req_read_miss | lsu_req_write_miss_rd;
assign lsu_req_axi_write = lsu_req_write_outaddr | lsu_req_write_miss_wb;
assign lsu_req_axi_wbrd  = lsu_req_read_miss_wb | lsu_req_write_miss_wbrd;
assign lsu_req_axi_sync  = lsu_req_fencei;

assign lsu_req_bytesel  = lsu_req_addr[OFFSET_LEN-1:0];
assign lsu_req_tag      = lsu_req_addr[`XLEN-1:OFFSET_LEN+INDEX_LEN];
assign lsu_req_index    = lsu_req_addr[OFFSET_LEN+INDEX_LEN-1:OFFSET_LEN];

lieat_general_dfflr #(1) dcache_hsel0_dff(clock,reset,lsu_req_sh,lsu_req_hit0,hsel0);
lieat_general_dfflr #(1) dcache_hsel1_dff(clock,reset,lsu_req_sh,lsu_req_hit1,hsel1);
lieat_general_dfflr #(1) dcache_msel0_dff(clock,reset,lsu_req_sh,lsu_req_miss0,msel0);
lieat_general_dfflr #(1) dcache_msel1_dff(clock,reset,lsu_req_sh,lsu_req_miss1,msel1);
lieat_general_dfflr #(1) dcache_read_outaddr_dff(clock,reset,lsu_req_sh,lsu_req_read_outaddr,read_outaddr);
lieat_general_dfflr #(1) dcache_read_hit_dff(clock,reset,lsu_req_sh,lsu_req_read_hit,read_hit);
lieat_general_dfflr #(1) dcache_read_miss_dff(clock,reset,lsu_req_sh,lsu_req_read_miss,read_miss);
lieat_general_dfflr #(1) dcache_read_miss_wb_dff(clock,reset,lsu_req_sh,lsu_req_read_miss_wb,read_miss_wb);
lieat_general_dfflr #(1) dcache_write_outaddr_dff(clock,reset,lsu_req_sh,lsu_req_write_outaddr,write_outaddr);
lieat_general_dfflr #(1) dcache_write_hit_dff(clock,reset,lsu_req_sh,lsu_req_write_hit,write_hit);
lieat_general_dfflr #(1) dcache_write_miss_dff(clock,reset,lsu_req_sh,lsu_req_write_miss,write_miss);
lieat_general_dfflr #(1) dcache_write_miss_wb_dff(clock,reset,lsu_req_sh,lsu_req_write_miss_wb,write_miss_wb);
lieat_general_dfflr #(1) dcache_write_miss_rd_dff(clock,reset,lsu_req_sh,lsu_req_write_miss_rd,write_miss_rd);
lieat_general_dfflr #(1) dcache_write_miss_wbrd_dff(clock,reset,lsu_req_sh,lsu_req_write_miss_wbrd,write_miss_wbrd);
lieat_general_dfflr #(1) dcache_axi_idle_dff(clock,reset,lsu_req_sh,lsu_req_axi_idle,axi_idle);
lieat_general_dfflr #(1) dcache_axi_read_dff(clock,reset,lsu_req_sh,lsu_req_axi_read,axi_read);
lieat_general_dfflr #(1) dcache_axi_write_dff(clock,reset,lsu_req_sh,lsu_req_axi_write,axi_write);
lieat_general_dfflr #(1) dcache_axi_wbrd_dff(clock,reset,lsu_req_sh,lsu_req_axi_wbrd,axi_wbrd);
lieat_general_dfflr #(1) dcache_axi_sync_dff(clock,reset,lsu_req_sh,lsu_req_axi_sync,axi_sync);
lieat_general_dfflr #(1) dcache_len1_dff(clock,reset,lsu_req_sh,~lsu_req_flag[1] & ~lsu_req_flag[0],len1);
lieat_general_dfflr #(1) dcache_len2_dff(clock,reset,lsu_req_sh,lsu_req_flag[0],len2);
lieat_general_dfflr #(1) dcache_len4_dff(clock,reset,lsu_req_sh,lsu_req_flag[1],len4);
lieat_general_dfflr #(2)         dcache_bytesel_dff(clock,reset,lsu_req_sh,lsu_req_bytesel,bytesel);
lieat_general_dfflr #(INDEX_LEN) dcache_index_dff(clock,reset,lsu_req_sh,lsu_req_index,index);
lieat_general_dfflr #(TAG_WIDTH) dcache_tag_dff(clock,reset,lsu_req_sh,lsu_req_tag,tag);

assign axi_read_valid  = state_rr[STATER_VLD_BIT] | (state_rr[STATER_R_BIT] & r_sh);
assign axi_write_valid = state_wr[STATEW_VLD_BIT] | (state_wr[STATEW_B_BIT] & b_sh);
assign axi_wbrd_valid  = axi_read_valid & axi_write_valid;
assign axi_sync_valid  = count_over & (dcache_axi_bvalid | sync_clean);

assign lsu_rsp_valid = state_r[STATE_VALD_BIT] | 
(state_r[STATE_BUSY_BIT] & (
(axi_idle)                    |
(axi_read  & axi_read_valid ) |
(axi_write & axi_write_valid) |
(axi_wbrd  & axi_wbrd_valid ) |
(axi_sync  & axi_sync_valid)));
assign lsu_req_ready = (state_r[STATE_IDLE_BIT]);
// ================================================================================================================================================
// READ CHANNEL
// ================================================================================================================================================
assign dcache_axi_arvalid = state_rr[STATER_AR_BIT] | (state_r[STATE_BUSY_BIT] & state_rr[STATER_IDE_BIT] & (axi_read | axi_wbrd));
assign dcache_axi_araddr  = read_outaddr ? lsu_req_addr             : {lsu_req_addr[31:2],2'b0};
assign dcache_axi_arsize  = read_outaddr ? {1'b0,lsu_req_flag[1:0]} : 3'b010;
assign dcache_axi_rready  = lsu_rsp_ready & (~axi_wbrd | (dcache_axi_bvalid));

assign dcache_axi_rdata32 = //READ CHANNEL:SEL CACHE OR AXI ---> LSU
({`XLEN{hsel0}}                                & dcache_sram_rdata[31:0] ) |
({`XLEN{hsel1}}                                & dcache_sram_rdata[63:32]) |
({`XLEN{dcache_axi_rvalid &  lsu_req_addr[2]}} & dcache_axi_rdata[63:32] ) |
({`XLEN{dcache_axi_rvalid & ~lsu_req_addr[2]}} & dcache_axi_rdata[31:0]  ) ;
assign lsu_rsp_rdata = 
({`XLEN{(lsu_req_flag == 3'b010)                     }} & dcache_axi_rdata32               )               |
({`XLEN{(lsu_req_flag == 3'b101) & (bytesel == 2'b00)}} & {16'b0,dcache_axi_rdata32[15: 0]})               | 
({`XLEN{(lsu_req_flag == 3'b101) & (bytesel == 2'b10)}} & {16'b0,dcache_axi_rdata32[31:16]})               |
({`XLEN{(lsu_req_flag == 3'b001) & (bytesel == 2'b00)}} & {{16{dcache_axi_rdata32[15]}},dcache_axi_rdata32[15: 0]}) | 
({`XLEN{(lsu_req_flag == 3'b001) & (bytesel == 2'b10)}} & {{16{dcache_axi_rdata32[31]}},dcache_axi_rdata32[31:16]}) |
({`XLEN{(lsu_req_flag == 3'b100) & (bytesel == 2'b00)}} & {24'b0,dcache_axi_rdata32[ 7: 0]})               |
({`XLEN{(lsu_req_flag == 3'b100) & (bytesel == 2'b01)}} & {24'b0,dcache_axi_rdata32[15: 8]})               |
({`XLEN{(lsu_req_flag == 3'b100) & (bytesel == 2'b10)}} & {24'b0,dcache_axi_rdata32[23:16]})               |
({`XLEN{(lsu_req_flag == 3'b100) & (bytesel == 2'b11)}} & {24'b0,dcache_axi_rdata32[31:24]})               | 
({`XLEN{(lsu_req_flag == 3'b000) & (bytesel == 2'b00)}} & {{24{dcache_axi_rdata32[7]}},dcache_axi_rdata32[ 7: 0]})  |
({`XLEN{(lsu_req_flag == 3'b000) & (bytesel == 2'b01)}} & {{24{dcache_axi_rdata32[15]}},dcache_axi_rdata32[15: 8]}) |
({`XLEN{(lsu_req_flag == 3'b000) & (bytesel == 2'b10)}} & {{24{dcache_axi_rdata32[23]}},dcache_axi_rdata32[23:16]}) |
({`XLEN{(lsu_req_flag == 3'b000) & (bytesel == 2'b11)}} & {{24{dcache_axi_rdata32[31]}},dcache_axi_rdata32[31:24]}) ;
// ================================================================================================================================================
// WRITE CHANNEL
// ================================================================================================================================================
assign count_nxt = count_over ? 7'b0000000 : (count+1);
assign count_ena = axi_sync & (dcache_axi_bvalid | sync_clean);
assign count_over = (count == 7'b1111111);
lieat_general_dfflr #(7) sync_count_dff(clock,reset,count_ena,count_nxt,count);
assign sync_clean   = ~dcache_extend[count[6:1]][count[0]][4];
assign sync_valid   = axi_sync & ~sync_clean;

assign dcache_axi_awvalid = (state_wr[STATEW_AWW_BIT] | state_wr[STATEW_AW_BIT]) | (state_r[STATE_BUSY_BIT] & state_wr[STATEW_IDE_BIT] & (axi_write | axi_wbrd | sync_valid));
assign dcache_axi_wvalid  = (state_wr[STATEW_AWW_BIT] | state_wr[STATEW_W_BIT]) | (state_r[STATE_BUSY_BIT] & state_wr[STATEW_IDE_BIT] & (axi_write | axi_wbrd | sync_valid));
assign dcache_axi_bready  = lsu_rsp_ready & (~axi_wbrd | (dcache_axi_rvalid));

assign lsu_req_dcache_axi_awaddr  = lsu_req_write_outaddr ? lsu_req_addr             : {dcache_extend[lsu_req_index][lsu_req_miss1][TAG_WIDTH+4:5],lsu_req_index,2'b0};
assign lsu_req_dcache_axi_awsize  = lsu_req_write_outaddr ? {1'b0,lsu_req_flag[1:0]} : 3'b010;
assign lsu_req_dcache_axi_wstrb = 
({8{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b000)}} & 8'b00000001) |
({8{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b001)}} & 8'b00000010) |
({8{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b010)}} & 8'b00000100) |
({8{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b011)}} & 8'b00001000) |
({8{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b100)}} & 8'b00010000) |
({8{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b101)}} & 8'b00100000) |
({8{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b110)}} & 8'b01000000) |
({8{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b111)}} & 8'b10000000) |
({8{(lsu_req_dcache_axi_awsize == 3'b001) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b000)}} & 8'b00000011) |
({8{(lsu_req_dcache_axi_awsize == 3'b001) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b010)}} & 8'b00001100) |
({8{(lsu_req_dcache_axi_awsize == 3'b001) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b100)}} & 8'b00110000) |
({8{(lsu_req_dcache_axi_awsize == 3'b001) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b110)}} & 8'b11000000) |
({8{(lsu_req_dcache_axi_awsize == 3'b010) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b000)}} & 8'b00001111) |
({8{(lsu_req_dcache_axi_awsize == 3'b010) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b100)}} & 8'b11110000) ;
assign lsu_req_dcache_axi_wdata32 = lsu_req_write_outaddr ? lsu_req_wdata : (lsu_req_miss0 ? dcache_sram_rdata[31:0] : dcache_sram_rdata[63:32]);
assign lsu_req_dcache_axi_wdata = 
({64{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b000)}} & {56'h0,{lsu_req_dcache_axi_wdata32[ 7: 0]}})       |
({64{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b001)}} & {48'h0,{lsu_req_dcache_axi_wdata32[ 7: 0]}, 8'h0}) |
({64{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b010)}} & {40'h0,{lsu_req_dcache_axi_wdata32[ 7: 0]},16'h0}) |
({64{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b011)}} & {32'h0,{lsu_req_dcache_axi_wdata32[ 7: 0]},24'h0}) |
({64{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b100)}} & {24'h0,{lsu_req_dcache_axi_wdata32[ 7: 0]},32'h0}) |
({64{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b101)}} & {16'h0,{lsu_req_dcache_axi_wdata32[ 7: 0]},40'h0}) |
({64{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b110)}} & { 8'h0,{lsu_req_dcache_axi_wdata32[ 7: 0]},48'h0}) |
({64{(lsu_req_dcache_axi_awsize == 3'b000) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b111)}} & {      {lsu_req_dcache_axi_wdata32[ 7: 0]},56'h0}) |
({64{(lsu_req_dcache_axi_awsize == 3'b001) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b000)}} & {48'h0,{lsu_req_dcache_axi_wdata32[15: 0]}      }) |
({64{(lsu_req_dcache_axi_awsize == 3'b001) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b010)}} & {32'h0,{lsu_req_dcache_axi_wdata32[15: 0]},16'h0}) |
({64{(lsu_req_dcache_axi_awsize == 3'b001) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b100)}} & {16'h0,{lsu_req_dcache_axi_wdata32[15: 0]},32'h0}) |
({64{(lsu_req_dcache_axi_awsize == 3'b001) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b110)}} & {      {lsu_req_dcache_axi_wdata32[15: 0]},48'h0}) |
({64{(lsu_req_dcache_axi_awsize == 3'b010) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b000)}} & {32'h0,{lsu_req_dcache_axi_wdata32[31: 0]}      }) |
({64{(lsu_req_dcache_axi_awsize == 3'b010) & (lsu_req_dcache_axi_awaddr[2:0] == 3'b100)}} & {      {lsu_req_dcache_axi_wdata32[31: 0]},32'h0}) ;

lieat_general_dfflr #(8)       dcache_axi_wstrb_dff(clock,reset,lsu_req_sh,lsu_req_dcache_axi_wstrb,dcache_axi_wstrb_pre);
lieat_general_dfflr #(3)       dcache_axi_awsize_dff(clock,reset,lsu_req_sh,lsu_req_dcache_axi_awsize,dcache_axi_awsize);
lieat_general_dfflr #(`XLEN)   dcache_axi_awaddr_dff(clock,reset,lsu_req_sh,lsu_req_dcache_axi_awaddr,dcache_axi_awaddr_pre);
lieat_general_dfflr #(`AXILEN) dcache_axi_wdata_dff(clock,reset,lsu_req_sh,lsu_req_dcache_axi_wdata,dcache_axi_wdata_pre);

assign dcache_axi_wstrb  = axi_sync ? {{4{count[1]}},{4{~count[1]}}} : dcache_axi_wstrb_pre;
assign dcache_axi_awaddr = axi_sync ? {dcache_extend[count[6:1]][count[0]][TAG_WIDTH+4:5],count[6:1],2'b0} : dcache_axi_awaddr_pre;
assign dcache_axi_wdata  = axi_sync ? {
{`XLEN{ count[1]}} & (count[0] ? dcache_sram_rdata[63:32] : dcache_sram_rdata[31:0]),
{`XLEN{~count[1]}} & (count[0] ? dcache_sram_rdata[63:32] : dcache_sram_rdata[31:0])} : dcache_axi_wdata_pre; 
// ================================================================================================================================================
// CACHE MODULE
// ================================================================================================================================================
assign dcache_sram_wen = 
(read_miss       & dcache_axi_rvalid      ) |
(read_miss_wb    & dcache_axi_rvalid      ) |
(write_hit       & state_r[STATE_BUSY_BIT]) |
(write_miss      & state_r[STATE_BUSY_BIT]) |
(write_miss_rd   & dcache_axi_rvalid      ) |
(write_miss_wb   & state_r[STATE_BUSY_BIT]) |
(write_miss_wbrd & dcache_axi_rvalid      ) ;

assign dcache_sram_addr = axi_sync ? count[6:1] : lsu_req_index;
assign dcache_sram_data = 
({64{(read_miss       & dcache_axi_rvalid)}} & read_miss_sram_data) |
({64{(read_miss_wb    & dcache_axi_rvalid)}} & read_miss_sram_data) |
({64{(write_hit                          )}} & write_hit_sram_data) |
({64{(write_miss                         )}} & write_miss_sram_data)|
({64{(write_miss                         )}} & write_miss_sram_data)|
({64{(write_miss_rd   & dcache_axi_rvalid)}} & write_miss_sram_data)|
({64{(write_miss_wb                      )}} & write_miss_sram_data)|
({64{(write_miss_wbrd & dcache_axi_rvalid)}} & write_miss_sram_data);

assign read_miss_sram_data = msel0 ? {dcache_sram_rdata[63:32],dcache_axi_rdata32} : {dcache_axi_rdata32,dcache_sram_rdata[31:0]};
assign write_hit_sram_data = 
({64{(len1 & (bytesel == 2'b00) & hsel0)}} & {dcache_sram_rdata[63: 8],lsu_req_wdata[7:0]                         }) |
({64{(len1 & (bytesel == 2'b01) & hsel0)}} & {dcache_sram_rdata[63:16],lsu_req_wdata[7:0],dcache_sram_rdata[ 7:0] }) |
({64{(len1 & (bytesel == 2'b10) & hsel0)}} & {dcache_sram_rdata[63:24],lsu_req_wdata[7:0],dcache_sram_rdata[15:0] }) |
({64{(len1 & (bytesel == 2'b11) & hsel0)}} & {dcache_sram_rdata[63:32],lsu_req_wdata[7:0],dcache_sram_rdata[23:0] }) |
({64{(len1 & (bytesel == 2'b00) & hsel1)}} & {dcache_sram_rdata[63:40],lsu_req_wdata[7:0],dcache_sram_rdata[31:0] }) |
({64{(len1 & (bytesel == 2'b01) & hsel1)}} & {dcache_sram_rdata[63:48],lsu_req_wdata[7:0],dcache_sram_rdata[39:0] }) |
({64{(len1 & (bytesel == 2'b10) & hsel1)}} & {dcache_sram_rdata[63:56],lsu_req_wdata[7:0],dcache_sram_rdata[47:0] }) |
({64{(len1 & (bytesel == 2'b11) & hsel1)}} & {                         lsu_req_wdata[7:0],dcache_sram_rdata[55:0] }) |
({64{(len2 & (bytesel == 2'b00) & hsel0)}} & {dcache_sram_rdata[63:16],lsu_req_wdata[15:0]                        }) |
({64{(len2 & (bytesel == 2'b10) & hsel0)}} & {dcache_sram_rdata[63:32],lsu_req_wdata[15:0],dcache_sram_rdata[15:0]}) |
({64{(len2 & (bytesel == 2'b00) & hsel1)}} & {dcache_sram_rdata[63:48],lsu_req_wdata[15:0],dcache_sram_rdata[31:0]}) |
({64{(len2 & (bytesel == 2'b10) & hsel1)}} & {                         lsu_req_wdata[15:0],dcache_sram_rdata[47:0]}) |
({64{(len4 & (bytesel == 2'b00) & hsel0)}} & {dcache_sram_rdata[63:32],lsu_req_wdata[31:0]                        }) |
({64{(len4 & (bytesel == 2'b00) & hsel1)}} & {                         lsu_req_wdata[31:0],dcache_sram_rdata[31:0]}) ;
assign write_miss_sram_data = 
({64{(len1 & (bytesel == 2'b00) & msel0)}} & {dcache_sram_rdata[63:32],dcache_axi_rdata32[31: 8],lsu_req_wdata[7:0]                         }) |
({64{(len1 & (bytesel == 2'b01) & msel0)}} & {dcache_sram_rdata[63:32],dcache_axi_rdata32[31:16],lsu_req_wdata[7:0],dcache_axi_rdata32[ 7:0]}) |
({64{(len1 & (bytesel == 2'b10) & msel0)}} & {dcache_sram_rdata[63:32],dcache_axi_rdata32[31:24],lsu_req_wdata[7:0],dcache_axi_rdata32[15:0]}) |
({64{(len1 & (bytesel == 2'b11) & msel0)}} & {dcache_sram_rdata[63:32],                          lsu_req_wdata[7:0],dcache_axi_rdata32[23:0]}) |
({64{(len1 & (bytesel == 2'b00) & msel1)}} & {dcache_axi_rdata32[31: 8],lsu_req_wdata[7:0],                         dcache_sram_rdata[31: 0]}) |
({64{(len1 & (bytesel == 2'b01) & msel1)}} & {dcache_axi_rdata32[31:16],lsu_req_wdata[7:0],dcache_axi_rdata32[7:0] ,dcache_sram_rdata[31: 0]}) |
({64{(len1 & (bytesel == 2'b10) & msel1)}} & {dcache_axi_rdata32[31:24],lsu_req_wdata[7:0],dcache_axi_rdata32[15:0],dcache_sram_rdata[31: 0]}) |
({64{(len1 & (bytesel == 2'b11) & msel1)}} & {                          lsu_req_wdata[7:0],dcache_axi_rdata32[23:0],dcache_sram_rdata[31: 0]}) |
({64{(len2 & (bytesel == 2'b00) & msel0)}} & {dcache_sram_rdata[63:32],dcache_axi_rdata32[31:16],lsu_req_wdata[15:0]                        }) |
({64{(len2 & (bytesel == 2'b10) & msel0)}} & {dcache_sram_rdata[63:32],                         lsu_req_wdata[15:0],dcache_axi_rdata32[15:0]}) |
({64{(len2 & (bytesel == 2'b00) & msel1)}} & {                         dcache_axi_rdata32[15: 0],lsu_req_wdata[15:0],dcache_sram_rdata[31:0]}) |
({64{(len2 & (bytesel == 2'b10) & msel1)}} & {                         lsu_req_wdata[15: 0],dcache_axi_rdata32[15:0],dcache_sram_rdata[31:0]}) |
({64{(len4 & (bytesel == 2'b00) & msel0)}} & {dcache_sram_rdata[63:32],lsu_req_wdata[31:0]}                                                  ) |
({64{(len4 & (bytesel == 2'b00) & msel1)}} & {lsu_req_wdata[31:0],dcache_sram_rdata[31:0]});
lieat_general_64x64_sram dcache_sram(clock,reset,dcache_sram_cen,dcache_sram_wen,dcache_sram_addr,dcache_sram_data,dcache_sram_rdata);

always@(posedge clock or posedge reset) begin
  if(reset)begin
    for(int i = 0;i < CACHE_SIZE; i = i + 1)begin
      for(int j = 0; j < CACHE_WAY; j = j + 1)begin
        dcache_extend[i][j] <= 0;
      end
    end
  end
  else if(read_hit & state_r[STATE_BUSY_BIT]) begin
      dcache_extend[index][hsel1][3:0] <= 4'b0;
      dcache_extend[index][hsel0][3:0] <= (dcache_extend[index][hsel0][3:0] == 4'b1111) ? 4'b1111 : (dcache_extend[index][hsel0][3:0] + 1);
  end
  else if(write_hit & state_r[STATE_BUSY_BIT]) begin
      dcache_extend[index][hsel1] <= {tag,5'b10000};
      dcache_extend[index][hsel0][3:0] <= dcache_extend[index][hsel0][3:0]+1;
  end
  else if((write_miss | write_miss_wb) & state_r[STATE_BUSY_BIT]) begin
    dcache_extend[index][msel1] <= {tag,5'b10000};
    dcache_extend[index][msel0][3:0] <= dcache_extend[index][msel0][3:0]+1;
  end
  else if(dcache_axi_rvalid & (write_miss_rd | write_miss_wbrd)) begin
    dcache_extend[index][msel1] <= {tag,5'b10000};
    dcache_extend[index][msel0][3:0] <= dcache_extend[index][msel0][3:0]+1;
  end
  else if(dcache_axi_rvalid & (read_miss | read_miss_wb)) begin
    dcache_extend[index][msel1] <= {tag,5'b00000};
    dcache_extend[index][msel0][3:0] <= dcache_extend[index][msel0][3:0]+1;
  end
end
wire test = dcache_axi_awaddr == 32'h0f000000;
endmodule
