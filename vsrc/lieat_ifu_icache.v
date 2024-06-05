module lieat_ifu_icache # (
  parameter CACHE_WAY  = 2,//cache has 2 ways: 1KB
  parameter INDEX_LEN  = 6, //each way has 64 blocks
  parameter CACHE_SIZE = 64,
  parameter TAG_WIDTH  = 24,
  parameter OFFSET_LEN = 2 //each block has 8 bytes
)(
  input              clk,
  input              rstn,

  input              flush_req,
  input              fencei_req,

  input              ifetch_req_valid,
  output             ifetch_req_ready,
  input  [`XLEN-1:0] ifetch_req_pc,

  output             ifetch_rsp_valid,
  input              ifetch_rsp_ready,
  output [`XLEN-1:0] ifetch_rsp_inst,

  output [`XLEN-1:0] icache_axi_araddr,
  output             icache_axi_arvalid,
  input              icache_axi_arready,

  input  [`XLEN-1:0] icache_axi_rdata,
  input              icache_axi_rvalid,
  output             icache_axi_rready
);
// ================================================================================================================================================
// STATE CONTROL
// ================================================================================================================================================
wire ifetch_rsp_sh = ifetch_rsp_valid & ifetch_rsp_ready;
reg [3:0] state_r;
reg [3:0] state_nxt;
localparam STATE_IDLE      = 4'b0001;
localparam STATE_VALID     = 4'b0010;
localparam STATE_CLEAN     = 4'b0100;
localparam STATE_BUSY      = 4'b1000;
localparam STATE_IDLE_BIT  = 0;
localparam STATE_VALID_BIT = 1;
localparam STATE_CLEAN_BIT = 2;
localparam STATE_BUSY_BIT  = 3;

always @(*) begin
  case(state_r)
    STATE_IDLE: state_nxt = flush_req                ? STATE_IDLE  :
                            ifetch_rsp_sh            ? STATE_IDLE  :
                            (hit & ifetch_req_valid) ? STATE_VALID :
                            icache_axi_rvalid        ? STATE_VALID :
                            icache_axi_arvalid       ? STATE_BUSY  : STATE_IDLE;
    STATE_BUSY: state_nxt = flush_req                ? STATE_CLEAN : 
                            ifetch_rsp_sh            ? STATE_IDLE  :
                            icache_axi_rvalid        ? STATE_VALID : STATE_BUSY;//here need change
    STATE_CLEAN:state_nxt = icache_axi_rvalid        ? STATE_IDLE  : STATE_CLEAN;
    STATE_VALID:state_nxt = flush_req                ? STATE_IDLE  : 
                            ifetch_rsp_sh            ? STATE_IDLE  : STATE_VALID;
    default:state_nxt     = STATE_IDLE;
  endcase
end

lieat_general_dffrd #(
  .DW(4),
  .DEFAULT(STATE_IDLE)
) icache_state(clk,rstn,state_nxt,state_r);
// ================================================================================================================================================
// CHANNEL: INTERACTIVE WITH IFETCH
// ================================================================================================================================================
assign ifetch_rsp_valid = (state_r[STATE_BUSY_BIT] & icache_axi_rvalid & ~flush_req) |
                          (state_r[STATE_VALID_BIT])                                 | 
                          (hit & ifetch_req_valid);
assign ifetch_req_ready = ((state_r[STATE_IDLE_BIT]) | ifetch_rsp_sh) & (hit | icache_axi_arready);
assign ifetch_rsp_inst  = (hit_sel0)          ? cache_memory[index][0] :
                          (hit_sel1)          ? cache_memory[index][1] :
                          (icache_axi_rvalid) ? icache_axi_rdata       : 32'h0;
// ================================================================================================================================================
// CHANNEL: INTERACTIVE WITH DRAM
// ================================================================================================================================================
assign icache_axi_arvalid = miss & ifetch_req_valid & (~flush_req);
assign icache_axi_araddr  = (icache_axi_arvalid) ? ifetch_req_pc : 32'h0;
assign icache_axi_rready  = 1'b1;
// ================================================================================================================================================
// CACHE MODULE
// ================================================================================================================================================
wire [TAG_WIDTH-1:0] tag      = ifetch_req_pc[`XLEN-1:OFFSET_LEN+INDEX_LEN];
wire [INDEX_LEN-1:0] index    = ifetch_req_pc[OFFSET_LEN+INDEX_LEN-1:OFFSET_LEN];

reg [`XLEN-1:0]     cache_memory       [CACHE_SIZE-1:0][CACHE_WAY-1:0];
reg [TAG_WIDTH+4:0] cache_tags_lru_vld [CACHE_SIZE-1:0][CACHE_WAY-1:0];;//TAG_WIDTH + VALID_BIT1 + LRU_BIT 4

wire hit_sel0 = (cache_tags_lru_vld[index][0][TAG_WIDTH+4:4] == {tag,1'b1});
wire hit_sel1 = (cache_tags_lru_vld[index][1][TAG_WIDTH+4:4] == {tag,1'b1});
wire hit  = hit_sel0 | hit_sel1;
wire miss_sel1 = cache_tags_lru_vld[index][0][3:0] < cache_tags_lru_vld[index][1][3:0];
wire miss = ~hit;

always@(posedge clk or negedge rstn) begin
  if(rstn == 1'b0)begin
    for(int i = 0;i < CACHE_SIZE; i = i + 1)begin
      for(int j = 0; j < CACHE_WAY; j = j + 1)begin
        cache_memory[i][j] <= 0;
        cache_tags_lru_vld[i][j] <= 0;
      end
    end
  end
  else if(fencei_req) begin
    for(int i = 0;i < CACHE_SIZE; i = i + 1)begin
      for(int j = 0; j < CACHE_WAY; j = j + 1)begin
        cache_memory[i][j] <= 0;
        cache_tags_lru_vld[i][j] <= 0;
      end
    end
  end
  else if(hit & ifetch_req_valid) begin
    cache_tags_lru_vld[index][hit_sel1][3:0] <= 4'b0;
    cache_tags_lru_vld[index][~hit_sel1][3:0] <= (cache_tags_lru_vld[index][~hit_sel1][3:0] == 4'b1111) ? 4'b1111 : (cache_tags_lru_vld[index][~hit_sel1][3:0] + 1);
  end
  else if(icache_axi_rvalid & ~state_r[STATE_CLEAN_BIT] & ~flush_req)begin
    cache_memory[index][miss_sel1] <= icache_axi_rdata;
    cache_tags_lru_vld[index][miss_sel1] <= {tag,5'b10000};
    cache_tags_lru_vld[index][~miss_sel1][3:0] <= cache_tags_lru_vld[index][~miss_sel1][3:0]+1;
  end
end

endmodule
