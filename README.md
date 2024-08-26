# axi32_npc
%Warning-UNUSEDSIGNAL: /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_ifu_icache.v:26:20: Bits of signal are not used: 'icache_axi_rdata'[63:32]
                                                                                           : ... In instance ysyxSoCFull.asic.cpu.cpu.ifu.icache
   26 |   input  [32*2-1:0]icache_axi_rdata,
      |                    ^~~~~~~~~~~~~~~~
                       /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_ifu.v:106:1: ... note: In file included from lieat_ifu.v
                       /home/lieat/Desktop/ysyx-workbench/npc/vsrc/ysyx_22040000.v:267:1: ... note: In file included from ysyx_22040000.v
                       /home/lieat/Desktop/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:1451:1: ... note: In file included from ysyxSoCFull.v
%Warning-UNUSEDSIGNAL: /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_ifu_icache.v:31:6: Signal is not used: 'r_sh'
                                                                                          : ... In instance ysyxSoCFull.asic.cpu.cpu.ifu.icache
   31 | wire r_sh   = icache_axi_rvalid & icache_axi_rready;
      |      ^~~~
                       /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_ifu.v:106:1: ... note: In file included from lieat_ifu.v
                       /home/lieat/Desktop/ysyx-workbench/npc/vsrc/ysyx_22040000.v:267:1: ... note: In file included from ysyx_22040000.v
                       /home/lieat/Desktop/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:1451:1: ... note: In file included from ysyxSoCFull.v
%Warning-UNUSEDPARAM: /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_ifu_icache.v:49:12: Parameter is not used: 'STATE_RF_BIT'
                                                                                          : ... In instance ysyxSoCFull.asic.cpu.cpu.ifu.icache
   49 | localparam STATE_RF_BIT  = 4;
      |            ^~~~~~~~~~~~
                      /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_ifu.v:106:1: ... note: In file included from lieat_ifu.v
                      /home/lieat/Desktop/ysyx-workbench/npc/vsrc/ysyx_22040000.v:267:1: ... note: In file included from ysyx_22040000.v
                      /home/lieat/Desktop/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:1451:1: ... note: In file included from ysyxSoCFull.v
%Warning-UNUSEDSIGNAL: /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_exu_dcache.v:44:24: Signal is not used: 'dcache_axi_bresp'
                                                                                           : ... In instance ysyxSoCFull.asic.cpu.cpu.exu.dcache
   44 |   input  [1:0]         dcache_axi_bresp
      |                        ^~~~~~~~~~~~~~~~
                       /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_exu.v:270:1: ... note: In file included from lieat_exu.v
                       /home/lieat/Desktop/ysyx-workbench/npc/vsrc/ysyx_22040000.v:341:1: ... note: In file included from ysyx_22040000.v
                       /home/lieat/Desktop/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:1451:1: ... note: In file included from ysyxSoCFull.v
%Warning-UNUSEDPARAM: /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_exu_dcache.v:103:12: Parameter is not used: 'STATE_BUSY_BIT'
                                                                                           : ... In instance ysyxSoCFull.asic.cpu.cpu.exu.dcache
  103 | localparam STATE_BUSY_BIT = 2;
      |            ^~~~~~~~~~~~~~
                      /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_exu.v:270:1: ... note: In file included from lieat_exu.v
                      /home/lieat/Desktop/ysyx-workbench/npc/vsrc/ysyx_22040000.v:341:1: ... note: In file included from ysyx_22040000.v
                      /home/lieat/Desktop/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:1451:1: ... note: In file included from ysyxSoCFull.v
%Warning-UNUSEDSIGNAL: /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_exu_com_alu.v:2:22: Signal is not used: 'clock'
                                                                                           : ... In instance ysyxSoCFull.asic.cpu.cpu.exu.com.alu
    2 |   input              clock,
      |                      ^~~~~
                       /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_exu_com.v:179:1: ... note: In file included from lieat_exu_com.v
                       /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_exu.v:96:1: ... note: In file included from lieat_exu.v
                       /home/lieat/Desktop/ysyx-workbench/npc/vsrc/ysyx_22040000.v:341:1: ... note: In file included from ysyx_22040000.v
                       /home/lieat/Desktop/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:1451:1: ... note: In file included from ysyxSoCFull.v
%Warning-UNUSEDSIGNAL: /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_exu_com_alu.v:3:22: Signal is not used: 'reset'
                                                                                           : ... In instance ysyxSoCFull.asic.cpu.cpu.exu.com.alu
    3 |   input              reset,
      |                      ^~~~~
                       /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_exu_com.v:179:1: ... note: In file included from lieat_exu_com.v
                       /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_exu.v:96:1: ... note: In file included from lieat_exu.v
                       /home/lieat/Desktop/ysyx-workbench/npc/vsrc/ysyx_22040000.v:341:1: ... note: In file included from ysyx_22040000.v
                       /home/lieat/Desktop/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:1451:1: ... note: In file included from ysyxSoCFull.v
%Warning-BLKSEQ: /home/lieat/Desktop/ysyx-workbench/ysyxSoC/perip/uart16550/rtl/uart_top_apb.v:52:32: Blocking assignment '=' in sequential logic proce
