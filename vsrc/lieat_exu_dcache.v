module lieat_exu_dcache #(
  parameter CACHE_WAY = 2,
  parameter INDEX_LEN = 6,//cache has 2 ways: 1KB
  parameter CACHE_SIZE = 64,//each way has 64 blocks
  parameter TAG_WIDTH  = 24,
  parameter OFFSET_LEN = 2//each block has 4 bytes
)(
  input                    clk,
  input                    rstn,

  input                    lsu_req_valid,
  output reg               lsu_req_ready,
  input                    lsu_req_ren,
  input                    lsu_req_wen,
  input  [`XLEN-1:0]       lsu_req_addr,
  input  [2:0]             lsu_req_flag,
  input  [`XLEN-1:0]       lsu_req_wdata,
  output                   lsu_rsp_valid,
  input                    lsu_rsp_ready,
  output [`XLEN-1:0]       lsu_rsp_rdata,
  input                    lsu_req_fencei,
  //AR channel
  output                   dcache_axi_arvalid,
  input                    dcache_axi_arready,
  output [`XLEN-1:0]       dcache_axi_araddr,
  output [2:0]             dcache_axi_arsize,
  //R channel
  input                    dcache_axi_rvalid,
  output                   dcache_axi_rready,
  input  [`XLEN-1:0]       dcache_axi_rdata,
  //AW channel
  output                   dcache_axi_awvalid,
  input                    dcache_axi_awready,
  output [`XLEN-1:0]       dcache_axi_awaddr,
  output [2:0]             dcache_axi_awsize,
  //W channel
  output                   dcache_axi_wvalid,
  input                    dcache_axi_wready,
  output [`XLEN-1:0]       dcache_axi_wdata,
  //B channel
  input                    dcache_axi_bvalid,
  output                   dcache_axi_bready,
  input  [1:0]             dcache_axi_bresp
);
// ================================================================================================================================================
// FENCEI
// ================================================================================================================================================
wire [INDEX_LEN:0] count;
wire [INDEX_LEN:0] count_nxt = (lsu_req_sh & lsu_req_fencei) ? 7'b0000000 : (count+1);
wire count_ena = ((state_r == STATE_FENCEI) & (dcache_axi_bvalid | sync_clean)) | (lsu_req_sh & lsu_req_fencei);
wire count_over = (count == 7'b1111111);
lieat_general_dfflr #(7) sync_count_dff(clk,rstn,count_ena,count_nxt,count);

wire sync_clean     = (cache_tags_lru_vld[count[6:1]][count[0]][4] == 1'b0);
wire sync_valid;
wire sync_valid_set = count_ena;
wire sync_valid_clr = (sync_valid & dcache_axi_awvalid & dcache_axi_awready);
wire sync_valid_ena = sync_valid_set | sync_valid_clr;
wire sync_valid_nxt = sync_valid_set | ~sync_valid_clr;
lieat_general_dfflr #(1) sync_valid_dff(clk,rstn,sync_valid_ena,sync_valid_nxt,sync_valid);
// ================================================================================================================================================
// CHANNEL: INTERACTIVE WITH LSU
// ================================================================================================================================================
wire unused_ok = &{dcache_axi_bresp};
wire lsu_req_sh = lsu_req_valid & lsu_req_ready;
wire lsu_rsp_sh = lsu_rsp_valid & lsu_rsp_ready;

reg [5:0]state_r;
reg [5:0]state_nxt;
localparam STATE_IDLE  = 6'b000001;
localparam STATE_VALID = 6'b000010;
localparam STATE_RWING = 6'b000100;
localparam STATE_RING  = 6'b001000;
localparam STATE_WING  = 6'b010000;
localparam STATE_FENCEI= 6'b100000;
localparam STATE_IDLE_BIT  = 0;
localparam STATE_VALID_BIT = 1;
localparam STATE_RWING_BIT = 2;
localparam STATE_RING_BIT  = 3;
localparam STATE_WING_BIT  = 4;
localparam STATE_FENCEI_BIT= 5;
always @(*) begin
  case(state_r)
    STATE_IDLE: state_nxt = lsu_rsp_sh                                ? STATE_IDLE  :
                            (lsu_req_sh & lsu_req_fencei)             ? STATE_FENCEI:
                            dcache_axi_nondaxi                        ? STATE_VALID : 
                            (dcache_axi_arvalid & dcache_axi_awvalid) ? STATE_RWING : 
                            dcache_axi_arvalid                        ? STATE_RING  :
                            dcache_axi_awvalid                        ? STATE_WING  : STATE_IDLE;
    STATE_VALID:state_nxt = lsu_rsp_sh                                ? STATE_IDLE  : STATE_VALID;
    STATE_RWING:state_nxt = lsu_rsp_sh                                ? STATE_IDLE  : 
                            (dcache_axi_bvalid & dcache_axi_rvalid)   ? STATE_VALID : 
                            dcache_axi_bvalid                         ? STATE_RING  :
                            dcache_axi_rvalid                         ? STATE_WING  : STATE_RWING; 
    STATE_RING: state_nxt = lsu_rsp_sh                                ? STATE_IDLE  : 
                            dcache_axi_rvalid                         ? STATE_VALID : STATE_RING;
    STATE_WING: state_nxt = lsu_rsp_sh                                ? STATE_IDLE  : 
                            dcache_axi_bvalid                         ? STATE_VALID : STATE_WING;
    STATE_FENCEI:state_nxt = lsu_rsp_sh                               ? STATE_IDLE  :
                             (count_over & dcache_axi_bvalid)         ? STATE_VALID : STATE_FENCEI;
    default: state_nxt = STATE_IDLE;
  endcase
end
lieat_general_dffrd #(
  .DW(6),
  .DEFAULT(STATE_IDLE)
) dcache_state(clk,rstn,state_nxt,state_r);
// ================================================================================================================================================
// CONTROL
// ================================================================================================================================================
wire [`XLEN-1:0] test = cache_memory[18][1];
wire [`XLEN-1:0] test1 = cache_memory[39][1];
wire [TAG_WIDTH-1:0] test1_tag = cache_tags_lru_vld[39][1][TAG_WIDTH+4:5];
wire unused_ok = &{test,test1,test1_tag};
wire addr_inside = (lsu_req_addr[31:27] == 5'b10000); //0x80000000~0x87ffffff
wire hit0 = addr_inside & (cache_tags_lru_vld[index][0][TAG_WIDTH+4:5] == tag);
wire hit1 = addr_inside & (cache_tags_lru_vld[index][1][TAG_WIDTH+4:5] == tag);
wire hit = hit0 | hit1;

wire miss = addr_inside & (~hit);
wire lru0_clean = lru_sel0 & ~cache_tags_lru_vld[index][0][4];
wire lru1_clean = lru_sel1 & ~cache_tags_lru_vld[index][1][4];
wire lru0_dirty = lru_sel0 & cache_tags_lru_vld[index][0][4];
wire lru1_dirty = lru_sel1 & cache_tags_lru_vld[index][1][4];

wire lru_sel0 = (cache_tags_lru_vld[index][0][3:0] > cache_tags_lru_vld[index][1][3:0]);
wire lru_sel1 = ~lru_sel0;

wire read_hit              = lsu_req_sh & lsu_req_ren & hit;
wire read_miss_need_renew  = read_miss & (lru0_dirty | lru1_dirty);
//wire read_miss_nond_renew  = read_miss & (lru0_clean | lru1_clean);
wire write_miss            = lsu_req_sh & lsu_req_wen & miss;

wire read_outaddr          = lsu_req_sh & lsu_req_ren & ~addr_inside;
wire write_outaddr         = lsu_req_sh & lsu_req_wen & ~addr_inside;
wire read_hit              = lsu_req_sh & lsu_req_ren & hit;
wire read_miss             = lsu_req_sh & lsu_req_ren & miss;
wire write_hit             = lsu_req_sh & lsu_req_wen & hit;
wire write_miss_need_renew = write_miss & (lru0_dirty | lru1_dirty);
wire write_miss_nond_renew = write_miss & (lru0_clean | lru1_clean);
wire write_miss_need_read  = write_miss & (dcache_len[0] | dcache_len[1]);
wire write_miss_nond_read  = write_miss & dcache_len[2];

wire dcache_axi_allready   = (dcache_axi_arready & dcache_axi_awready & dcache_axi_wready);
wire dcache_axi_nondaxi    = write_hit | read_hit | (write_miss_nond_renew & write_miss_nond_read);
// ================================================================================================================================================
// CHANNEL: INTERACTIVE WITH LSU
// ================================================================================================================================================
assign lsu_rsp_valid = dcache_axi_nondaxi                                                  | 
                       (state_r[STATE_VALID_BIT])                                          | 
                       (state_r[STATE_RING_BIT ]  & dcache_axi_rvalid)                     |
                       (state_r[STATE_RWING_BIT]  & dcache_axi_bvalid & dcache_axi_rvalid) |
                       (state_r[STATE_WING_BIT ]  & dcache_axi_bvalid)                     |
                       (state_r[STATE_FENCEI_BIT] & count_over & dcache_axi_bvalid);
assign lsu_req_ready = (state_r[STATE_IDLE_BIT]) & (dcache_axi_allready); 

wire [31:0] sel_rdata = hit0              ? cache_memory[index][0] :
                        hit1              ? cache_memory[index][1] :
                        dcache_axi_rvalid ? dcache_axi_rdata       : 32'h0;
assign lsu_rsp_rdata = ({`XLEN{(lsu_req_flag == 3'b010)                     }} & sel_rdata               )               |
                       ({`XLEN{(lsu_req_flag == 3'b101) & (bytesel == 2'b00)}} & {16'b0,sel_rdata[15: 0]})               | 
                       ({`XLEN{(lsu_req_flag == 3'b101) & (bytesel == 2'b10)}} & {16'b0,sel_rdata[31:16]})               |
                       ({`XLEN{(lsu_req_flag == 3'b001) & (bytesel == 2'b00)}} & {{16{sel_rdata[15]}},sel_rdata[15: 0]}) | 
                       ({`XLEN{(lsu_req_flag == 3'b001) & (bytesel == 2'b10)}} & {{16{sel_rdata[31]}},sel_rdata[31:16]}) |
                       ({`XLEN{(lsu_req_flag == 3'b100) & (bytesel == 2'b00)}} & {24'b0,sel_rdata[ 7: 0]})               |
                       ({`XLEN{(lsu_req_flag == 3'b100) & (bytesel == 2'b01)}} & {24'b0,sel_rdata[15: 8]})               |
                       ({`XLEN{(lsu_req_flag == 3'b100) & (bytesel == 2'b10)}} & {24'b0,sel_rdata[23:16]})               |
                       ({`XLEN{(lsu_req_flag == 3'b100) & (bytesel == 2'b11)}} & {24'b0,sel_rdata[31:24]})               | 
                       ({`XLEN{(lsu_req_flag == 3'b000) & (bytesel == 2'b00)}} & {{24{sel_rdata[7]}},sel_rdata[ 7: 0]})  |
                       ({`XLEN{(lsu_req_flag == 3'b000) & (bytesel == 2'b01)}} & {{24{sel_rdata[15]}},sel_rdata[15: 8]}) |
                       ({`XLEN{(lsu_req_flag == 3'b000) & (bytesel == 2'b10)}} & {{24{sel_rdata[23]}},sel_rdata[23:16]}) |
                       ({`XLEN{(lsu_req_flag == 3'b000) & (bytesel == 2'b11)}} & {{24{sel_rdata[31]}},sel_rdata[31:24]});
// ================================================================================================================================================
// CHANNEL: INTERACTIVE WITH DRAM
// ================================================================================================================================================
wire [2:0]  dcache_len   = (lsu_req_flag[1:0] == 2'b00) ? 3'b001 :
                           (lsu_req_flag[1:0] == 2'b01) ? 3'b010 : 
                           (lsu_req_flag[1:0] == 2'b10) ? 3'b100 : 3'b000;

assign dcache_axi_arvalid = read_outaddr | read_miss | write_miss_need_read;
assign dcache_axi_araddr  = read_outaddr         ? {lsu_req_addr[31:2],2'b0} :
                            read_miss            ? {lsu_req_addr[31:2],2'b0} : 
                            write_miss_need_read ? {lsu_req_addr[31:2],2'b0} : 32'h0;
assign dcache_axi_arsize  = 3'b100;

assign dcache_axi_awvalid = write_outaddr | read_miss_need_renew | write_miss_need_renew | (sync_valid & ~sync_clean);
assign dcache_axi_awaddr  = write_outaddr         ? lsu_req_addr             :
                            read_miss_need_renew  ? {cache_tags_lru_vld[index][lru_sel1][TAG_WIDTH+4:5],index,2'b0} :
                            write_miss_need_renew ? {cache_tags_lru_vld[index][lru_sel1][TAG_WIDTH+4:5],index,2'b0} :
                            (sync_valid & ~sync_clean) ? {cache_tags_lru_vld[count[6:1]][count[0]][TAG_WIDTH+4:5],count[6:1],2'b0} : 32'h0;
assign dcache_axi_awsize  = write_outaddr         ? dcache_len               : 
                            read_miss_need_renew  ? 3'b100                   : 
                            write_miss_need_renew ? 3'b100                   : 
                            (sync_valid & ~sync_clean) ? 3'b100                   : 3'b0;
assign dcache_axi_wvalid  = write_outaddr | read_miss_need_renew | write_miss_need_renew | (sync_valid & ~sync_clean);
assign dcache_axi_wdata   = write_outaddr         ? lsu_req_wdata                 :
                            read_miss_need_renew  ? cache_memory[index][lru_sel1] :
                            write_miss_need_renew ? cache_memory[index][lru_sel1] : 
                            (sync_valid & ~sync_clean) ? cache_memory[count[6:1]][count[0]] : 32'h0;
assign dcache_axi_rready  = lsu_rsp_ready;
assign dcache_axi_bready  = lsu_rsp_ready;
// ================================================================================================================================================
// CACHE MODULE
// ================================================================================================================================================
wire [TAG_WIDTH-1:0] tag      = lsu_req_addr[`XLEN-1:OFFSET_LEN+INDEX_LEN];
wire [INDEX_LEN-1:0] index    = lsu_req_addr[OFFSET_LEN+INDEX_LEN-1:OFFSET_LEN];

wire [1:0] bytesel_nxt = lsu_req_addr[OFFSET_LEN-1:0];
wire [1:0] bytesel_r;
wire [1:0] bytesel = lsu_req_sh ? bytesel_nxt : bytesel_r;
lieat_general_dfflr #(2) bytesel_dff(clk,rstn,lsu_req_sh,bytesel_nxt,bytesel_r);

reg [`XLEN-1:0]     cache_memory        [CACHE_SIZE-1:0][CACHE_WAY-1:0];
reg [TAG_WIDTH+4:0] cache_tags_lru_vld  [CACHE_SIZE-1:0][CACHE_WAY-1:0];;//TAG_WIDTH + VALID_BIT1 + LRU_BIT 4

wire read_miss_flag;
wire read_miss_flag_set = read_miss;
wire read_miss_flag_clr = read_miss_flag & dcache_axi_rvalid;
wire read_miss_flag_ena = read_miss_flag_set | read_miss_flag_clr;
wire read_miss_flag_nxt = read_miss_flag_set | ~read_miss_flag_clr;
lieat_general_dfflr #(1) read_miss_flag_dff(clk,rstn,read_miss_flag_ena,read_miss_flag_nxt,read_miss_flag);

wire write_miss_flag;
wire write_miss_flag_set = write_miss_need_read;
wire write_miss_flag_clr = write_miss_flag & dcache_axi_rvalid;
wire write_miss_flag_ena = write_miss_flag_set | write_miss_flag_clr;
wire write_miss_flag_nxt = write_miss_flag_set | ~write_miss_flag_clr;
lieat_general_dfflr #(1) write_miss_flag_dff(clk,rstn,write_miss_flag_ena,write_miss_flag_nxt,write_miss_flag);

always@(posedge clk or negedge rstn) begin
  if(rstn == 1'b0)begin
    for(int i = 0;i < CACHE_SIZE; i = i + 1)begin
      for(int j = 0; j < CACHE_WAY; j = j + 1)begin
        cache_memory[i][j] <= 0;
        cache_tags_lru_vld[i][j] <= 0;
      end
    end
  end
  else if(addr_inside) begin
    if(read_hit) begin
        cache_tags_lru_vld[index][hit1][3:0] <= 4'b0;
        cache_tags_lru_vld[index][hit0][3:0] <= (cache_tags_lru_vld[index][hit0][3:0] == 4'b1111) ? 4'b1111 : (cache_tags_lru_vld[index][hit0][3:0] + 1);
    end
    else if(write_hit) begin
        if(dcache_len[0]) begin
          if(bytesel == 2'b00) cache_memory[index][hit1][7 :0 ] <= lsu_req_wdata[7:0];
          if(bytesel == 2'b01) cache_memory[index][hit1][15:8 ] <= lsu_req_wdata[7:0];
          if(bytesel == 2'b10) cache_memory[index][hit1][23:16] <= lsu_req_wdata[7:0];
          if(bytesel == 2'b11) cache_memory[index][hit1][31:24] <= lsu_req_wdata[7:0];
        end
        if(dcache_len[1]) begin 
          if(bytesel == 2'b00) cache_memory[index][hit1][15:0 ] <= lsu_req_wdata[15:0];
          if(bytesel == 2'b10) cache_memory[index][hit1][31:16] <= lsu_req_wdata[15:0];
        end
        if(dcache_len[2]) cache_memory[index][hit1]             <= lsu_req_wdata;
        cache_tags_lru_vld[index][hit1] <= {tag,5'b10000};
        cache_tags_lru_vld[index][hit0][3:0] <= cache_tags_lru_vld[index][1][3:0]+1;
    end
    else if(write_miss) begin
      if(dcache_len[0]) begin//we should make sure that sram have 0 data
        if(bytesel == 2'b00) cache_memory[index][lru_sel1] <= {24'h0,lsu_req_wdata[7:0]};
        if(bytesel == 2'b01) cache_memory[index][lru_sel1] <= {16'h0,lsu_req_wdata[7:0],8'h0};
        if(bytesel == 2'b10) cache_memory[index][lru_sel1] <= {8'h0,lsu_req_wdata[7:0],16'h0};
        if(bytesel == 2'b11) cache_memory[index][lru_sel1] <= {lsu_req_wdata[7:0],24'h0};
      end
      if(dcache_len[1]) begin 
        if(bytesel == 2'b00) cache_memory[index][lru_sel1] <= {16'h0,lsu_req_wdata[15:0]};
        if(bytesel == 2'b10) cache_memory[index][lru_sel1] <= {lsu_req_wdata[15:0],16'h0};
      end
      if(dcache_len[2]) begin
        cache_memory[index][lru_sel1]      <= lsu_req_wdata;
        cache_tags_lru_vld[index][lru_sel1] <= {tag,5'b10000};
        cache_tags_lru_vld[index][lru_sel0][3:0] <= cache_tags_lru_vld[index][1][3:0]+1;
      end
    end
    else if(read_miss_flag & dcache_axi_rvalid) begin
      cache_memory[index][lru_sel1] <= dcache_axi_rdata;
      cache_tags_lru_vld[index][lru_sel1] <= {tag,5'b00000};
      cache_tags_lru_vld[index][lru_sel0][3:0] <= cache_tags_lru_vld[index][lru_sel0][3:0]+1;
    end
    else if(write_miss_flag & dcache_axi_rvalid) begin
      if(dcache_len[0]) begin
        if(bytesel == 2'b00) cache_memory[index][lru_sel1] <= {dcache_axi_rdata[31:8],cache_memory[index][lru_sel1][7:0]};
        if(bytesel == 2'b01) cache_memory[index][lru_sel1] <= {dcache_axi_rdata[31:16],cache_memory[index][lru_sel1][15:8],dcache_axi_rdata[7:0]};
        if(bytesel == 2'b10) cache_memory[index][lru_sel1] <= {dcache_axi_rdata[31:24],cache_memory[index][lru_sel1][23:16],dcache_axi_rdata[15:0]};
        if(bytesel == 2'b11) cache_memory[index][lru_sel1] <= {cache_memory[index][lru_sel1][31:24],dcache_axi_rdata[23:0]};
      end
      if(dcache_len[1]) begin 
        if(bytesel == 2'b00) cache_memory[index][lru_sel1] <= {dcache_axi_rdata[31:16],cache_memory[index][lru_sel1][15:0]};
        if(bytesel == 2'b10) cache_memory[index][lru_sel1] <= {cache_memory[index][lru_sel1][31:16],dcache_axi_rdata[15:0]};
      end
      cache_tags_lru_vld[index][lru_sel1] <= {tag,5'b10000};
      cache_tags_lru_vld[index][lru_sel0][3:0] <= cache_tags_lru_vld[index][1][3:0]+1;
    end
  end
end
endmodule
