// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_regfile.v:61:30
    extern void difftest_dut_regs(int diff_pc, int z0, int ra, int sp, int gp, int tp, int t0, int t1, int t2, int fp, int s1, int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int s2, int s3, int s4, int s5, int s6, int s7, int s8, int s9, int s10, int a11, int t3, int t4, int t5, int t6);
    // DPI import at /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_regfile.v:66:30
    extern void difftest_dut_sync(int diff_tag, int diff_sync_data);
    // DPI import at /home/lieat/Desktop/ysyx-workbench/npc/vsrc/lieat_regfile.v:67:30
    extern void ebreak(int diff_pc, int diff_halt_ret);
    // DPI import at /home/lieat/Desktop/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/lieat/Desktop/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:4736:30
    extern void mrom_read(int raddr, int* rdata);

#ifdef __cplusplus
}
#endif

#endif  // guard
