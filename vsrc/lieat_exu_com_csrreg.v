module lieat_exu_com_csrreg(
  input                 clk,
  input                 rstn,

  input                 csr_ena,
  input                 csr_write,
  input                 csr_read,
  input  [11:0]         csr_idx,
  input  [`XLEN-1:0]    csr_wdata,
  output [`XLEN-1:0]    csr_rdata,
  input  [11:0]         csr_idx2,
  input  [`XLEN-1:0]    csr_wdata2,

  input                 ifu_csr_ren,
  input  [11:0]         ifu_csr_idx,
  output [`XLEN-1:0]    ifu_csr_rdata
);
/*
wire             sel_ustatus = (csr_idx == 12'h000);
wire             ustatus_wen = sel_ustatus & csr_wen;
wire             ustatus_ren = sel_ustatus & csr_ren;
wire [`XLEN-1:0] csr_ustatus;

wire             sel_mie     = (csr_idx == 12'h304);
wire             mie_wen     = sel_mie & csr_wen;
wire             mie_ren     = sel_mie & csr_ren;
wire [`XLEN-1:0] csr_mtvec;

wire             sel_mip     = (csr_idx == 12'h344);
wire             mip_wen     = sel_mip & csr_wen;
wire             mip_ren     = sel_mip & csr_ren;
wire [`XLEN-1:0] csr_mtvec;

wire             sel_mscratch= (csr_idx == 12'h340);
wire             mscratch_wen= sel_mscratch & csr_wen;
wire             mscratch_ren= sel_mscratch & csr_ren;
wire [`XLEN-1:0] csr_mtvec;

wire             sel_mbadaddr= (csr_idx == 12'h343);
wire             mbadaddr_wen= sel_mbadaddr & csr_wen;
wire             mbadaddr_ren= sel_mbadaddr & csr_ren;
wire [`XLEN-1:0] csr_mtvec;

wire sel_misa = (csr_idx == 12'h301);
wire [`E203_XLEN-1:0] csr_misa = {
    2'b1
   ,4'b0 //WIRI
   ,1'b0 //              25 Z Reserved
   ,1'b0 //              24 Y Reserved
   ,1'b0 //              23 X Non-standard extensions present
   ,1'b0 //              22 W Reserved
   ,1'b0 //              21 V Tentatively reserved for Vector extension 20 U User mode implemented
   ,1'b0 //              20 U User mode implemented
   ,1'b0 //              19 T Tentatively reserved for Transactional Memory extension
   ,1'b0 //              18 S Supervisor mode implemented
   ,1'b0 //              17 R Reserved
   ,1'b0 //              16 Q Quad-precision floating-point extension
   ,1'b0 //              15 P Tentatively reserved for Packed-SIMD extension
   ,1'b0 //              14 O Reserved
   ,1'b0 //              13 N User-level interrupts supported
   ,1'b1 // 12 M Integer Multiply/Divide extension
   ,1'b0 //              11 L Tentatively reserved for Decimal Floating-Point extension
   ,1'b0 //              10 K Reserved
   ,1'b0 //              9 J Reserved
   `ifdef E203_RFREG_NUM_IS_32
   ,1'b1 // 8 I RV32I/64I/128I base ISA
   `else
   ,1'b0
   `endif
   ,1'b0 //              7 H Hypervisor mode implemented
   ,1'b0 //              6 G Additional standard extensions present
  `ifndef E203_HAS_FPU//{
   ,1'b0 //              5 F Single-precision floating-point extension
  `endif//
   `ifdef E203_RFREG_NUM_IS_32
   ,1'b0 //              4 E RV32E base ISA
   `else
   ,1'b1 //              
   `endif
  `ifndef E203_HAS_FPU//{
   ,1'b0 //              3 D Double-precision floating-point extension
  `endif//
   ,1'b1 // 2 C Compressed extension
   ,1'b0 //              1 B Tentatively reserved for Bit operations extension
  `ifdef E203_SUPPORT_AMO//{
   ,1'b1 //              0 A Atomic extension
  `endif//E203_SUPPORT_AMO}
  `ifndef E203_SUPPORT_AMO//{
   ,1'b0 //              0 A Atomic extension
  `endif//}
                           };
wire sel_dcsr     = (csr_idx == 12'h7b0);
wire sel_dpc      = (csr_idx == 12'h7b1);
wire sel_dscratch = (csr_idx == 12'h7b2);                           
wire sel_mcycle    = (csr_idx == 12'hB00);
wire sel_mcycleh   = (csr_idx == 12'hB80);
wire sel_minstret  = (csr_idx == 12'hB02);
wire sel_minstreth = (csr_idx == 12'hB82);
wire sel_counterstop = (csr_idx == 12'hBFF);
wire sel_mcgstop = (csr_idx == 12'hBFE);
wire sel_itcmnohold = (csr_idx == 12'hBFD);
wire sel_mdvnob2b = (csr_idx == 12'hBF0);

*/
wire csr_wen = csr_ena & (~csr_ilgl) & csr_write;
wire csr_ren = csr_ena & (~csr_ilgl) & csr_read;
wire csr_ilgl = 1'b0;

//0x300 MRW mstatus Machine status register.
wire             sel_mstatus = (csr_idx == 12'h300);
wire             sel_mstatus2= (csr_idx2 == 12'h300);
wire             mstatus_wen = (sel_mstatus | sel_mstatus2) & csr_wen;
wire             mstatus_ren = sel_mstatus & csr_ren;
wire [`XLEN-1:0] mstatus_wdata = sel_mstatus2 ? csr_wdata2 : csr_wdata;
wire [`XLEN-1:0] csr_mstatus;
//0x305 MRW mtvec Machine trap-handler base address.
wire             sel_mtvec   = (csr_idx == 12'h305);
wire             sel_mtvec2  = (csr_idx2 == 12'h305);
wire             mtvec_wen   = (sel_mtvec | sel_mtvec2) & csr_wen;
wire             mtvec_ren   = sel_mtvec & csr_ren;
wire             mtvec_ifren = ifu_csr_ren & (ifu_csr_idx == 12'h305);
wire [`XLEN-1:0] mtvec_wdata = sel_mtvec2 ? csr_wdata2 : csr_wdata;
wire [`XLEN-1:0] csr_mtvec;
//0x341 MRW mepc Machine exception program counter.
wire             sel_mepc    = (csr_idx == 12'h341);
wire             sel_mepc2   = (csr_idx2 == 12'h341);
wire             mepc_wen    = (sel_mepc | sel_mepc2) & csr_wen;
wire             mepc_ren    = sel_mepc & csr_ren;
wire             mepc_ifren  = ifu_csr_ren & (ifu_csr_idx == 12'h341);
wire [`XLEN-1:0] mepc_wdata  = sel_mepc2 ? csr_wdata2 : csr_wdata;
wire [`XLEN-1:0] csr_mepc;
//0x342 MRW mcause Machine trap cause.
wire             sel_mcause  = (csr_idx == 12'h342);
wire             sel_mcause2 = (csr_idx2 == 12'h342);
wire             mcause_wen  = (sel_mcause | sel_mcause2) & csr_wen;
wire             mcause_ren  = sel_mcause & csr_ren;
wire [`XLEN-1:0] mcause_wdata= sel_mcause2 ? csr_wdata2 : csr_wdata;
wire [`XLEN-1:0] csr_mcause;

lieat_general_dfflr #(32) mstatus_dff(clk,rstn,mstatus_wen,mstatus_wdata,csr_mstatus);
lieat_general_dfflr #(32) mtvec_dff(clk,rstn,mtvec_wen,mtvec_wdata,csr_mtvec);
lieat_general_dfflr #(32) mepc_dff(clk,rstn,mepc_wen,mepc_wdata,csr_mepc);
lieat_general_dfflr #(32) mcause_dff(clk,rstn,mcause_wen,mcause_wdata,csr_mcause);

assign csr_rdata = ({`XLEN{mstatus_ren}} & csr_mstatus) |
                   ({`XLEN{mtvec_ren  }} & csr_mtvec  ) |
                   ({`XLEN{mepc_ren   }} & csr_mepc   ) |
                   ({`XLEN{mcause_ren }} & csr_mcause ) ;
assign ifu_csr_rdata = ({`XLEN{mepc_ifren}} & csr_mepc) | ({`XLEN{mtvec_ifren}} & csr_mtvec);

import "DPI-C" function void etrace(input int csr_mstatus,input int csr_mtvec, input int csr_mepc, input int csr_mcause);
always @(posedge clk or negedge rstn) begin
  if(csr_ena)etrace(csr_mstatus,csr_mtvec,csr_mepc,csr_mcause);
end

endmodule
