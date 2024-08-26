// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VysyxSoCFull___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VysyxSoCFull___024root__trace_chg_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+0,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
        bufp->chgBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
        bufp->chgBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
        bufp->chgBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
        bufp->chgBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+6,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
        bufp->chgCData(oldp+7,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
        bufp->chgBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
        bufp->chgBit(oldp+9,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U))));
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                     >> 2U))));
        bufp->chgBit(oldp+11,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                     >> 1U))));
        bufp->chgBit(oldp+12,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
        bufp->chgSData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
        bufp->chgCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
        bufp->chgCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
        bufp->chgSData(oldp+16,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : 0xffffU) 
                                  & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                        ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                          ? 0U : 0xffffU)) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                         ? 0U : 0xffffU))) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))),16);
        bufp->chgIData(oldp+17,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                  << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
        bufp->chgBit(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
        bufp->chgIData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
        bufp->chgBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgBit(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+23,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
        bufp->chgBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
        bufp->chgIData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
        bufp->chgCData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
        bufp->chgBit(oldp+30,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
        bufp->chgSData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
        bufp->chgCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
        bufp->chgBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
        bufp->chgSData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
        bufp->chgCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
        bufp->chgBit(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
        bufp->chgCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
        bufp->chgSData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
        bufp->chgSData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
        bufp->chgSData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
        bufp->chgSData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
        bufp->chgCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
        bufp->chgCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
        bufp->chgCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
        bufp->chgIData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
        bufp->chgSData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
        bufp->chgSData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
        bufp->chgIData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
        bufp->chgBit(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
        bufp->chgSData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgSData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgWData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                     >> 9U))));
        bufp->chgBit(oldp+58,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                     >> 0xaU))));
        bufp->chgCData(oldp+59,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+60,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                     >> 8U))));
        bufp->chgBit(oldp+61,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                     >> 0xbU))));
        bufp->chgBit(oldp+62,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                     >> 0xcU))));
        bufp->chgBit(oldp+63,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                     >> 0xdU))));
        bufp->chgBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgBit(oldp+67,((1U & (~ (IData)((0U 
                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
        bufp->chgSData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+69,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+70,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgCData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+72,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                              - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                           : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                              - (IData)(1U))))),8);
        bufp->chgCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
        bufp->chgBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
        bufp->chgBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
        bufp->chgBit(oldp+76,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                        >> 1U)))));
        bufp->chgBit(oldp+77,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+79,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 1U))));
        bufp->chgBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
        bufp->chgBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+92,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 4U))));
        bufp->chgBit(oldp+93,((IData)((0x10U != (0x12U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+94,((IData)((0x11U == (0x11U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+95,((IData)((0x14U == (0x14U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+96,((IData)((0x18U == (0x18U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgCData(oldp+97,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                  << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                             << 6U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                << 5U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
        bufp->chgBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+99,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                     >> 1U))));
        bufp->chgBit(oldp+100,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
        bufp->chgBit(oldp+101,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                      >> 2U))));
        bufp->chgBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgBit(oldp+117,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                               [1U] 
                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [2U] 
                                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [3U] 
                                                     | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                        [4U] 
                                                        | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                           [5U] 
                                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                              [6U] 
                                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                 [7U] 
                                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                    [8U] 
                                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                       [9U] 
                                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                          [0xaU] 
                                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                             [0xbU] 
                                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xcU] 
                                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xdU] 
                                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
        bufp->chgCData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgSData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+120,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
        bufp->chgCData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+136,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+137,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+138,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+139,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+140,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        bufp->chgCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U]),3);
        bufp->chgCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]),3);
        bufp->chgCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [2U]),3);
        bufp->chgCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [3U]),3);
        bufp->chgCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [4U]),3);
        bufp->chgCData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [5U]),3);
        bufp->chgCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [6U]),3);
        bufp->chgCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [7U]),3);
        bufp->chgCData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [8U]),3);
        bufp->chgCData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [9U]),3);
        bufp->chgCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xaU]),3);
        bufp->chgCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xbU]),3);
        bufp->chgCData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xcU]),3);
        bufp->chgCData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xdU]),3);
        bufp->chgCData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xeU]),3);
        bufp->chgCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xfU]),3);
        bufp->chgBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgBit(oldp+183,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                      >> 7U))));
        bufp->chgBit(oldp+184,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+185,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
        bufp->chgIData(oldp+186,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                   [3U] << 0x18U) | 
                                  ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                    [2U] << 0x10U) 
                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                       [1U] << 8U) 
                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                      [0U])))),32);
        bufp->chgCData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
        bufp->chgCData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
        bufp->chgCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
        bufp->chgCData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
        bufp->chgBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
        bufp->chgIData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
        bufp->chgIData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
        bufp->chgQData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),64);
        bufp->chgCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),8);
        bufp->chgCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
        bufp->chgIData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+199,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
        bufp->chgBit(oldp+200,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+201,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
        bufp->chgBit(oldp+202,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
        bufp->chgBit(oldp+203,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
        bufp->chgBit(oldp+204,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
        bufp->chgBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
        bufp->chgIData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
        bufp->chgCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
        bufp->chgCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
        bufp->chgBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
        bufp->chgIData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
        bufp->chgCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
        bufp->chgCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
        bufp->chgBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
        bufp->chgSData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
        bufp->chgCData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
        bufp->chgCData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
        bufp->chgCData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
        bufp->chgCData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
        bufp->chgCData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
        bufp->chgCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
        bufp->chgCData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
        bufp->chgCData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
        bufp->chgCData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
        bufp->chgCData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
        bufp->chgCData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
        bufp->chgCData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
        bufp->chgCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
        bufp->chgCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
        bufp->chgCData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
        bufp->chgCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
        bufp->chgCData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
        bufp->chgCData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
        bufp->chgQData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
        bufp->chgBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
        bufp->chgCData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
        bufp->chgCData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
        bufp->chgQData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
        bufp->chgBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
        bufp->chgBit(oldp+241,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U] 
                                         >> 8U)))));
        bufp->chgWData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),73);
        bufp->chgBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
        bufp->chgBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
        bufp->chgCData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
        bufp->chgCData(oldp+248,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
        bufp->chgCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
        bufp->chgQData(oldp+251,((((QData)((IData)(
                                                   (0xffU 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                         ? (IData)(
                                                                   (vlSelf->__VdfgTmp_hf134a362__0 
                                                                    >> 0x38U))
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7))))) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                      ? 
                                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                       ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x30U))
                                                                       : 0U)
                                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6))))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                         ? 
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                          ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x28U))
                                                                          : 0U)
                                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5))))) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                            ? 
                                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                             ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x20U))
                                                                             : 0U)
                                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                            ? 
                                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                             ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x18U))
                                                                             : 0U)
                                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                                          << 0x18U) 
                                                                         | ((0xff0000U 
                                                                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x10U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                                                << 0x10U)) 
                                                                            | ((0xff00U 
                                                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 8U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                                                << 8U)) 
                                                                               | (0xffU 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(vlSelf->__VdfgTmp_hf134a362__0)
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))))))))),64);
        bufp->chgCData(oldp+253,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
        bufp->chgBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
        bufp->chgBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
        bufp->chgCData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
        bufp->chgCData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
        bufp->chgCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
        bufp->chgCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
        bufp->chgCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4),8);
        bufp->chgCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5),8);
        bufp->chgCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6),8);
        bufp->chgCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7),8);
        bufp->chgQData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),64);
        bufp->chgBit(oldp+267,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
        bufp->chgBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
        bufp->chgCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
        bufp->chgQData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),64);
        bufp->chgBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
        bufp->chgBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
        bufp->chgBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
        bufp->chgBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
        bufp->chgBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
        bufp->chgBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
        bufp->chgBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
        bufp->chgBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
        bufp->chgBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
        bufp->chgBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
        bufp->chgBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
        bufp->chgBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
        bufp->chgBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
        bufp->chgBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
        bufp->chgBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
        bufp->chgBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
        bufp->chgBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
        bufp->chgBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
        bufp->chgBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
        bufp->chgBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
        bufp->chgBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
        bufp->chgBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
        bufp->chgBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
        bufp->chgBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
        bufp->chgBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
        bufp->chgBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
        bufp->chgBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
        bufp->chgBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
        bufp->chgBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
        bufp->chgBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
        bufp->chgBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
        bufp->chgBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
        bufp->chgBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
        bufp->chgBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
        bufp->chgCData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
        bufp->chgBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
        bufp->chgBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
        bufp->chgBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
        bufp->chgBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
        bufp->chgCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
        bufp->chgBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
        bufp->chgBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
        bufp->chgBit(oldp+314,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
        bufp->chgBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
        bufp->chgCData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+324,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
        bufp->chgBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
        bufp->chgBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
        bufp->chgBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+328,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
        bufp->chgBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
        bufp->chgBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
        bufp->chgBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+332,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
        bufp->chgBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
        bufp->chgBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
        bufp->chgBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+336,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
        bufp->chgBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
        bufp->chgBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
        bufp->chgBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+340,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
        bufp->chgBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
        bufp->chgBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
        bufp->chgBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+344,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
        bufp->chgBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
        bufp->chgBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
        bufp->chgBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+348,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
        bufp->chgBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
        bufp->chgBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
        bufp->chgBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+352,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
        bufp->chgBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
        bufp->chgBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
        bufp->chgBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+356,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
        bufp->chgBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
        bufp->chgBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
        bufp->chgBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+360,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
        bufp->chgBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
        bufp->chgBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
        bufp->chgBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+364,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
        bufp->chgBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
        bufp->chgBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
        bufp->chgBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+368,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
        bufp->chgBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
        bufp->chgBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
        bufp->chgBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+372,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
        bufp->chgBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
        bufp->chgBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
        bufp->chgBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+376,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
        bufp->chgBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
        bufp->chgBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
        bufp->chgBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+380,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
        bufp->chgBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
        bufp->chgBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
        bufp->chgBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+384,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
        bufp->chgBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
        bufp->chgBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
        bufp->chgBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+388,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
        bufp->chgBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
        bufp->chgBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
        bufp->chgBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+392,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
        bufp->chgBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
        bufp->chgBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
        bufp->chgBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+396,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
        bufp->chgBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
        bufp->chgBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
        bufp->chgBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+400,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
        bufp->chgBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
        bufp->chgBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
        bufp->chgBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+404,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
        bufp->chgBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
        bufp->chgBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
        bufp->chgBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+408,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
        bufp->chgBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
        bufp->chgBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
        bufp->chgBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+412,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
        bufp->chgBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
        bufp->chgBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
        bufp->chgBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+416,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
        bufp->chgBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
        bufp->chgBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
        bufp->chgBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+420,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
        bufp->chgBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
        bufp->chgBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
        bufp->chgBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+424,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
        bufp->chgBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
        bufp->chgBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
        bufp->chgBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+428,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
        bufp->chgBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
        bufp->chgBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
        bufp->chgBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+432,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
        bufp->chgBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
        bufp->chgBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
        bufp->chgBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+436,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
        bufp->chgBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
        bufp->chgBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
        bufp->chgBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+440,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
        bufp->chgBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
        bufp->chgBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
        bufp->chgBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+444,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
        bufp->chgBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
        bufp->chgBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
        bufp->chgBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+448,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
        bufp->chgBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
        bufp->chgBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
        bufp->chgBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
        bufp->chgBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
        bufp->chgBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
        bufp->chgBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
        bufp->chgBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
        bufp->chgBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
        bufp->chgBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
        bufp->chgCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
        bufp->chgCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
        bufp->chgCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
        bufp->chgCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
        bufp->chgCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
        bufp->chgCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
        bufp->chgCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+500,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+501,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+502,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+503,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+504,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgQData(oldp+505,((((QData)((IData)(
                                                   ((1U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))),64);
        bufp->chgCData(oldp+507,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                        | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                << 0x1cU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                   << 0x1aU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                         << 0x16U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                            << 0x14U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                               << 0x12U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                  << 0x10U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                     << 0xeU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                        << 0xcU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                           << 0xaU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                              << 8U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                  << 1U)))))),2);
        bufp->chgBit(oldp+508,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                   << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4))));
        bufp->chgBit(oldp+509,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                          << 0xdU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                             << 0xcU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                << 0xbU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                         << 8U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                               << 6U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                      >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)))));
        bufp->chgBit(oldp+510,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                       >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
        bufp->chgBit(oldp+511,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+512,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+513,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+514,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+515,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+516,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+517,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+518,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+519,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+520,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+521,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+522,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+523,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+524,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+525,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+526,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
        bufp->chgIData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_awaddr),32);
        bufp->chgCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_awsize_dff__DOT__reg_qout),3);
        bufp->chgBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
        bufp->chgQData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),64);
        bufp->chgCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),8);
        bufp->chgBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
        bufp->chgCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
        bufp->chgIData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
        bufp->chgCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
        bufp->chgBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
        bufp->chgIData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout),32);
        bufp->chgBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_arvalid));
        bufp->chgIData(oldp+541,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_outaddr_dff__DOT__reg_qout)
                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout
                                   : (0xfffffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout))),32);
        bufp->chgCData(oldp+542,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_outaddr_dff__DOT__reg_qout)
                                   ? (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                                            >> 6U))
                                   : 2U)),3);
        bufp->chgBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_o_valid));
        bufp->chgIData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout),32);
        bufp->chgBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_o_prdt_taken));
        bufp->chgBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_csr_ren));
        bufp->chgSData(oldp+547,((0x300U | (IData)(vlSelf->__VdfgTmp_h3be0d50b__0))),12);
        bufp->chgIData(oldp+548,((((- (IData)((5U == (IData)(vlSelf->__VdfgTmp_h3be0d50b__0)))) 
                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mtvec_dff__DOT__reg_qout) 
                                  | ((- (IData)((0x41U 
                                                 == (IData)(vlSelf->__VdfgTmp_h3be0d50b__0)))) 
                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mepc_dff__DOT__reg_qout))),32);
        bufp->chgBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_com_valid));
        bufp->chgBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_lsu_valid));
        bufp->chgBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_muldiv_valid));
        bufp->chgBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_muldiv_ready));
        bufp->chgIData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_pc_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_imm),32);
        bufp->chgIData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus),32);
        bufp->chgCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1),5);
        bufp->chgCData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2),5);
        bufp->chgCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd),5);
        bufp->chgBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen));
        bufp->chgIData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_reg_src1),32);
        bufp->chgIData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_reg_src2),32);
        bufp->chgBit(oldp+562,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout))) 
                                | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout) 
                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout))) 
                                   | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout) 
                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout))) 
                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout) 
                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout))))))));
        bufp->chgBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_qout));
        bufp->chgCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_op_dff__DOT__reg_qout),3);
        bufp->chgBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
        bufp->chgIData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_pc_dff__DOT__reg_qout),32);
        bufp->chgCData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout),5);
        bufp->chgIData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout),32);
        bufp->chgBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_lsu_dff__DOT__reg_qout));
        bufp->chgBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_ebreak_dff__DOT__reg_qout));
        bufp->chgBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_en_dff__DOT__reg_qout));
        bufp->chgCData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_index_dff__DOT__reg_qout),5);
        bufp->chgBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_res_dff__DOT__reg_qout));
        bufp->chgBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout));
        bufp->chgIData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_pc_dff__DOT__reg_qout),32);
        bufp->chgBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__com_o_flush));
        bufp->chgBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_o_flush));
        bufp->chgBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__muldiv_o_flush));
        bufp->chgBit(oldp+579,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout))))));
        bufp->chgCData(oldp+580,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                           >> 0xfU))),5);
        bufp->chgIData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                 [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                            >> 0xfU))]),32);
        bufp->chgBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__master_ring_dff__DOT__reg_qout));
        bufp->chgBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_dff__DOT__reg_qout));
        bufp->chgBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_set));
        bufp->chgBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_dff__DOT__reg_s1));
        bufp->chgBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__master_ring_dff__DOT__reg_s1));
        bufp->chgBit(oldp+587,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_muldiv_ready) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_muldiv_valid))));
        bufp->chgBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_valid_dff__DOT__reg_qout));
        bufp->chgBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_wen_dff__DOT__reg_qout));
        bufp->chgIData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_pc_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+591,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_valid_dff__DOT__reg_qout)
                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_data_dff__DOT__reg_qout
                                   : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_valid_dff__DOT__reg_qout)
                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_data_dff__DOT__reg_qout
                                       : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_res_dff__DOT__reg_qout))),32);
        bufp->chgCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_rd_dff__DOT__reg_qout),5);
        bufp->chgBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__alu__DOT__alu_wbck_ebreak_dff__DOT__reg_qout));
        bufp->chgBit(oldp+594,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv_o_valid)))));
        bufp->chgBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rdwen_dff__DOT__reg_qout));
        bufp->chgIData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_pc_dff__DOT__reg_qout),32);
        bufp->chgCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rd_dff__DOT__reg_qout),5);
        bufp->chgBit(oldp+598,((1U & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                          >> 0x1fU) 
                                         | (3U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                                   >> 0x1cU)))))));
        bufp->chgBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv_o_valid));
        bufp->chgBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rdwen_dff__DOT__reg_qout));
        bufp->chgIData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_pc_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+602,((((- (IData)((1U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                                                >> 4U)))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_qout)) 
                                  | (((- (IData)((1U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul_i_signed1) 
                                                     | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                                                        >> 7U))))) 
                                      & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_qout 
                                                 >> 0x20U))) 
                                     | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_quot))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__need_corr)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout
                                             : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout)) 
                                        | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_rem))) 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_o_rem))))),32);
        bufp->chgCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rd_dff__DOT__reg_qout),5);
        bufp->chgBit(oldp+604,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_valid_pre_dff__DOT__reg_qout))));
        bufp->chgBit(oldp+605,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_qout))));
        bufp->chgBit(oldp+606,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                                      >> 4U))));
        bufp->chgBit(oldp+607,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                                      >> 5U))));
        bufp->chgIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout),32);
        bufp->chgCData(oldp+609,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                                        >> 6U))),3);
        bufp->chgBit(oldp+610,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                                      >> 0xbU))));
        bufp->chgIData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src2_dff__DOT__reg_qout),32);
        bufp->chgBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_valid));
        bufp->chgCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_rd_dff__DOT__reg_qout),5);
        bufp->chgBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_rdwen_dff__DOT__reg_qout));
        bufp->chgIData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_pc_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_imm_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_src1_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_src2_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout),32);
        bufp->chgBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_alu));
        bufp->chgBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_bjp));
        bufp->chgBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_csr));
        bufp->chgBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_valid_dff__DOT__reg_qout));
        bufp->chgBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_valid_dff__DOT__reg_qout));
        bufp->chgBit(oldp+625,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                      >> 4U))));
        bufp->chgBit(oldp+626,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                      >> 5U))));
        bufp->chgBit(oldp+627,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                      >> 8U))));
        bufp->chgBit(oldp+628,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                      >> 9U))));
        bufp->chgBit(oldp+629,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                      >> 0xaU))));
        bufp->chgBit(oldp+630,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                      >> 0xbU))));
        bufp->chgBit(oldp+631,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                      >> 0xcU))));
        bufp->chgBit(oldp+632,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                      >> 0xdU))));
        bufp->chgBit(oldp+633,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                      >> 6U))));
        bufp->chgBit(oldp+634,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                      >> 7U))));
        bufp->chgBit(oldp+635,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                      >> 0xeU))));
        bufp->chgIData(oldp+636,(((0x10000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_pc_dff__DOT__reg_qout
                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_src1_dff__DOT__reg_qout)),32);
        bufp->chgIData(oldp+637,(((0x8000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_imm_dff__DOT__reg_qout
                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_src2_dff__DOT__reg_qout)),32);
        bufp->chgIData(oldp+638,((((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_add))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__adder_res)) 
                                  | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_sub))) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__adder_res)) 
                                     | (((- (IData)(
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_alu) 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                                        >> 8U)))) 
                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op1 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op2)) 
                                        | (((- (IData)(
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_alu) 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                                           >> 0xcU)))) 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op1 
                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op2)) 
                                           | (((- (IData)(
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_alu) 
                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                                              >> 0xdU)))) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op1 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op2)) 
                                              | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_srl))) 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__srler_res) 
                                                 | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_sll))) 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__shifter_res) 
                                                    | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_sra))) 
                                                        & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__srler_res 
                                                            & (0xffffffffU 
                                                               >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__shifter_op2))) 
                                                           | ((~ 
                                                               (0xffffffffU 
                                                                >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__shifter_op2))) 
                                                              & (- (IData)(
                                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__shifter_op1 
                                                                            >> 0x1fU)))))) 
                                                       | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_lt))) 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_lt) 
                                                              & (IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__adder_res 
                                                                         >> 0x20U)))) 
                                                          | ((- (IData)(
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_alu) 
                                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                                                            >> 0xeU)))) 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op2))))))))))),32);
        bufp->chgIData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_res_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_data_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_data_dff__DOT__reg_qout),32);
        bufp->chgBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_valid_pre_dff__DOT__reg_qout));
        bufp->chgBit(oldp+643,((0xffffffffU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)));
        bufp->chgBit(oldp+644,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                      >> 0x12U))));
        bufp->chgBit(oldp+645,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                      >> 0x10U))));
        bufp->chgBit(oldp+646,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                      >> 0xfU))));
        bufp->chgBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__alu__DOT__alu_wbck_ebreak_dff__DOT__reg_s1));
        bufp->chgIData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_op1),32);
        bufp->chgIData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_op2),32);
        bufp->chgIData(oldp+650,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_op1 
                                  ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_op2)),32);
        bufp->chgQData(oldp+651,((((QData)((IData)(
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT____VdfgTmp_h2e678767__0) 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_op1 
                                                       >> 0x1fU)))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_op1)))),33);
        bufp->chgQData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_adder_op2_pre),33);
        bufp->chgQData(oldp+655,((0x1ffffffffULL & 
                                  ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_adder_op2_pre
                                    : (1ULL + (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_adder_op2_pre))))),33);
        bufp->chgQData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_adder_res),33);
        bufp->chgBit(oldp+659,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_op1 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_op2))));
        bufp->chgBit(oldp+660,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_adder_res 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_bxx_res));
        bufp->chgBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_req_prdt_en));
        bufp->chgBit(oldp+663,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_req_prdt_en) 
                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                    >> 5U) ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_bxx_res)))));
        bufp->chgIData(oldp+664,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_imm_dff__DOT__reg_qout 
                                  + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_pc_dff__DOT__reg_qout)),32);
        bufp->chgIData(oldp+665,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_pc_dff__DOT__reg_qout)),32);
        bufp->chgIData(oldp+666,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_bxx_res)
                                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_imm_dff__DOT__reg_qout 
                                      + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_pc_dff__DOT__reg_qout)
                                   : ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_pc_dff__DOT__reg_qout))),32);
        bufp->chgCData(oldp+667,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_pc_dff__DOT__reg_qout 
                                           >> 2U))),5);
        bufp->chgIData(oldp+668,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_adder_res)),32);
        bufp->chgBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_data_dff__DOT__reg_s1));
        bufp->chgBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_valid_dff__DOT__reg_s1));
        bufp->chgBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT____Vcellinp__bjp_prdt_en_dff____pinNumber3));
        bufp->chgBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_en_dff__DOT__reg_s1));
        bufp->chgBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_s1));
        bufp->chgBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_index_dff__DOT__reg_s1));
        bufp->chgBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_pc_dff__DOT__reg_s1));
        bufp->chgBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_res_dff__DOT__reg_s1));
        bufp->chgBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_imm_dff__DOT__reg_s1));
        bufp->chgBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_s1));
        bufp->chgBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_pc_dff__DOT__reg_s1));
        bufp->chgBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_rd_dff__DOT__reg_s1));
        bufp->chgBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_res_dff__DOT__reg_s1));
        bufp->chgBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_valid_dff__DOT__reg_s1));
        bufp->chgBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_wen_dff__DOT__reg_s1));
        bufp->chgBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_pc_dff__DOT__reg_s1));
        bufp->chgBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_rd_dff__DOT__reg_s1));
        bufp->chgBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_rdwen_dff__DOT__reg_s1));
        bufp->chgBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_valid_pre_dff__DOT__reg_s1));
        bufp->chgBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_src1_dff__DOT__reg_s1));
        bufp->chgBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_src2_dff__DOT__reg_s1));
        bufp->chgCData(oldp+690,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                           >> 9U))),5);
        bufp->chgSData(oldp+691,((0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                            >> 0xfU))),12);
        bufp->chgIData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_op1),32);
        bufp->chgIData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_op2),32);
        bufp->chgBit(oldp+694,((IData)((0U != (0x30U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)))));
        bufp->chgIData(oldp+695,((((- (IData)((IData)(
                                                      (0U 
                                                       != 
                                                       (0x30U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout))))) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_op1 
                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_op2)) 
                                  | ((- (IData)((1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                                    >> 6U)))) 
                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_op1 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_op2)))),32);
        bufp->chgIData(oldp+696,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_op1 
                                  | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_op2)),32);
        bufp->chgIData(oldp+697,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_op1 
                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_op2)),32);
        bufp->chgSData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx),12);
        bufp->chgIData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_wdata),32);
        bufp->chgIData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_rdata),32);
        bufp->chgSData(oldp+701,(((0x80U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                   ? 0x342U : 0U)),12);
        bufp->chgIData(oldp+702,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                        >> 7U))),32);
        bufp->chgBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_data_dff__DOT__reg_s1));
        bufp->chgBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_valid_dff__DOT__reg_s1));
        bufp->chgBit(oldp+705,((0x300U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx))));
        bufp->chgBit(oldp+706,((0x300U == ((0x80U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                            ? 0x342U
                                            : 0U))));
        bufp->chgBit(oldp+707,((((0x300U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx)) 
                                 | (0x300U == ((0x80U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                                ? 0x342U
                                                : 0U))) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_csr))));
        bufp->chgBit(oldp+708,(((0x300U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_csr))));
        bufp->chgIData(oldp+709,(((0x300U == ((0x80U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                               ? 0x342U
                                               : 0U))
                                   ? (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                            >> 7U))
                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_wdata)),32);
        bufp->chgIData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mstatus_dff__DOT__reg_qout),32);
        bufp->chgBit(oldp+711,((0x305U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx))));
        bufp->chgBit(oldp+712,((0x305U == ((0x80U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                            ? 0x342U
                                            : 0U))));
        bufp->chgBit(oldp+713,((((0x305U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx)) 
                                 | (0x305U == ((0x80U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                                ? 0x342U
                                                : 0U))) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_csr))));
        bufp->chgBit(oldp+714,(((0x305U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_csr))));
        bufp->chgBit(oldp+715,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_csr_ren) 
                                & (5U == (IData)(vlSelf->__VdfgTmp_h3be0d50b__0)))));
        bufp->chgIData(oldp+716,(((0x305U == ((0x80U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                               ? 0x342U
                                               : 0U))
                                   ? (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                            >> 7U))
                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_wdata)),32);
        bufp->chgIData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mtvec_dff__DOT__reg_qout),32);
        bufp->chgBit(oldp+718,((0x341U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx))));
        bufp->chgBit(oldp+719,((0x341U == ((0x80U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                            ? 0x342U
                                            : 0U))));
        bufp->chgBit(oldp+720,((((0x341U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx)) 
                                 | (0x341U == ((0x80U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                                ? 0x342U
                                                : 0U))) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_csr))));
        bufp->chgBit(oldp+721,(((0x341U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_csr))));
        bufp->chgBit(oldp+722,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_csr_ren) 
                                & (0x41U == (IData)(vlSelf->__VdfgTmp_h3be0d50b__0)))));
        bufp->chgIData(oldp+723,(((0x341U == ((0x80U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                               ? 0x342U
                                               : 0U))
                                   ? (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                            >> 7U))
                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_wdata)),32);
        bufp->chgIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mepc_dff__DOT__reg_qout),32);
        bufp->chgBit(oldp+725,((0x342U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx))));
        bufp->chgBit(oldp+726,((0x342U == ((0x80U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                            ? 0x342U
                                            : 0U))));
        bufp->chgBit(oldp+727,((((0x342U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx)) 
                                 | (0x342U == ((0x80U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                                ? 0x342U
                                                : 0U))) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_csr))));
        bufp->chgBit(oldp+728,(((0x342U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_csr))));
        bufp->chgIData(oldp+729,(((0x342U == ((0x80U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                               ? 0x342U
                                               : 0U))
                                   ? (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                            >> 7U))
                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_wdata)),32);
        bufp->chgIData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mcause_dff__DOT__reg_qout),32);
        bufp->chgBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mcause_dff__DOT__reg_s1));
        bufp->chgBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mepc_dff__DOT__reg_s1));
        bufp->chgBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mstatus_dff__DOT__reg_s1));
        bufp->chgBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mtvec_dff__DOT__reg_s1));
        bufp->chgIData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op1),32);
        bufp->chgIData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op2),32);
        bufp->chgBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_add));
        bufp->chgBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_sub));
        bufp->chgBit(oldp+739,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_alu) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                   >> 8U))));
        bufp->chgBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_sll));
        bufp->chgBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_srl));
        bufp->chgBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_sra));
        bufp->chgBit(oldp+743,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_alu) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                   >> 0xcU))));
        bufp->chgBit(oldp+744,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_alu) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                   >> 0xdU))));
        bufp->chgBit(oldp+745,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_alu) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                   >> 6U))));
        bufp->chgBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_sltu));
        bufp->chgBit(oldp+747,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_alu) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                   >> 0xeU))));
        bufp->chgBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__adder_ena));
        bufp->chgBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__adder_sub));
        bufp->chgQData(oldp+750,(((- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__adder_ena))) 
                                  & (((QData)((IData)(
                                                      ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_sltu)) 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op1 
                                                          >> 0x1fU)))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op1))))),33);
        bufp->chgQData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__adder_op2),33);
        bufp->chgQData(oldp+754,((0x1ffffffffULL & 
                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__adder_sub)
                                    ? (1ULL + (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__adder_op2))
                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__adder_op2))),33);
        bufp->chgBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_lt));
        bufp->chgBit(oldp+757,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_lt) 
                                & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__adder_res 
                                           >> 0x20U)))));
        bufp->chgBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__shifter_ena));
        bufp->chgBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__shifter_right));
        bufp->chgIData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__shifter_op1),32);
        bufp->chgCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__shifter_op2),5);
        bufp->chgIData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__shifter_in1),32);
        bufp->chgIData(oldp+763,((0xffffffffU >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__shifter_op2))),32);
        bufp->chgQData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__adder_res),33);
        bufp->chgIData(oldp+766,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_lt) 
                                  & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__adder_res 
                                             >> 0x20U)))),32);
        bufp->chgIData(oldp+767,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op1 
                                  ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op2)),32);
        bufp->chgIData(oldp+768,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op1 
                                  | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op2)),32);
        bufp->chgIData(oldp+769,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op1 
                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op2)),32);
        bufp->chgIData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__shifter_res),32);
        bufp->chgIData(oldp+771,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__srler_res 
                                   & (0xffffffffU >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__shifter_op2))) 
                                  | ((~ (0xffffffffU 
                                         >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__shifter_op2))) 
                                     & (- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__shifter_op1 
                                                   >> 0x1fU)))))),32);
        bufp->chgIData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__srler_res),32);
        bufp->chgBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_sh));
        bufp->chgCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_qout),3);
        bufp->chgCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_qout),4);
        bufp->chgCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_statew_dff__DOT__reg_qout),6);
        bufp->chgCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout),7);
        bufp->chgCData(oldp+778,(((0x7fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout))
                                   ? 0U : (0x7fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout))))),7);
        bufp->chgBit(oldp+779,((0x7fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout))));
        bufp->chgBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_clean));
        bufp->chgBit(oldp+781,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_clean)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_sync_dff__DOT__reg_qout))));
        bufp->chgBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_addr_inside));
        bufp->chgBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_hit0));
        bufp->chgBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_hit1));
        bufp->chgBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_hit));
        bufp->chgBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_miss0));
        bufp->chgBit(oldp+787,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_miss0)))));
        bufp->chgBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_miss));
        bufp->chgBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_clean));
        bufp->chgBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_dirty));
        bufp->chgBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_outaddr));
        bufp->chgBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_hit));
        bufp->chgBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_miss));
        bufp->chgBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_miss_wb));
        bufp->chgBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_outaddr));
        bufp->chgBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_hit));
        bufp->chgBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss));
        bufp->chgBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss_wb));
        bufp->chgBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss_rd));
        bufp->chgBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss_wbrd));
        bufp->chgBit(oldp+801,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_hit) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_hit) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss)))));
        bufp->chgBit(oldp+802,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_outaddr) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_miss) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss_rd)))));
        bufp->chgBit(oldp+803,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_outaddr) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss_wb))));
        bufp->chgBit(oldp+804,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_miss_wb) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss_wbrd))));
        bufp->chgBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel0_dff__DOT__reg_qout));
        bufp->chgBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel1_dff__DOT__reg_qout));
        bufp->chgBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel0_dff__DOT__reg_qout));
        bufp->chgBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel1_dff__DOT__reg_qout));
        bufp->chgBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_outaddr_dff__DOT__reg_qout));
        bufp->chgBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_hit_dff__DOT__reg_qout));
        bufp->chgBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_miss_dff__DOT__reg_qout));
        bufp->chgBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_miss_wb_dff__DOT__reg_qout));
        bufp->chgBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_outaddr_dff__DOT__reg_qout));
        bufp->chgBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_hit_dff__DOT__reg_qout));
        bufp->chgBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_dff__DOT__reg_qout));
        bufp->chgBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_wb_dff__DOT__reg_qout));
        bufp->chgBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_rd_dff__DOT__reg_qout));
        bufp->chgBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_wbrd_dff__DOT__reg_qout));
        bufp->chgBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_idle_dff__DOT__reg_qout));
        bufp->chgBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_read_dff__DOT__reg_qout));
        bufp->chgBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_write_dff__DOT__reg_qout));
        bufp->chgBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wbrd_dff__DOT__reg_qout));
        bufp->chgBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_sync_dff__DOT__reg_qout));
        bufp->chgCData(oldp+824,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout)),2);
        bufp->chgIData(oldp+825,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                  >> 8U)),24);
        bufp->chgCData(oldp+826,((0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                           >> 2U))),6);
        bufp->chgCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_bytesel_dff__DOT__reg_qout),2);
        bufp->chgIData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_tag_dff__DOT__reg_qout),24);
        bufp->chgCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout),6);
        bufp->chgBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len1_dff__DOT__reg_qout));
        bufp->chgBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len2_dff__DOT__reg_qout));
        bufp->chgBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len4_dff__DOT__reg_qout));
        bufp->chgCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_dcache_axi_awsize),3);
        bufp->chgCData(oldp+834,(((1U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hf4e7f781__0)))) 
                                  | ((2U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hf4dbf72a__0)))) 
                                     | ((4U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hf4efd26b__0)))) 
                                        | ((8U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hff018c03__0)))) 
                                           | ((0x10U 
                                               & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hc1630a31__0)))) 
                                              | ((0x20U 
                                                  & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hc1574919__0)))) 
                                                 | ((0x40U 
                                                     & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hf4b829cc__0)))) 
                                                    | ((0x80U 
                                                        & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hf61e5daf__0)))) 
                                                       | ((3U 
                                                           & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hf1fef4c9__0)))) 
                                                          | ((0xcU 
                                                              & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hf1f6d7a3__0)))) 
                                                             | ((0x30U 
                                                                 & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_h3e720f79__0)))) 
                                                                | ((0xc0U 
                                                                    & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hf1db2d1e__0)))) 
                                                                   | ((0xfU 
                                                                       & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hf6e1b24c__0)))) 
                                                                      | (0xf0U 
                                                                         & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hc37d369c__0)))))))))))))))))),8);
        bufp->chgIData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_dcache_axi_awaddr),32);
        bufp->chgIData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_dcache_axi_wdata32),32);
        bufp->chgQData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_dcache_axi_wdata),64);
        bufp->chgCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wstrb_dff__DOT__reg_qout),8);
        bufp->chgIData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_awaddr_dff__DOT__reg_qout),32);
        bufp->chgQData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wdata_dff__DOT__reg_qout),64);
        bufp->chgCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_addr),6);
        bufp->chgQData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_rdata),64);
        bufp->chgQData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__write_hit_sram_data),64);
        bufp->chgBit(oldp+848,((0xf000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_awaddr)));
        bufp->chgBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_awaddr_dff__DOT__reg_s1));
        bufp->chgBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_awsize_dff__DOT__reg_s1));
        bufp->chgBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_idle_dff__DOT__reg_s1));
        bufp->chgBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_read_dff__DOT__reg_s1));
        bufp->chgBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_sync_dff__DOT__reg_s1));
        bufp->chgBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wbrd_dff__DOT__reg_s1));
        bufp->chgBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wdata_dff__DOT__reg_s1));
        bufp->chgBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_write_dff__DOT__reg_s1));
        bufp->chgBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wstrb_dff__DOT__reg_s1));
        bufp->chgBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_bytesel_dff__DOT__reg_s1));
        bufp->chgBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel0_dff__DOT__reg_s1));
        bufp->chgBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel1_dff__DOT__reg_s1));
        bufp->chgBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_s1));
        bufp->chgBit(oldp+862,((IData)((0U == (0xc0U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len1_dff__DOT__reg_s1));
        bufp->chgBit(oldp+864,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                                      >> 6U))));
        bufp->chgBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len2_dff__DOT__reg_s1));
        bufp->chgBit(oldp+866,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                                      >> 7U))));
        bufp->chgBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len4_dff__DOT__reg_s1));
        bufp->chgBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel0_dff__DOT__reg_s1));
        bufp->chgBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel1_dff__DOT__reg_s1));
        bufp->chgBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_hit_dff__DOT__reg_s1));
        bufp->chgBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_miss_dff__DOT__reg_s1));
        bufp->chgBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_miss_wb_dff__DOT__reg_s1));
        bufp->chgBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_outaddr_dff__DOT__reg_s1));
        bufp->chgQData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__0__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__0__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__10__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__10__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__11__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__11__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__12__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__12__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__13__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__13__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__14__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__14__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__15__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__15__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__16__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__16__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__17__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__17__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__18__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__18__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__19__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__19__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__1__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__1__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__20__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__20__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__21__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__21__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__22__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__22__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__23__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__23__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__24__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__24__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__25__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__25__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__26__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__26__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__27__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__27__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__28__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__28__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__29__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__29__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__2__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__2__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__30__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__30__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__31__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__31__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__32__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__32__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__33__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__33__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__34__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__34__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__35__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__35__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__36__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__36__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__37__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__37__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__38__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__38__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__39__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__39__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__3__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__3__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__40__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__40__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__41__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__41__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__42__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__42__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__43__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__43__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__44__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__44__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__45__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__45__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__46__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__46__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__47__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__47__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__48__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__48__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__49__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__49__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__4__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__4__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__50__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__50__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__51__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__51__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__52__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__52__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__53__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__53__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__54__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__54__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__55__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__55__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__56__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__56__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__57__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__57__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__58__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__58__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__59__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__59__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__5__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__5__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__60__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__60__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__61__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__61__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__62__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__62__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__63__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__63__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__6__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__6__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__7__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__7__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__8__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__8__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__9__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__9__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_statew_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_tag_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_hit_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_rd_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_wb_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_wbrd_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_outaddr_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_s1));
        bufp->chgIData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+1079,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_imm 
                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_reg_src1)),32);
        bufp->chgIData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout),32);
        bufp->chgCData(oldp+1081,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                                         >> 6U))),2);
        bufp->chgBit(oldp+1082,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                                       >> 8U))));
        bufp->chgBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_valid_pre_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_valid_pre_clr));
        bufp->chgBit(oldp+1085,((0xffffffffU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout)));
        bufp->chgBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_pc_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rd_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rdwen_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_valid_pre_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src2_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_muldiv_sh));
        bufp->chgBit(oldp+1094,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid) 
                                 & (IData)((0U != (0xf0U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout))))));
        bufp->chgBit(oldp+1095,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_quot) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_rem)))));
        bufp->chgBit(oldp+1096,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))));
        bufp->chgBit(oldp+1097,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))));
        bufp->chgBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid));
        bufp->chgBit(oldp+1099,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout)))));
        bufp->chgBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_req_sh));
        bufp->chgBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul_req_sh));
        bufp->chgBit(oldp+1102,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul_req_sh) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_req_sh))));
        bufp->chgIData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src1_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src2_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout),32);
        bufp->chgBit(oldp+1106,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                                       >> 4U))));
        bufp->chgBit(oldp+1107,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                                       >> 5U))));
        bufp->chgBit(oldp+1108,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                                       >> 6U))));
        bufp->chgBit(oldp+1109,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                                       >> 7U))));
        bufp->chgBit(oldp+1110,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                                       >> 8U))));
        bufp->chgBit(oldp+1111,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                                       >> 9U))));
        bufp->chgBit(oldp+1112,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1113,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1114,((IData)((0U != (0xf0U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1115,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_quot) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_rem))));
        bufp->chgBit(oldp+1116,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul_i_signed1) 
                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                                          >> 7U)))));
        bufp->chgBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_quot));
        bufp->chgBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_rem));
        bufp->chgBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul_i_signed1));
        bufp->chgIData(oldp+1120,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_qout)),32);
        bufp->chgIData(oldp+1121,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_qout 
                                           >> 0x20U))),32);
        bufp->chgBit(oldp+1122,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout) 
                                       >> 5U))));
        bufp->chgBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_i_signed));
        bufp->chgIData(oldp+1124,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__need_corr)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout
                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout)),32);
        bufp->chgIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_o_rem),32);
        bufp->chgBit(oldp+1126,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_lzc_dff__DOT__reg_qout) 
                                       >> 5U))));
        bufp->chgBit(oldp+1127,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
                                       >> 5U))));
        bufp->chgBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid_pre_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid_pre_clr));
        bufp->chgBit(oldp+1130,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_muldiv_sh) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid_pre_clr))));
        bufp->chgBit(oldp+1131,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid_pre_clr)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_muldiv_sh)))));
        bufp->chgBit(oldp+1132,(((0xffffffffU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_lzc_dff__DOT__reg_qout) 
                                    >> 5U))));
        bufp->chgCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout),6);
        bufp->chgCData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__state_nxt),6);
        bufp->chgCData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_diff),6);
        bufp->chgCData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_diff_nxt),6);
        bufp->chgBit(oldp+1137,((0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_divisor__cnt_o))));
        bufp->chgBit(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_big_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1139,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
                                       >> 1U))));
        bufp->chgBit(oldp+1140,(((0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_divisor__cnt_o)) 
                                 & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                            >> 0x1fU)))));
        bufp->chgBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_small_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1142,((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_diff_nxt) 
                                          >> 5U) | 
                                         (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout))))));
        bufp->chgBit(oldp+1143,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hcf4afe7a__0) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_big_dff__DOT__reg_qout))));
        bufp->chgBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_nxt));
        bufp->chgBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__quot_neg_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1147,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_nxt) 
                                    ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_neg)))));
        bufp->chgBit(oldp+1148,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_req_sh) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
                                           >> 2U) & 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_lzc_dff__DOT__reg_qout) 
                                           >> 5U))))));
        bufp->chgBit(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_neg));
        bufp->chgIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__inv1),32);
        bufp->chgIData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__inv2),32);
        bufp->chgIData(oldp+1152,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_nxt)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__inv1
                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src1_dff__DOT__reg_qout)),32);
        bufp->chgIData(oldp+1153,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_neg)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__inv2
                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src2_dff__DOT__reg_qout)),32);
        bufp->chgIData(oldp+1154,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout) 
                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_dividend__cnt_o))),32);
        bufp->chgIData(oldp+1155,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout) 
                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_divisor__cnt_o))),32);
        bufp->chgQData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout),33);
        bufp->chgQData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout),33);
        bufp->chgBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__abs_ena));
        bufp->chgQData(oldp+1161,((0x1ffffffffULL & 
                                   (((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))))) 
                                     & (QData)((IData)(
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_neg)
                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__inv2
                                                         : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src2_dff__DOT__reg_qout)))) 
                                    | (((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
                                                               >> 1U))))) 
                                        & (QData)((IData)(
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout) 
                                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_divisor__cnt_o))))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
                                                                 >> 4U))))) 
                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_plus_d_nxt 
                                             >> 3U)))))),33);
        bufp->chgQData(oldp+1163,((0x1ffffffffULL & 
                                   (((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))))) 
                                     & (QData)((IData)(
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_nxt)
                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__inv1
                                                         : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src1_dff__DOT__reg_qout)))) 
                                    | (((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
                                                               >> 1U))))) 
                                        & (QData)((IData)(
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout) 
                                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_dividend__cnt_o))))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
                                                                 >> 4U))))) 
                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_nxt 
                                             >> 3U)))))),33);
        bufp->chgCData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_lzc_dff__DOT__reg_qout),6);
        bufp->chgCData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_lzc_dff__DOT__reg_qout),6);
        bufp->chgCData(oldp+1167,((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                                    << 5U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_divisor__cnt_o))),6);
        bufp->chgCData(oldp+1168,((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout)) 
                                    << 5U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_dividend__cnt_o))),6);
        bufp->chgCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__shifter_num),5);
        bufp->chgIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__shifter_din),32);
        bufp->chgBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__shifter_extend_msb));
        bufp->chgIData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__shifter_res_s0),32);
        bufp->chgIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__shifter_res_s1),32);
        bufp->chgIData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__shifter_res_s2),32);
        bufp->chgIData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__shifter_res_s3),32);
        bufp->chgBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__special_divisor_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1177,(((0U == (7U & (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                       >> 0x1cU)))) 
                                 | (4U == (7U & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                         >> 0x1cU)))))));
        bufp->chgCData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg1_dff__DOT__reg_qout),5);
        bufp->chgCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg0_dff__DOT__reg_qout),3);
        bufp->chgCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos1_dff__DOT__reg_qout),2);
        bufp->chgCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos2_dff__DOT__reg_qout),5);
        bufp->chgCData(oldp+1182,(((0xdU & (- (IData)(
                                                      (0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                   >> 0x1cU))))))) 
                                   | ((0xfU & (- (IData)(
                                                         (1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                      >> 0x1cU))))))) 
                                      | ((0x10U & (- (IData)(
                                                             (2U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                          >> 0x1cU))))))) 
                                         | ((0x12U 
                                             & (- (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                       >> 0x1cU))))))) 
                                            | ((0x13U 
                                                & (- (IData)(
                                                             (4U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                          >> 0x1cU))))))) 
                                               | ((0x14U 
                                                   & (- (IData)(
                                                                (5U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                             >> 0x1cU))))))) 
                                                  | ((0x16U 
                                                      & (- (IData)(
                                                                   (6U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1cU))))))) 
                                                     | (0x18U 
                                                        & (- (IData)(
                                                                     (7U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1cU))))))))))))))),5);
        bufp->chgCData(oldp+1183,(((2U & (- (IData)(
                                                    (0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                 >> 0x1cU))))))) 
                                   | ((3U & (- (IData)(
                                                       (1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                    >> 0x1cU))))))) 
                                      | ((3U & (- (IData)(
                                                          (2U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                       >> 0x1cU))))))) 
                                         | ((3U & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                          >> 0x1cU))))))) 
                                            | ((3U 
                                                & (- (IData)(
                                                             (4U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                          >> 0x1cU))))))) 
                                               | (4U 
                                                  & ((- (IData)(
                                                                (5U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                             >> 0x1cU)))))) 
                                                     | ((- (IData)(
                                                                   (6U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1cU)))))) 
                                                        | (- (IData)(
                                                                     (7U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1cU))))))))))))))),3);
        bufp->chgCData(oldp+1184,(((2U & ((- (IData)(
                                                     (0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                  >> 0x1cU)))))) 
                                          | ((- (IData)(
                                                        (1U 
                                                         == 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                     >> 0x1cU)))))) 
                                             | ((- (IData)(
                                                           (2U 
                                                            == 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                        >> 0x1cU)))))) 
                                                | (- (IData)(
                                                             (3U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                          >> 0x1cU)))))))))) 
                                   | (1U & ((- (IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                    >> 0x1cU)))))) 
                                            | ((- (IData)(
                                                          (5U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                       >> 0x1cU)))))) 
                                               | (- (IData)(
                                                            (6U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                         >> 0x1cU))))))))))),2);
        bufp->chgCData(oldp+1185,(((0x14U & (- (IData)(
                                                       (0U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                    >> 0x1cU))))))) 
                                   | ((0x12U & (- (IData)(
                                                          (1U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                       >> 0x1cU))))))) 
                                      | ((0x11U & (- (IData)(
                                                             (2U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                          >> 0x1cU))))))) 
                                         | ((0x10U 
                                             & (- (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                       >> 0x1cU))))))) 
                                            | ((0xeU 
                                                & (- (IData)(
                                                             (4U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                          >> 0x1cU))))))) 
                                               | ((0xcU 
                                                   & (- (IData)(
                                                                (5U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                             >> 0x1cU))))))) 
                                                  | (0xaU 
                                                     & ((- (IData)(
                                                                   (6U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1cU)))))) 
                                                        | (- (IData)(
                                                                     (7U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1cU))))))))))))))),5);
        bufp->chgBit(oldp+1186,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
                                       >> 2U))));
        bufp->chgBit(oldp+1187,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_diff))));
        bufp->chgQData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hf9e144d9__0),36);
        bufp->chgQData(oldp+1190,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hcf4afe7a__0)
                                    ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_o_rem)) 
                                       << 3U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_big_dff__DOT__reg_qout)
                                                  ? 0ULL
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hf9e144d9__0))),36);
        bufp->chgCData(oldp+1192,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hf9e144d9__0 
                                                   >> 0x1dU)))),5);
        bufp->chgCData(oldp+1193,(((4U & ((- (IData)(
                                                     (0U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                  >> 0x1cU)))))) 
                                          | ((- (IData)(
                                                        (1U 
                                                         == 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                     >> 0x1cU)))))) 
                                             | ((- (IData)(
                                                           (2U 
                                                            == 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                        >> 0x1cU)))))) 
                                                | (- (IData)(
                                                             (3U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                          >> 0x1cU)))))))))) 
                                   | ((6U & (- (IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                    >> 0x1cU))))))) 
                                      | ((6U & (- (IData)(
                                                          (5U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                       >> 0x1cU))))))) 
                                         | ((6U & (- (IData)(
                                                             (6U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                          >> 0x1cU))))))) 
                                            | (8U & 
                                               (- (IData)(
                                                          (7U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                       >> 0x1cU)))))))))))),5);
        bufp->chgCData(oldp+1194,(((0xcU & (- (IData)(
                                                      (0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                   >> 0x1cU))))))) 
                                   | ((0xeU & (- (IData)(
                                                         (1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                      >> 0x1cU))))))) 
                                      | ((0xfU & (- (IData)(
                                                            (2U 
                                                             == 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                         >> 0x1cU))))))) 
                                         | ((0x10U 
                                             & (- (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                       >> 0x1cU))))))) 
                                            | ((0x12U 
                                                & (- (IData)(
                                                             (4U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                          >> 0x1cU))))))) 
                                               | ((0x14U 
                                                   & (- (IData)(
                                                                (5U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                             >> 0x1cU))))))) 
                                                  | (0x16U 
                                                     & ((- (IData)(
                                                                   (6U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1cU)))))) 
                                                        | (- (IData)(
                                                                     (7U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1cU))))))))))))))),5);
        bufp->chgCData(oldp+1195,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hc84a0142__0) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_he1627121__0))),2);
        bufp->chgCData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout),5);
        bufp->chgCData(oldp+1197,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_he1627121__0)
                                    ? 0x10U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hc84a0142__0)
                                                ? 8U
                                                : 4U))),5);
        bufp->chgBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_en));
        bufp->chgCData(oldp+1199,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_he1627121__0)
                                        ? 0x10U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hc84a0142__0)
                                                    ? 8U
                                                    : 4U))
                                    : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_h62851a69__0)) 
                                        << 4U) | ((
                                                   (4U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_h62851a69__0)) 
                                                   << 3U) 
                                                  | (((2U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_hd0d7bce6__0)) 
                                                      << 2U) 
                                                     | (((6U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_h91734dab__0)) 
                                                         << 1U) 
                                                        | (7U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_h91734dab__0)))))))),5);
        bufp->chgIData(oldp+1200,((((- (IData)((1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                   >> 4U)))) 
                                    & (2U | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout 
                                             << 2U))) 
                                   | (((- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                      >> 3U)))) 
                                       & (1U | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout 
                                                << 2U))) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                         >> 2U)))) 
                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout 
                                             << 2U)) 
                                         | (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                            >> 1U)))) 
                                             & (3U 
                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout 
                                                   << 2U))) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout)))) 
                                               & (2U 
                                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout 
                                                     << 2U)))))))),32);
        bufp->chgIData(oldp+1201,((((- (IData)((1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                   >> 4U)))) 
                                    & (1U | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout 
                                             << 2U))) 
                                   | (((- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                      >> 3U)))) 
                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout 
                                          << 2U)) | 
                                      (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                       >> 2U)))) 
                                        & (3U | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout 
                                                 << 2U))) 
                                       | (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                          >> 1U)))) 
                                           & (2U | 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout 
                                               << 2U))) 
                                          | ((- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout)))) 
                                             & (1U 
                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout 
                                                   << 2U)))))))),32);
        bufp->chgBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_en));
        bufp->chgIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+1205,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hee0dcae5__0
                                    : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                           >> 4U)))) 
                                            & (2U | 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout 
                                                << 2U))) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                              >> 3U)))) 
                                               & (1U 
                                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout 
                                                     << 2U))) 
                                              | (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                                 >> 2U)))) 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout 
                                                     << 2U)) 
                                                 | (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                                    >> 1U)))) 
                                                     & (3U 
                                                        | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout 
                                                           << 2U))) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout)))) 
                                                       & (2U 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout 
                                                             << 2U)))))))
                                        : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__quot_neg_dff__DOT__reg_qout)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__inv1
                                            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout)))),32);
        bufp->chgIData(oldp+1206,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hee0dcae5__0
                                    : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                           >> 4U)))) 
                                            & (1U | 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout 
                                                << 2U))) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                              >> 3U)))) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout 
                                                  << 2U)) 
                                              | (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                                 >> 2U)))) 
                                                  & (3U 
                                                     | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout 
                                                        << 2U))) 
                                                 | (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                                    >> 1U)))) 
                                                     & (2U 
                                                        | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout 
                                                           << 2U))) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout)))) 
                                                       & (1U 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout 
                                                             << 2U)))))))
                                        : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__quot_neg_dff__DOT__reg_qout)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__inv2
                                            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout)))),32);
        bufp->chgCData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_num_dff__DOT__reg_qout),4);
        bufp->chgCData(oldp+1208,((0xfU & ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))
                                            ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_diff) 
                                                >> 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_diff)))
                                            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_num_dff__DOT__reg_qout) 
                                               - (IData)(1U))))),4);
        bufp->chgBit(oldp+1209,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_num_dff__DOT__reg_qout))));
        bufp->chgQData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout),36);
        bufp->chgQData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout),36);
        bufp->chgQData(oldp+1214,((0xfffffffffULL & 
                                   ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hcf4afe7a__0)
                                         ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_o_rem)) 
                                            << 3U) : 
                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_big_dff__DOT__reg_qout)
                                          ? 0ULL : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hf9e144d9__0))
                                     : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                         << 2U) ^ (
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                                    << 2U) 
                                                   ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__csa_3_2_x3))))),36);
        bufp->chgQData(oldp+1216,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))
                                    ? 0ULL : ((0xffffffffeULL 
                                               & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout) 
                                                   << 3U) 
                                                  | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                                       | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout) 
                                                      << 3U) 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__csa_3_2_x3 
                                                        << 1U)))) 
                                              | (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x18U 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout)))))))),36);
        bufp->chgCData(oldp+1218,((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_h62851a69__0)) 
                                    << 4U) | (((4U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_h62851a69__0)) 
                                               << 3U) 
                                              | (((2U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_hd0d7bce6__0)) 
                                                  << 2U) 
                                                 | (((6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_h91734dab__0)) 
                                                     << 1U) 
                                                    | (7U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_h91734dab__0))))))),5);
        bufp->chgQData(oldp+1219,((0xfffffffffULL & 
                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                     << 2U) ^ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                                << 2U) 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__csa_3_2_x3)))),36);
        bufp->chgQData(oldp+1221,(((0xffffffffeULL 
                                    & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout) 
                                        << 3U) | ((
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout) 
                                                   << 3U) 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__csa_3_2_x3 
                                                     << 1U)))) 
                                   | (QData)((IData)(
                                                     (0U 
                                                      != 
                                                      (0x18U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout))))))),36);
        bufp->chgQData(oldp+1223,((0xfffffffffULL & 
                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                    << 2U))),36);
        bufp->chgQData(oldp+1225,((0xfffffffffULL & 
                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                    << 2U))),36);
        bufp->chgQData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__csa_3_2_x3),36);
        bufp->chgQData(oldp+1229,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber1 
                                   ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber2 
                                      ^ ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout)) 
                                         << 1U)))),36);
        bufp->chgQData(oldp+1231,((0xffffffffeULL & 
                                   ((vlSelf->__VdfgTmp_h6fbd2f8c__0 
                                     << 1U) | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber1 
                                                 | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber2) 
                                                << 1U) 
                                               & ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout)) 
                                                  << 2U))))),36);
        bufp->chgQData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_plsu_d_nxt_x0),36);
        bufp->chgQData(oldp+1235,((vlSelf->__VdfgTmp_h1ddb876e__0 
                                   << 1U)),36);
        bufp->chgQData(oldp+1237,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_plsu_d_nxt_x0 
                                   ^ ((vlSelf->__VdfgTmp_h1ddb876e__0 
                                       << 1U) ^ (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout)) 
                                                  << 1U) 
                                                 | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout)))))),36);
        bufp->chgQData(oldp+1239,((0xffffffffeULL & 
                                   (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_plsu_d_nxt_x0 
                                      << 1U) & (vlSelf->__VdfgTmp_h1ddb876e__0 
                                                << 2U)) 
                                    | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_plsu_d_nxt_x0 
                                         << 1U) | (vlSelf->__VdfgTmp_h1ddb876e__0 
                                                   << 2U)) 
                                       & ((QData)((IData)(
                                                          (3U 
                                                           & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout)))))) 
                                          << 1U))))),36);
        bufp->chgQData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_nxt),36);
        bufp->chgQData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_plus_d_nxt),36);
        bufp->chgBit(oldp+1245,((1U & (~ (IData)((0U 
                                                  != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout))))));
        bufp->chgBit(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__need_corr));
        bufp->chgQData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__pre_shifted_rem),33);
        bufp->chgBit(oldp+1249,(((7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_nxt))) 
                                 & ((7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_plus_d_nxt))) 
                                    & ((0x1fU == (0x1fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_diff_nxt))) 
                                       & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_lzc_dff__DOT__reg_qout) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_diff)) 
                                          >> 5U))))));
        bufp->chgBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_s1));
        bufp->chgBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_lzc_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_big_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_small_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_lzc_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_num_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_s1));
        bufp->chgIData(oldp+1260,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout)),32);
        bufp->chgCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_dividend__cnt_o),5);
        bufp->chgBit(oldp+1262,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout))));
        bufp->chgIData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_dividend__DOT__lzc_is_which),32);
        bufp->chgCData(oldp+1264,(((0U == (0x7fU & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                            >> 0x19U))))
                                    ? 7U : ((0U == 
                                             (0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                         >> 0x1aU))))
                                             ? 6U : 
                                            ((0U == 
                                              (0x1fU 
                                               & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                          >> 0x1bU))))
                                              ? 5U : 
                                             ((0U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                           >> 0x1cU))))
                                               ? 4U
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                               >> 0x1dU))))
                                                   ? 3U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                >> 0x1eU))))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                >> 0x1fU)))
                                                     ? 0U
                                                     : 1U)))))))),5);
        bufp->chgCData(oldp+1265,(((0U == (0x7fffU 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                      >> 0x11U))))
                                    ? 0xfU : ((0U == 
                                               (0x3fffU 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                           >> 0x12U))))
                                               ? 0xeU
                                               : ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                               >> 0x13U))))
                                                   ? 0xdU
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                >> 0x14U))))
                                                    ? 0xcU
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                 >> 0x15U))))
                                                     ? 0xbU
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                  >> 0x16U))))
                                                      ? 0xaU
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x1ffU 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                   >> 0x17U))))
                                                       ? 9U
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                    >> 0x18U))))
                                                        ? 8U
                                                        : 0U))))))))),5);
        bufp->chgCData(oldp+1266,(((0U == (0x7fffffU 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                      >> 9U))))
                                    ? 0x17U : ((0U 
                                                == 
                                                (0x3fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                            >> 0xaU))))
                                                ? 0x16U
                                                : (
                                                   (0U 
                                                    == 
                                                    (0x1fffffU 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                >> 0xbU))))
                                                    ? 0x15U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0xfffffU 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                 >> 0xcU))))
                                                     ? 0x14U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x7ffffU 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                  >> 0xdU))))
                                                      ? 0x13U
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x3ffffU 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                   >> 0xeU))))
                                                       ? 0x12U
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                    >> 0xfU))))
                                                        ? 0x11U
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                     >> 0x10U))))
                                                         ? 0x10U
                                                         : 0U))))))))),5);
        bufp->chgCData(oldp+1267,(((0U == (0x7fffffffU 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                      >> 1U))))
                                    ? 0x1fU : ((0U 
                                                == 
                                                (0x3fffffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                            >> 2U))))
                                                ? 0x1eU
                                                : (
                                                   (0U 
                                                    == 
                                                    (0x1fffffffU 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                >> 3U))))
                                                    ? 0x1dU
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0xfffffffU 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                 >> 4U))))
                                                     ? 0x1cU
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x7ffffffU 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                  >> 5U))))
                                                      ? 0x1bU
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x3ffffffU 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                   >> 6U))))
                                                       ? 0x1aU
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x1ffffffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                    >> 7U))))
                                                        ? 0x19U
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (0xffffffU 
                                                          & (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                     >> 8U))))
                                                         ? 0x18U
                                                         : 0U))))))))),5);
        bufp->chgIData(oldp+1268,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)),32);
        bufp->chgCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_divisor__cnt_o),5);
        bufp->chgBit(oldp+1270,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout))));
        bufp->chgIData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_divisor__DOT__lzc_is_which),32);
        bufp->chgCData(oldp+1272,(((0U == (0x7fU & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                            >> 0x19U))))
                                    ? 7U : ((0U == 
                                             (0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                         >> 0x1aU))))
                                             ? 6U : 
                                            ((0U == 
                                              (0x1fU 
                                               & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                          >> 0x1bU))))
                                              ? 5U : 
                                             ((0U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                           >> 0x1cU))))
                                               ? 4U
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                               >> 0x1dU))))
                                                   ? 3U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                >> 0x1eU))))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                >> 0x1fU)))
                                                     ? 0U
                                                     : 1U)))))))),5);
        bufp->chgCData(oldp+1273,(((0U == (0x7fffU 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                      >> 0x11U))))
                                    ? 0xfU : ((0U == 
                                               (0x3fffU 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                           >> 0x12U))))
                                               ? 0xeU
                                               : ((0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                               >> 0x13U))))
                                                   ? 0xdU
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                >> 0x14U))))
                                                    ? 0xcU
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                 >> 0x15U))))
                                                     ? 0xbU
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                  >> 0x16U))))
                                                      ? 0xaU
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x1ffU 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                   >> 0x17U))))
                                                       ? 9U
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                    >> 0x18U))))
                                                        ? 8U
                                                        : 0U))))))))),5);
        bufp->chgCData(oldp+1274,(((0U == (0x7fffffU 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                      >> 9U))))
                                    ? 0x17U : ((0U 
                                                == 
                                                (0x3fffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                            >> 0xaU))))
                                                ? 0x16U
                                                : (
                                                   (0U 
                                                    == 
                                                    (0x1fffffU 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                >> 0xbU))))
                                                    ? 0x15U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0xfffffU 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                 >> 0xcU))))
                                                     ? 0x14U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x7ffffU 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                  >> 0xdU))))
                                                      ? 0x13U
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x3ffffU 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                   >> 0xeU))))
                                                       ? 0x12U
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                    >> 0xfU))))
                                                        ? 0x11U
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                     >> 0x10U))))
                                                         ? 0x10U
                                                         : 0U))))))))),5);
        bufp->chgCData(oldp+1275,(((0U == (0x7fffffffU 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                      >> 1U))))
                                    ? 0x1fU : ((0U 
                                                == 
                                                (0x3fffffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                            >> 2U))))
                                                ? 0x1eU
                                                : (
                                                   (0U 
                                                    == 
                                                    (0x1fffffffU 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                >> 3U))))
                                                    ? 0x1dU
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0xfffffffU 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                 >> 4U))))
                                                     ? 0x1cU
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x7ffffffU 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                  >> 5U))))
                                                      ? 0x1bU
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x3ffffffU 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                   >> 6U))))
                                                       ? 0x1aU
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x1ffffffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                    >> 7U))))
                                                        ? 0x19U
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (0xffffffU 
                                                          & (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                     >> 8U))))
                                                         ? 0x18U
                                                         : 0U))))))))),5);
        bufp->chgQData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber1),36);
        bufp->chgQData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber2),36);
        bufp->chgQData(oldp+1280,(((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout)) 
                                   << 1U)),36);
        bufp->chgQData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_plsu_d_add1____pinNumber3),36);
        bufp->chgQData(oldp+1284,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout)) 
                                    << 1U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout)))),36);
        bufp->chgBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg0_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg1_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos1_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos2_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__quot_neg_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__special_divisor_dff__DOT__reg_s1));
        bufp->chgQData(oldp+1296,((0xffffffffeULL & 
                                   (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout) 
                                     << 3U) | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                                 | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout) 
                                                << 3U) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__csa_3_2_x3 
                                                  << 1U))))),36);
        bufp->chgQData(oldp+1298,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                   << 4U)),40);
        bufp->chgQData(oldp+1300,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                   << 4U)),40);
        bufp->chgCData(oldp+1302,((0x7fU & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                                    >> 0x1aU)))),7);
        bufp->chgCData(oldp+1303,((0x7fU & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                                    >> 0x1aU)))),7);
        bufp->chgCData(oldp+1304,((0x7fU & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                                    >> 0x1bU)))),7);
        bufp->chgCData(oldp+1305,((0x7fU & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                                    >> 0x1bU)))),7);
        bufp->chgCData(oldp+1306,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg1_dff__DOT__reg_qout) 
                                   << 1U)),7);
        bufp->chgCData(oldp+1307,(vlSelf->__VdfgTmp_hcdb3edec__0),7);
        bufp->chgCData(oldp+1308,((0x78U | (IData)(vlSelf->__VdfgTmp_h1195937e__0))),7);
        bufp->chgCData(oldp+1309,((0x40U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos2_dff__DOT__reg_qout) 
                                            << 1U))),7);
        bufp->chgQData(oldp+1310,(((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                                   << 3U)),36);
        bufp->chgQData(oldp+1312,(((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                                   << 5U)),38);
        bufp->chgQData(oldp+1314,(((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                                   << 6U)),38);
        bufp->chgQData(oldp+1316,((0x3fffffffffULL 
                                   & (~ ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                                         << 5U)))),38);
        bufp->chgQData(oldp+1318,((0x3fffffffffULL 
                                   & (~ ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                                         << 6U)))),38);
        bufp->chgCData(oldp+1320,((0x7fU & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                    >> 0x19U)))),7);
        bufp->chgCData(oldp+1321,((0x3fU & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                    >> 0x1aU)))),7);
        bufp->chgCData(oldp+1322,((0x7fU & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                    >> 0x18U)))),7);
        bufp->chgCData(oldp+1323,((0x7fU & (~ (IData)(
                                                      ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                                                       >> 0x19U))))),7);
        bufp->chgCData(oldp+1324,((0x7fU & (~ (IData)(
                                                      ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                                                       >> 0x1aU))))),7);
        bufp->chgCData(oldp+1325,((0x7fU & (~ (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                       >> 0x18U))))),7);
        bufp->chgCData(oldp+1326,((0x7fU & (~ (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                       >> 0x19U))))),7);
        bufp->chgCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4),7);
        bufp->chgCData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5),7);
        bufp->chgBit(oldp+1329,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                                 >> 0x1aU)) 
                                        + ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                                    >> 0x1aU)) 
                                           + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5) 
                                              + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg1_dff__DOT__reg_qout) 
                                                 << 1U)))) 
                                       >> 6U))));
        bufp->chgBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__sd_m_neg_0_sign));
        bufp->chgBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__sd_m_pos_1_sign));
        bufp->chgBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__sd_m_pos_2_sign));
        bufp->chgCData(oldp+1333,((0x3fU & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                                     >> 0x1bU)) 
                                            + ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                                        >> 0x1bU)) 
                                               + ((IData)(vlSelf->__VdfgTmp_hcdb3edec__0) 
                                                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4)))))),6);
        bufp->chgCData(oldp+1334,((0x3fU & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                                     >> 0x1aU)) 
                                            + ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                                        >> 0x1aU)) 
                                               + (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg1_dff__DOT__reg_qout) 
                                                   << 1U) 
                                                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5)))))),6);
        bufp->chgCData(oldp+1335,((0x3fU & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                                     >> 0x1bU)) 
                                            + ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                                        >> 0x1bU)) 
                                               + ((0x38U 
                                                   | (IData)(vlSelf->__VdfgTmp_h1195937e__0)) 
                                                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4)))))),6);
        bufp->chgCData(oldp+1336,((0x3fU & ((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                                     >> 0x1aU)) 
                                            + ((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                                        >> 0x1aU)) 
                                               + (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos2_dff__DOT__reg_qout) 
                                                   << 1U) 
                                                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5)))))),6);
        bufp->chgCData(oldp+1337,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__sd_m_pos_2_sign) 
                                    << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_h91734dab__0))),4);
        bufp->chgCData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout),6);
        bufp->chgCData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__state_nxt),6);
        bufp->chgBit(oldp+1340,(((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src1_dff__DOT__reg_qout) 
                                 | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src2_dff__DOT__reg_qout))));
        bufp->chgBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_neg));
        bufp->chgBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplier_neg));
        bufp->chgIData(oldp+1343,((- vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src1_dff__DOT__reg_qout)),32);
        bufp->chgIData(oldp+1344,((- vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src2_dff__DOT__reg_qout)),32);
        bufp->chgBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__res_neg_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1346,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_neg) 
                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplier_neg))));
        bufp->chgIData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplier_abs_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_absneg_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplier_abs_nxt),32);
        bufp->chgIData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_nxt),32);
        bufp->chgIData(oldp+1352,((- vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_nxt)),32);
        bufp->chgSData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel),9);
        bufp->chgCData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits0_dff__DOT__reg_qout),4);
        bufp->chgCData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits1_dff__DOT__reg_qout),4);
        bufp->chgCData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits2_dff__DOT__reg_qout),4);
        bufp->chgCData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits3_dff__DOT__reg_qout),4);
        bufp->chgCData(oldp+1358,(((((1U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel))) 
                                     | (2U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel)))) 
                                    << 3U) | ((((5U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel))) 
                                                | (6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel)))) 
                                               << 2U) 
                                              | (((3U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel))) 
                                                  << 1U) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel))))))),4);
        bufp->chgCData(oldp+1359,(((((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                   >> 2U))) 
                                     | (2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                >> 2U)))) 
                                    << 3U) | ((((5U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                     >> 2U))) 
                                                | (6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | (((3U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                       >> 2U))) 
                                                  << 1U) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                        >> 2U))))))),4);
        bufp->chgCData(oldp+1360,(((((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                   >> 4U))) 
                                     | (2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                >> 4U)))) 
                                    << 3U) | ((((5U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                     >> 4U))) 
                                                | (6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                       >> 4U)))) 
                                               << 2U) 
                                              | (((3U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                       >> 4U))) 
                                                  << 1U) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                        >> 4U))))))),4);
        bufp->chgCData(oldp+1361,(((((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                   >> 6U))) 
                                     | (2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                >> 6U)))) 
                                    << 3U) | ((((5U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                     >> 6U))) 
                                                | (6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                       >> 6U)))) 
                                               << 2U) 
                                              | (((3U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                       >> 6U))) 
                                                  << 1U) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                        >> 6U))))))),4);
        bufp->chgQData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_0),64);
        bufp->chgQData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_1),64);
        bufp->chgQData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_2),64);
        bufp->chgQData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_3),64);
        bufp->chgQData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_extend),64);
        bufp->chgQData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__intermediate_sum1),64);
        bufp->chgQData(oldp+1374,((vlSelf->__VdfgTmp_h2d611035__0 
                                   << 1U)),64);
        bufp->chgQData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__intermediate_sum3),64);
        bufp->chgQData(oldp+1378,((vlSelf->__VdfgTmp_h3d5389e9__0 
                                   << 1U)),64);
        bufp->chgQData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__intermediate_sum5),64);
        bufp->chgQData(oldp+1382,((vlSelf->__VdfgTmp_h796c662f__0 
                                   << 1U)),64);
        bufp->chgQData(oldp+1384,(((vlSelf->__VdfgTmp_h3d5389e9__0 
                                    << 1U) ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__intermediate_sum5 
                                              ^ (vlSelf->__VdfgTmp_h796c662f__0 
                                                 << 1U)))),64);
        bufp->chgQData(oldp+1386,((0xfffffffffffffffeULL 
                                   & (((vlSelf->__VdfgTmp_h3d5389e9__0 
                                        << 2U) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__intermediate_sum5 
                                                  << 1U)) 
                                      | (((vlSelf->__VdfgTmp_h3d5389e9__0 
                                           << 2U) | 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__intermediate_sum5 
                                           << 1U)) 
                                         & (vlSelf->__VdfgTmp_h796c662f__0 
                                            << 2U))))),64);
        bufp->chgQData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_qout),64);
        bufp->chgQData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_cycle),64);
        bufp->chgQData(oldp+1392,((((- (QData)((IData)(
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout) 
                                                         >> 4U) 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__res_neg_dff__DOT__reg_qout))))) 
                                    & (- vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_cycle)) 
                                   | (((- (QData)((IData)(
                                                          (1U 
                                                           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__res_neg_dff__DOT__reg_qout)) 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout) 
                                                                 >> 4U)))))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_cycle) 
                                      | (((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout) 
                                                                 >> 5U))))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_qout) 
                                         | (((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout) 
                                                                    >> 3U))))) 
                                             | ((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout) 
                                                                       >> 2U))))) 
                                                | (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout) 
                                                                         >> 1U))))))) 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_cycle))))),64);
        bufp->chgBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits0_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits1_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits2_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits3_dff__DOT__reg_s1));
        bufp->chgQData(oldp+1398,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_1 
                                   << 2U)),64);
        bufp->chgQData(oldp+1400,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_2 
                                   << 4U)),64);
        bufp->chgQData(oldp+1402,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_3 
                                   << 6U)),64);
        bufp->chgQData(oldp+1404,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_extend 
                                   << 8U)),64);
        bufp->chgQData(oldp+1406,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_qout 
                                   << 8U)),64);
        bufp->chgBit(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_s1));
        bufp->chgBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_absneg_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplier_abs_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__res_neg_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_pc_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rd_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rdwen_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid_pre_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src1_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src2_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_ebreak_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_lsu_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_op_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_pc_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_s1));
        bufp->chgIData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout),32);
        bufp->chgBit(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_prdt_taken_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en));
        bufp->chgBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en));
        bufp->chgBit(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32));
        bufp->chgBit(oldp+1434,((1U & (((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout) 
                                        | (0xffffffffU 
                                           == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)) 
                                       | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__alu_op) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__bjp_op) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__lsu_op) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csr) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__mul_op)))))) 
                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_shift_ilgl))))));
        bufp->chgBit(oldp+1435,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1))))) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1))))) 
                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1))))) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1)))))))) 
                                 | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2))))) 
                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2))))) 
                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2))))) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2)))))))) 
                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd))))) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd))))) 
                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd))))) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd))))))))))));
        bufp->chgBit(oldp+1436,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__disp_com) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout))) 
                                 | (((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus)) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout)) 
                                    | ((4U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout))))));
        bufp->chgBit(oldp+1437,((1U & (~ (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1))))) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1))))) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1))))) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1)))))))) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2))))) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2))))) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2))))) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2)))))))) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd))))) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd))))) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd))))) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd)))))))))) 
                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__disp_com) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout))) 
                                             | (((2U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout)) 
                                                | ((4U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout)))))))));
        bufp->chgCData(oldp+1438,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus)),3);
        bufp->chgBit(oldp+1439,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                     == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                  >> 0xfU)))) 
                                 | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                        == (0x1fU & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                             >> 0xfU)))) 
                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                           == (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                  >> 0xfU)))) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                             == (0x1fU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                    >> 0xfU)))))))));
        bufp->chgBit(oldp+1440,(((((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout) 
                                   | (0xffffffffU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)) 
                                  | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__alu_op) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__bjp_op) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__lsu_op) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csr) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__mul_op)))))) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_shift_ilgl))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32))));
        bufp->chgCData(oldp+1441,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                   >> 0x19U)),7);
        bufp->chgCData(oldp+1442,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1443,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1444,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                            >> 7U))),5);
        bufp->chgCData(oldp+1445,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)),7);
        bufp->chgBit(oldp+1446,((3U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout))));
        bufp->chgBit(oldp+1447,((0U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 2U)))));
        bufp->chgBit(oldp+1448,((1U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 2U)))));
        bufp->chgBit(oldp+1449,((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 2U)))));
        bufp->chgBit(oldp+1450,((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 2U)))));
        bufp->chgBit(oldp+1451,((5U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 2U)))));
        bufp->chgBit(oldp+1452,((7U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 2U)))));
        bufp->chgBit(oldp+1453,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 5U)))));
        bufp->chgBit(oldp+1454,((1U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 5U)))));
        bufp->chgBit(oldp+1455,((3U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 5U)))));
        bufp->chgBit(oldp+1456,((0U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                 >> 0xfU)))));
        bufp->chgBit(oldp+1457,((0U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                 >> 0x14U)))));
        bufp->chgBit(oldp+1458,((0U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                 >> 7U)))));
        bufp->chgBit(oldp+1459,((0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                        >> 0x19U))));
        bufp->chgBit(oldp+1460,((1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                        >> 0x19U))));
        bufp->chgBit(oldp+1461,((0x20U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U))));
        bufp->chgBit(oldp+1462,((0x21U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U))));
        bufp->chgCData(oldp+1463,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                         >> 0xcU))),3);
        bufp->chgBit(oldp+1464,((0U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+1465,((1U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+1466,((2U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+1467,((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+1468,((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+1469,((5U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+1470,((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+1471,((7U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_load));
        bufp->chgBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_store));
        bufp->chgBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch));
        bufp->chgBit(oldp+1475,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                 & (0U == (0x7000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1476,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                 & (0x1000U == (0x7000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1477,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                 & (0x4000U == (0x7000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1478,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                 & (0x5000U == (0x7000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1479,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                 & (0x6000U == (0x7000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1480,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                 & (0x7000U == (0x7000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_jalr));
        bufp->chgBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_miscmem));
        bufp->chgBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fence));
        bufp->chgBit(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fencei));
        bufp->chgBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_jal));
        bufp->chgBit(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm));
        bufp->chgBit(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_addi));
        bufp->chgBit(oldp+1488,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm) 
                                 & (0x2000U == (0x7000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1489,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm) 
                                 & (0x3000U == (0x7000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1490,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm) 
                                 & (0x4000U == (0x7000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1491,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm) 
                                 & (0x6000U == (0x7000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1492,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm) 
                                 & (0x7000U == (0x7000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_slli));
        bufp->chgBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_srli));
        bufp->chgBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_srai));
        bufp->chgBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_nop));
        bufp->chgBit(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op));
        bufp->chgBit(oldp+1498,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h93711e12__0) 
                                 & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1499,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h93711e12__0) 
                                 & (0x20U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+1500,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h937d1e55__0) 
                                 & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1501,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h93897e78__0) 
                                 & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1502,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h916fc8f4__0) 
                                 & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1503,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h6e3777ae__0) 
                                 & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1504,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h6e3e364e__0) 
                                 & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1505,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h6e3e364e__0) 
                                 & (0x20U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+1506,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h939a9767__0) 
                                 & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1507,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h9224901c__0) 
                                 & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1508,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h93711e12__0) 
                                 & (1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1509,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h937d1e55__0) 
                                 & (1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1510,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h93897e78__0) 
                                 & (1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1511,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h916fc8f4__0) 
                                 & (1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1512,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h6e3777ae__0) 
                                 & (1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1513,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h6e3e364e__0) 
                                 & (1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1514,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h939a9767__0) 
                                 & (1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1515,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h9224901c__0) 
                                 & (1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x19U)))));
        bufp->chgBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_system));
        bufp->chgBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ecall));
        bufp->chgBit(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ebreak));
        bufp->chgBit(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_mret));
        bufp->chgBit(oldp+1520,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h23370bb6__0) 
                                 & (0x105U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csr));
        bufp->chgBit(oldp+1522,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_system) 
                                 & (0x1000U == (0x7000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1523,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_system) 
                                 & (0x2000U == (0x7000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1524,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_system) 
                                 & (0x3000U == (0x7000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csrrwi));
        bufp->chgBit(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csrrsi));
        bufp->chgBit(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csrrci));
        bufp->chgBit(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_auipc));
        bufp->chgBit(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_lui));
        bufp->chgBit(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__alu_op));
        bufp->chgBit(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__bjp_op));
        bufp->chgBit(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__lsu_op));
        bufp->chgBit(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__mul_op));
        bufp->chgBit(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_shift_ilgl));
        bufp->chgBit(oldp+1535,(((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout) 
                                 | (0xffffffffU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout))));
        bufp->chgBit(oldp+1536,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__alu_op) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__bjp_op) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__lsu_op) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csr) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__mul_op)))))))));
        bufp->chgBit(oldp+1537,(((0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                  >> 0xfU))) 
                                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_lui)) 
                                    & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_auipc)) 
                                       & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_jal)) 
                                          & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fence)) 
                                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fencei)) 
                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ecall)) 
                                                   & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ebreak)) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h68212022__0))))))))))));
        bufp->chgBit(oldp+1538,(((0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                  >> 0x14U))) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_store) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op))))));
        bufp->chgBit(oldp+1539,(((0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                  >> 7U))) 
                                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch)) 
                                    & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_store)) 
                                       & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fence)) 
                                          & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fencei)) 
                                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ecall)) 
                                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ebreak))))))))));
        bufp->chgBit(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_i));
        bufp->chgBit(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_u));
        bufp->chgBit(oldp+1542,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_i) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_u) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_store) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_jal)))))));
        bufp->chgBit(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__need_imm));
        bufp->chgIData(oldp+1544,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                >> 0x14U))),32);
        bufp->chgIData(oldp+1545,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)),32);
        bufp->chgIData(oldp+1546,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                      >> 7U))))),32);
        bufp->chgIData(oldp+1547,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                         >> 7U)))))),32);
        bufp->chgIData(oldp+1548,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout) 
                                                 | ((0x800U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                          >> 0x14U)))))),32);
        bufp->chgIData(oldp+1549,((((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_i))) 
                                    & (((- (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                        >> 0x14U))) 
                                   | ((0xfffff000U 
                                       & ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_u))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)) 
                                      | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_store))) 
                                          & (((- (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                      >> 7U))))) 
                                         | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch))) 
                                             & (((- (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                            >> 7U)))))) 
                                            | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_jal))) 
                                               & (((- (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout) 
                                                     | ((0x800U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                              >> 0x14U))))))))))),32);
        bufp->chgIData(oldp+1550,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ebreak) 
                                    << 0x12U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_nop) 
                                                  << 0x11U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_auipc) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__need_imm) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_lui) 
                                                           << 0xeU) 
                                                          | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h9224901c__0) 
                                                                & (0U 
                                                                   == 
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                                    >> 0x19U))) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm) 
                                                                  & (0x7000U 
                                                                     == 
                                                                     (0x7000U 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))) 
                                                              << 0xdU) 
                                                             | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h939a9767__0) 
                                                                   & (0U 
                                                                      == 
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                                       >> 0x19U))) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm) 
                                                                     & (0x6000U 
                                                                        == 
                                                                        (0x7000U 
                                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))) 
                                                                 << 0xcU) 
                                                                | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h6e3e364e__0) 
                                                                      & (0x20U 
                                                                         == 
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                                          >> 0x19U))) 
                                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_srai)) 
                                                                    << 0xbU) 
                                                                   | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h6e3e364e__0) 
                                                                         & (0U 
                                                                            == 
                                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                                             >> 0x19U))) 
                                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_srli)) 
                                                                       << 0xaU) 
                                                                      | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h937d1e55__0) 
                                                                            & (0U 
                                                                               == 
                                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                                                >> 0x19U))) 
                                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_slli)) 
                                                                          << 9U) 
                                                                         | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h6e3777ae__0) 
                                                                               & (0U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                                                >> 0x19U))) 
                                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm) 
                                                                                & (0x4000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))) 
                                                                             << 8U) 
                                                                            | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h916fc8f4__0) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                                                >> 0x19U))) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm) 
                                                                                & (0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))) 
                                                                                << 7U) 
                                                                               | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h93897e78__0) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                                                >> 0x19U))) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm) 
                                                                                & (0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h93711e12__0) 
                                                                                & (0x20U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                                                >> 0x19U))) 
                                                                                << 5U) 
                                                                                | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h93711e12__0) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                                                >> 0x19U))) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_addi) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_auipc))) 
                                                                                << 4U) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32) 
                                                                                << 3U))))))))))))))))),19);
        bufp->chgSData(oldp+1551,((1U | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_mret) 
                                          << 0xdU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                             << 0xcU) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout))) 
                                                << 0xbU) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout))) 
                                                   << 0xaU) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                                       & (0x5000U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout))) 
                                                      << 9U) 
                                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                                          & (0x4000U 
                                                             == 
                                                             (0x7000U 
                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout))) 
                                                         << 8U) 
                                                        | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                                             & (0x1000U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout))) 
                                                            << 7U) 
                                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                                                & (0U 
                                                                   == 
                                                                   (0x7000U 
                                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout))) 
                                                               << 6U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_prdt_taken_dff__DOT__reg_qout) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h3dbdfcf8__0) 
                                                                     << 4U) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32) 
                                                                       << 3U))))))))))))),14);
        bufp->chgSData(oldp+1552,((2U | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fencei) 
                                          << 0xbU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fence) 
                                             << 0xaU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__need_imm) 
                                                << 9U) 
                                               | ((0x3ffff00U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32) 
                                                       << 8U) 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                         >> 6U))) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32)
                                                        ? 
                                                       (3U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                           >> 0xcU))
                                                        : 2U) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_store) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_load) 
                                                            << 4U) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32) 
                                                              << 3U)))))))))),12);
        bufp->chgCData(oldp+1553,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32)
                                    ? (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                             >> 0xcU))
                                    : 2U)),2);
        bufp->chgBit(oldp+1554,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                    >> 0xeU))));
        bufp->chgIData(oldp+1555,((3U | ((0x7ff8000U 
                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                             >> 5U)) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                  >> 0xfU))) 
                                             << 0xeU) 
                                            | ((0x3e00U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                   >> 6U)) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h68212022__0) 
                                                   << 8U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ecall) 
                                                      << 7U) 
                                                     | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_system) 
                                                           & (0x3000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout))) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csrrci)) 
                                                         << 6U) 
                                                        | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_system) 
                                                              & (0x2000U 
                                                                 == 
                                                                 (0x7000U 
                                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout))) 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csrrsi)) 
                                                            << 5U) 
                                                           | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_system) 
                                                                 & (0x1000U 
                                                                    == 
                                                                    (0x7000U 
                                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout))) 
                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csrrwi)) 
                                                               << 4U) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32) 
                                                                 << 3U))))))))))),27);
        bufp->chgSData(oldp+1556,((4U | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h9224901c__0) 
                                           & (1U == 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                               >> 0x19U))) 
                                          << 0xbU) 
                                         | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h939a9767__0) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                  >> 0x19U))) 
                                             << 0xaU) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h6e3e364e__0) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                     >> 0x19U))) 
                                                << 9U) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h6e3777ae__0) 
                                                    & (1U 
                                                       == 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                        >> 0x19U))) 
                                                   << 8U) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h916fc8f4__0) 
                                                       & (1U 
                                                          == 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                           >> 0x19U))) 
                                                      << 7U) 
                                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h93897e78__0) 
                                                          & (1U 
                                                             == 
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                              >> 0x19U))) 
                                                         << 6U) 
                                                        | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h937d1e55__0) 
                                                             & (1U 
                                                                == 
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                                 >> 0x19U))) 
                                                            << 5U) 
                                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h93711e12__0) 
                                                                & (1U 
                                                                   == 
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                                    >> 0x19U))) 
                                                               << 4U) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32) 
                                                                 << 3U))))))))))),12);
        bufp->chgBit(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__disp_com));
        bufp->chgBit(oldp+1558,((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus))));
        bufp->chgBit(oldp+1559,((4U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus))));
        bufp->chgBit(oldp+1560,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_op_dff__DOT__reg_qout))));
        bufp->chgBit(oldp+1561,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_op_dff__DOT__reg_qout) 
                                       >> 1U))));
        bufp->chgBit(oldp+1562,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_op_dff__DOT__reg_qout) 
                                       >> 2U))));
        bufp->chgCData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__wptr),2);
        bufp->chgCData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__rptr),2);
        bufp->chgCData(oldp+1565,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____VdfgTmp_h9df3f46e__0) 
                                    << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____VdfgTmp_h00239dbe__0) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__muldiv_o_flush) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_o_flush))))),4);
        bufp->chgBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_wptr_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_rptr_dff__DOT__reg_qout));
        bufp->chgCData(oldp+1568,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                    << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout))))),4);
        bufp->chgCData(oldp+1569,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____VdfgTmp_hf22f5cdd__0) 
                                    << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____VdfgTmp_h370bffe6__0) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____VdfgTmp_h319be0ef__0) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____VdfgTmp_h8aec6602__0))))),4);
        bufp->chgCData(oldp+1570,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                    << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout))))),4);
        bufp->chgCData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__oitf_rd[0]),5);
        bufp->chgCData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__oitf_rd[1]),5);
        bufp->chgCData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__oitf_rd[2]),5);
        bufp->chgCData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__oitf_rd[3]),5);
        bufp->chgCData(oldp+1575,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1))))) 
                                    << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1))))) 
                                               << 2U) 
                                              | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1))))) 
                                                  << 1U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1))))))))),4);
        bufp->chgCData(oldp+1576,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2))))) 
                                    << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2))))) 
                                               << 2U) 
                                              | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2))))) 
                                                  << 1U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2))))))))),4);
        bufp->chgCData(oldp+1577,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd))))) 
                                    << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd))))) 
                                               << 2U) 
                                              | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd))))) 
                                                  << 1U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd))))))))),4);
        bufp->chgCData(oldp+1578,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                        == (0x1fU & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                             >> 0xfU)))) 
                                    << 3U) | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                       >> 0xfU)))) 
                                               << 2U) 
                                              | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                          >> 0xfU)))) 
                                                  << 1U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                           >> 0xfU)))))))),4);
        bufp->chgCData(oldp+1579,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout) 
                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout))) 
                                    << 3U) | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout) 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout))) 
                                               << 2U) 
                                              | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout) 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout))) 
                                                  << 1U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout) 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout))))))),4);
        bufp->chgBit(oldp+1580,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1))))) 
                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1))))) 
                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1))))) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1))))))))));
        bufp->chgBit(oldp+1581,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2))))) 
                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2))))) 
                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2))))) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2))))))))));
        bufp->chgBit(oldp+1582,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd))))) 
                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd))))) 
                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd))))) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd))))))))));
        bufp->chgBit(oldp+1583,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_op_dff__DOT__reg_qout) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_qout))));
        bufp->chgBit(oldp+1584,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_rptr_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_rptr_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1586,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_wptr_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_wptr_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_s1));
        bufp->chgCData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout),5);
        bufp->chgBit(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_s1));
        bufp->chgCData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout),5);
        bufp->chgBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_s1));
        bufp->chgCData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout),5);
        bufp->chgBit(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_s1));
        bufp->chgCData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout),5);
        bufp->chgBit(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1612,((0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus))));
        bufp->chgBit(oldp+1613,((1U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus))));
        bufp->chgBit(oldp+1614,((3U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus))));
        bufp->chgBit(oldp+1615,(((0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus)) 
                                 | ((1U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus)) 
                                    | (3U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus))))));
        bufp->chgBit(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_valid));
        bufp->chgBit(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_valid_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_valid_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_pc_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_prdt_taken_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_req_valid));
        bufp->chgBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_rs1en));
        bufp->chgBit(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_fencei));
        bufp->chgIData(oldp+1625,((((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__dec_jal))) 
                                    & (((- (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout) 
                                        | ((0x800U 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                 >> 0x14U)))))) 
                                   | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_rs1en))) 
                                       & (((- (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                             >> 0x14U))) 
                                      | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__dec_bxx))) 
                                         & (((- (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                        >> 7U))))))))),32);
        bufp->chgIData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_req_pc),32);
        bufp->chgCData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_state__DOT__reg_qout),6);
        bufp->chgBit(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_req_hit));
        bufp->chgBit(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_req_hit0));
        bufp->chgBit(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_req_hit1));
        bufp->chgBit(oldp+1631,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_req_hit)))));
        bufp->chgBit(oldp+1632,(((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend
                                  [(0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_req_pc 
                                             >> 2U))]
                                  [0U]) < (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend
                                           [(0x3fU 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_req_pc 
                                                >> 2U))]
                                           [1U]))));
        bufp->chgIData(oldp+1633,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_req_pc 
                                   >> 8U)),24);
        bufp->chgCData(oldp+1634,((0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_req_pc 
                                            >> 2U))),6);
        bufp->chgBit(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit1_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_miss_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_miss1_dff__DOT__reg_qout));
        bufp->chgIData(oldp+1639,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout 
                                   >> 8U)),24);
        bufp->chgCData(oldp+1640,((0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout 
                                            >> 2U))),6);
        bufp->chgCData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_addr),6);
        bufp->chgQData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_rdata),64);
        bufp->chgBit(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit1_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_miss1_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_miss_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_s1));
        bufp->chgQData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__0__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__0__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__10__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__10__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__11__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__11__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__12__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__12__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__13__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__13__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__14__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__14__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__15__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__15__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__16__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__16__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__17__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__17__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__18__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__18__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__19__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__19__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__1__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__1__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__20__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__20__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__21__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__21__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__22__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__22__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__23__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__23__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__24__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__24__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__25__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__25__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__26__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__26__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__27__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__27__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__28__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__28__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__29__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__29__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__2__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__2__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__30__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__30__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__31__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__31__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__32__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__32__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__33__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__33__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__34__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__34__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__35__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__35__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__36__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__36__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__37__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__37__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__38__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__38__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__39__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__39__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__3__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__3__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__40__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__40__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__41__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__41__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__42__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__42__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__43__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__43__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__44__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__44__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__45__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__45__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__46__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__46__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__47__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__47__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__48__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__48__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__49__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__49__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__4__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__4__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__50__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__50__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__51__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__51__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__52__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__52__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__53__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__53__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__54__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__54__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__55__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__55__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__56__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__56__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__57__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__57__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__58__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__58__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__59__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__59__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__5__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__5__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__60__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__60__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__61__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__61__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__62__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__62__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__63__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__63__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__6__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__6__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__7__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__7__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__8__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__8__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgQData(oldp+1838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__9__KET____DOT__x64_sram__DOT__reg_qout),64);
        bufp->chgBit(oldp+1840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__9__KET____DOT__x64_sram__DOT__reg_s1));
        bufp->chgBit(oldp+1841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_state__DOT__reg_s1));
        bufp->chgBit(oldp+1842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_s1));
        bufp->chgIData(oldp+1843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+1845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+1846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        bufp->chgIData(oldp+1847,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_csr_ren)
                                    ? (((- (IData)(
                                                   (5U 
                                                    == (IData)(vlSelf->__VdfgTmp_h3be0d50b__0)))) 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mtvec_dff__DOT__reg_qout) 
                                       | ((- (IData)(
                                                     (0x41U 
                                                      == (IData)(vlSelf->__VdfgTmp_h3be0d50b__0)))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mepc_dff__DOT__reg_qout))
                                    : (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_rs1en))) 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                        [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                   >> 0xfU))]) 
                                       | ((- (IData)(
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_csr_ren) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_rs1en)))))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout)))),32);
        bufp->chgIData(oldp+1848,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_o_prdt_taken)
                                    ? (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__dec_jal))) 
                                        & (((- (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                        >> 0x1fU))) 
                                            << 0x14U) 
                                           | ((0xff000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout) 
                                              | ((0x800U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                       >> 0x14U)))))) 
                                       | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_rs1en))) 
                                           & (((- (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                 >> 0x14U))) 
                                          | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__dec_bxx))) 
                                             & (((- (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                            >> 7U))))))))
                                    : 4U)),32);
        bufp->chgIData(oldp+1849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__pc_dff__DOT__reg_qout),32);
        bufp->chgIData(oldp+1850,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_csr_ren)
                                     ? (((- (IData)(
                                                    (5U 
                                                     == (IData)(vlSelf->__VdfgTmp_h3be0d50b__0)))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mtvec_dff__DOT__reg_qout) 
                                        | ((- (IData)(
                                                      (0x41U 
                                                       == (IData)(vlSelf->__VdfgTmp_h3be0d50b__0)))) 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mepc_dff__DOT__reg_qout))
                                     : (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_rs1en))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                         [(0x1fU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                            >> 0xfU))]) 
                                        | ((- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_csr_ren) 
                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_rs1en)))))) 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout))) 
                                   + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_o_prdt_taken)
                                       ? (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__dec_jal))) 
                                           & (((- (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                           >> 0x1fU))) 
                                               << 0x14U) 
                                              | ((0xff000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout) 
                                                 | ((0x800U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                          >> 0x14U)))))) 
                                          | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_rs1en))) 
                                              & (((- (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                    >> 0x14U))) 
                                             | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__dec_bxx))) 
                                                & (((- (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                               >> 7U))))))))
                                       : 4U))),32);
        bufp->chgBit(oldp+1851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rst_req_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__ifetch_valid_req_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rs1_need_wait_r_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__fencei_need_wait_r_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1855,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__fencei_need_wait_set) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__fencei_need_wait_r_dff__DOT__reg_qout))));
        bufp->chgBit(oldp+1856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_wait_dff__DOT__reg_qout));
        bufp->chgBit(oldp+1857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__fencei_need_wait_set));
        bufp->chgBit(oldp+1858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__fencei_need_wait_r_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__ifetch_valid_req_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__pc_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_wait_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rs1_need_wait_r_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rst_req_dff__DOT__reg_s1));
        bufp->chgBit(oldp+1864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__dec_jal));
        bufp->chgBit(oldp+1865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__dec_bxx));
        bufp->chgBit(oldp+1866,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__dec_bxx) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table
                                    [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout 
                                               >> 2U))]
                                    [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history] 
                                    >> 1U))));
        bufp->chgCData(oldp+1867,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout 
                                            >> 2U))),5);
        bufp->chgCData(oldp+1868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0]),2);
        bufp->chgCData(oldp+1869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[1]),2);
        bufp->chgCData(oldp+1870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[2]),2);
        bufp->chgCData(oldp+1871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[3]),2);
        bufp->chgCData(oldp+1872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[4]),2);
        bufp->chgCData(oldp+1873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[5]),2);
        bufp->chgCData(oldp+1874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[6]),2);
        bufp->chgCData(oldp+1875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[7]),2);
        bufp->chgCData(oldp+1876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[8]),2);
        bufp->chgCData(oldp+1877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[9]),2);
        bufp->chgCData(oldp+1878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[10]),2);
        bufp->chgCData(oldp+1879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[11]),2);
        bufp->chgCData(oldp+1880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[12]),2);
        bufp->chgCData(oldp+1881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[13]),2);
        bufp->chgCData(oldp+1882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[14]),2);
        bufp->chgCData(oldp+1883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[15]),2);
        bufp->chgCData(oldp+1884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[16]),2);
        bufp->chgCData(oldp+1885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[17]),2);
        bufp->chgCData(oldp+1886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[18]),2);
        bufp->chgCData(oldp+1887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[19]),2);
        bufp->chgCData(oldp+1888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[20]),2);
        bufp->chgCData(oldp+1889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[21]),2);
        bufp->chgCData(oldp+1890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[22]),2);
        bufp->chgCData(oldp+1891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[23]),2);
        bufp->chgCData(oldp+1892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[24]),2);
        bufp->chgCData(oldp+1893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[25]),2);
        bufp->chgCData(oldp+1894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[26]),2);
        bufp->chgCData(oldp+1895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[27]),2);
        bufp->chgCData(oldp+1896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[28]),2);
        bufp->chgCData(oldp+1897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[29]),2);
        bufp->chgCData(oldp+1898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[30]),2);
        bufp->chgCData(oldp+1899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[31]),2);
        bufp->chgCData(oldp+1900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history),2);
        bufp->chgCData(oldp+1901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__prdt_result_history),2);
        bufp->chgIData(oldp+1902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgBit(oldp+1904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__dec_ecall));
        bufp->chgBit(oldp+1905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__dec_mret));
        bufp->chgBit(oldp+1906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_6_5_11));
        bufp->chgBit(oldp+1907,((IData)((0U == (0x60U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+1908,(((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                     >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h77e5988a__0))));
        bufp->chgBit(oldp+1909,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h77e5988a__0) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                    >> 2U))));
        bufp->chgBit(oldp+1910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_4_2_011));
        bufp->chgBit(oldp+1911,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                  >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h544edb2e__0))));
        bufp->chgBit(oldp+1912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_1_0_11));
        bufp->chgIData(oldp+1913,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout) 
                                                 | ((0x800U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                          >> 0x14U)))))),32);
        bufp->chgIData(oldp+1914,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                >> 0x14U))),32);
        bufp->chgIData(oldp+1915,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                         >> 7U)))))),32);
        bufp->chgIData(oldp+1916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0]),32);
        bufp->chgIData(oldp+1917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[1]),32);
        bufp->chgIData(oldp+1918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[2]),32);
        bufp->chgIData(oldp+1919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[3]),32);
        bufp->chgIData(oldp+1920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[4]),32);
        bufp->chgIData(oldp+1921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[5]),32);
        bufp->chgIData(oldp+1922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[6]),32);
        bufp->chgIData(oldp+1923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[7]),32);
        bufp->chgIData(oldp+1924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[8]),32);
        bufp->chgIData(oldp+1925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[9]),32);
        bufp->chgIData(oldp+1926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[10]),32);
        bufp->chgIData(oldp+1927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[11]),32);
        bufp->chgIData(oldp+1928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[12]),32);
        bufp->chgIData(oldp+1929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[13]),32);
        bufp->chgIData(oldp+1930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[14]),32);
        bufp->chgIData(oldp+1931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[15]),32);
        bufp->chgIData(oldp+1932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[16]),32);
        bufp->chgIData(oldp+1933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[17]),32);
        bufp->chgIData(oldp+1934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[18]),32);
        bufp->chgIData(oldp+1935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[19]),32);
        bufp->chgIData(oldp+1936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[20]),32);
        bufp->chgIData(oldp+1937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[21]),32);
        bufp->chgIData(oldp+1938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[22]),32);
        bufp->chgIData(oldp+1939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[23]),32);
        bufp->chgIData(oldp+1940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[24]),32);
        bufp->chgIData(oldp+1941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[25]),32);
        bufp->chgIData(oldp+1942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[26]),32);
        bufp->chgIData(oldp+1943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[27]),32);
        bufp->chgIData(oldp+1944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[28]),32);
        bufp->chgIData(oldp+1945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[29]),32);
        bufp->chgIData(oldp+1946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[30]),32);
        bufp->chgIData(oldp+1947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[31]),32);
        bufp->chgIData(oldp+1948,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                    << 0x1fU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__regfile____pinNumber3) 
                                                                                << 1U)))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+1949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_valid_delay__DOT__reg_qout));
        bufp->chgBit(oldp+1950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_skip_delay__DOT__reg_qout));
        bufp->chgBit(oldp+1951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_delay__DOT__reg_qout));
        bufp->chgBit(oldp+1952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_valid));
        bufp->chgBit(oldp+1953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_ebreak_delay__DOT__reg_qout));
        bufp->chgIData(oldp+1954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_pc_delay__DOT__reg_qout),32);
        bufp->chgIData(oldp+1955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_data_delay__DOT__reg_qout),32);
        bufp->chgCData(oldp+1956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_rd_delay__DOT__reg_qout),5);
        bufp->chgIData(oldp+1957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+1958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_ebreak_delay__DOT__reg_s1));
        bufp->chgBit(oldp+1959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_pc_delay__DOT__reg_s1));
        bufp->chgBit(oldp+1960,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout))));
        bufp->chgBit(oldp+1961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_skip_delay__DOT__reg_s1));
        bufp->chgBit(oldp+1962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_data_delay__DOT__reg_s1));
        bufp->chgBit(oldp+1963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_delay__DOT__reg_s1));
        bufp->chgBit(oldp+1964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_rd_delay__DOT__reg_s1));
        bufp->chgBit(oldp+1965,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_qout) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_valid_delay__DOT__reg_qout))));
        bufp->chgBit(oldp+1966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_valid_delay__DOT__reg_s1));
        bufp->chgBit(oldp+1967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgBit(oldp+1968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+1969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+1970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+1971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+1972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+1973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+1974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+1975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+1976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+1977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+1978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+1979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+1980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+1981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+1982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+1983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+1984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+1985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+1986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+1987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+1988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+1989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+1990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+1991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+1992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+1993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+1994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+1995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+1996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+1997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+1998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+1999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
        bufp->chgBit(oldp+2056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__genblk1__DOT__regfile____pinNumber3));
        bufp->chgIData(oldp+2057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout),32);
        bufp->chgBit(oldp+2058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+2059,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                      == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                   >> 0xfU)))) 
                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                         == (0x1fU 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                >> 0xfU)))) 
                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                            == (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                   >> 0xfU)))) 
                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout)) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout) 
                                              == (0x1fU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                     >> 0xfU))))))) 
                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd) 
                                     == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                  >> 0xfU))) 
                                    & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wait_for_ifetch)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen))))));
        bufp->chgBit(oldp+2060,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_com_ready) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_com_valid)) 
                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_lsu_ready) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_lsu_valid)) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_muldiv_ready) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_muldiv_valid))))));
        bufp->chgBit(oldp+2061,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_com_ready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_com_valid))));
        bufp->chgBit(oldp+2062,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_lsu_ready) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_lsu_valid))));
        bufp->chgBit(oldp+2063,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu_o_valid)) 
                                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv_o_valid))))));
        bufp->chgBit(oldp+2064,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_valid_dff__DOT__reg_qout)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_sh)))));
        bufp->chgBit(oldp+2065,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_alu) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sh))));
        bufp->chgCData(oldp+2066,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_qout))
                                    ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_sh) 
                                        << 2U) | (1U 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_sh))))
                                    : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_qout))
                                        ? ((4U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu_o_valid)) 
                                                  << 2U)) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu_o_valid) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv_o_valid)) 
                                               << 1U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh)))
                                        : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_qout))
                                            ? ((2U 
                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh)) 
                                                   << 1U)) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh))
                                            : 1U)))),3);
        bufp->chgBit(oldp+2067,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_sync_dff__DOT__reg_qout) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_ha44a23a8__0))));
        bufp->chgBit(oldp+2068,(((0x7fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_ha44a23a8__0))));
        bufp->chgQData(oldp+2069,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel0_dff__DOT__reg_qout)
                                    ? (((QData)((IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_rdata 
                                                         >> 0x20U))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_rdata32)))
                                    : (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_rdata32)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_rdata))))),64);
        bufp->chgBit(oldp+2071,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_lsu_sh) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_valid_pre_clr))));
        bufp->chgBit(oldp+2072,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_valid_pre_clr)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_lsu_sh)))));
        bufp->chgBit(oldp+2073,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rdwen_dff__DOT__reg_qout) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv_o_valid)) 
                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rdwen_dff__DOT__reg_qout)) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__sel_com) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_wen_dff__DOT__reg_qout))))));
        bufp->chgCData(oldp+2074,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv_o_valid) 
                                    << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh) 
                                               << 1U) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__sel_com)))),3);
        bufp->chgIData(oldp+2075,((((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv_o_valid))) 
                                    & (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                                                       >> 4U)))) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_qout)) 
                                       | (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul_i_signed1) 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                                                             >> 7U))))) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_qout 
                                                      >> 0x20U))) 
                                          | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_quot))) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__need_corr)
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout)) 
                                             | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_rem))) 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_o_rem))))) 
                                   | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu_o_data) 
                                      | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__sel_com))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_valid_dff__DOT__reg_qout)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_data_dff__DOT__reg_qout
                                             : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_valid_dff__DOT__reg_qout)
                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_data_dff__DOT__reg_qout
                                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_res_dff__DOT__reg_qout)))))),32);
        bufp->chgIData(oldp+2076,((((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv_o_valid))) 
                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_pc_dff__DOT__reg_qout) 
                                   | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh))) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_pc_dff__DOT__reg_qout) 
                                      | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__sel_com))) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_pc_dff__DOT__reg_qout)))),32);
        bufp->chgCData(oldp+2077,((((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv_o_valid))) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rd_dff__DOT__reg_qout)) 
                                   | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh))) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rd_dff__DOT__reg_qout)) 
                                      | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__sel_com))) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_rd_dff__DOT__reg_qout))))),5);
        bufp->chgBit(oldp+2078,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh) 
                                 & ((~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                         >> 0x1fU) 
                                        | (3U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                                  >> 0x1cU)))) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rdwen_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+2079,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__sel_com) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__alu__DOT__alu_wbck_ebreak_dff__DOT__reg_qout))));
        bufp->chgBit(oldp+2080,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_i_valid) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_qout))));
        bufp->chgBit(oldp+2081,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_qout)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_i_valid)))));
        bufp->chgBit(oldp+2082,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd) 
                                  == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                               >> 0xfU))) 
                                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wait_for_ifetch)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen)))));
        bufp->chgBit(oldp+2083,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__disp_com) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__longi_disp)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__com_o_flush))));
        bufp->chgBit(oldp+2084,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_sh) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__longi_disp) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout)))));
        bufp->chgBit(oldp+2085,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout)) 
                                       & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__longi_disp)) 
                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_sh))))));
        bufp->chgIData(oldp+2086,((((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_sh) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_req_hit0)))) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_rdata)) 
                                   | (((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_sh) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_req_hit1)))) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_rdata 
                                                  >> 0x20U))) 
                                      | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_wen))) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rdata))))),32);
        bufp->chgBit(oldp+2087,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rs1_need_wait_nxt) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rs1_need_wait_r_dff__DOT__reg_qout))));
        bufp->chgBit(oldp+2088,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__fencei_need_wait_set) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prdt_fenceifinish))));
        bufp->chgBit(oldp+2089,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prdt_fenceifinish)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__fencei_need_wait_set)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+2090,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
        bufp->chgCData(oldp+2091,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
        bufp->chgCData(oldp+2092,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
        bufp->chgIData(oldp+2093,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
        bufp->chgIData(oldp+2094,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
        bufp->chgBit(oldp+2095,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+2096,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
        bufp->chgBit(oldp+2097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
        bufp->chgBit(oldp+2098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
        bufp->chgBit(oldp+2099,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+2100,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgCData(oldp+2101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
        bufp->chgCData(oldp+2102,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                          >> 1U) - (IData)(2U)))),2);
        bufp->chgBit(oldp+2103,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                                 | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
        bufp->chgCData(oldp+2104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
        bufp->chgCData(oldp+2105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
        bufp->chgWData(oldp+2106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
        bufp->chgBit(oldp+2109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
        bufp->chgCData(oldp+2110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
        bufp->chgSData(oldp+2111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
        bufp->chgSData(oldp+2112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
        bufp->chgBit(oldp+2113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
        bufp->chgBit(oldp+2114,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                       >> 7U))));
        bufp->chgBit(oldp+2115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
        bufp->chgBit(oldp+2116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
        bufp->chgBit(oldp+2117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
        bufp->chgBit(oldp+2118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
        bufp->chgBit(oldp+2119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
        bufp->chgCData(oldp+2120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
        bufp->chgCData(oldp+2121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
        bufp->chgCData(oldp+2122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
        bufp->chgCData(oldp+2123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
        bufp->chgBit(oldp+2124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
        bufp->chgBit(oldp+2125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
        bufp->chgCData(oldp+2126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+2127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+2128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+2129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+2130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+2131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+2132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+2133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
        bufp->chgSData(oldp+2134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+2135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+2136,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+2137,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+2138,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+2139,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+2140,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                           - (IData)(1U)))),4);
        bufp->chgSData(oldp+2141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+2142,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                            >> 2U))),8);
        bufp->chgCData(oldp+2143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+2144,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+2145,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                            >> 3U))),8);
        bufp->chgCData(oldp+2146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+2147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+2148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+2149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+2150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+2151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+2152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
        bufp->chgCData(oldp+2153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+2154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+2155,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+2156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
        bufp->chgBit(oldp+2157,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
        bufp->chgBit(oldp+2158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
        bufp->chgIData(oldp+2159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
        bufp->chgCData(oldp+2160,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
        bufp->chgBit(oldp+2161,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
        bufp->chgBit(oldp+2162,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+2163,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgIData(oldp+2164,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
        bufp->chgBit(oldp+2165,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgIData(oldp+2166,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
        bufp->chgBit(oldp+2167,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
        bufp->chgBit(oldp+2168,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
        bufp->chgBit(oldp+2169,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
        bufp->chgBit(oldp+2170,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
        bufp->chgBit(oldp+2171,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
        bufp->chgBit(oldp+2172,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
        bufp->chgBit(oldp+2173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable));
        bufp->chgBit(oldp+2174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+2175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+2176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
        bufp->chgBit(oldp+2177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+2178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+2179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
        bufp->chgBit(oldp+2180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
        bufp->chgBit(oldp+2181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
        bufp->chgBit(oldp+2182,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
        bufp->chgIData(oldp+2183,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
        bufp->chgCData(oldp+2184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
        bufp->chgBit(oldp+2185,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
        bufp->chgQData(oldp+2186,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),64);
        bufp->chgCData(oldp+2188,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),8);
        bufp->chgCData(oldp+2189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
        bufp->chgBit(oldp+2190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
        bufp->chgBit(oldp+2191,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
        bufp->chgCData(oldp+2192,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
        bufp->chgIData(oldp+2193,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
        bufp->chgCData(oldp+2194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
        bufp->chgIData(oldp+2195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg),32);
        bufp->chgQData(oldp+2196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg),64);
        bufp->chgCData(oldp+2198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg),8);
        bufp->chgCData(oldp+2199,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                   << 1U)),2);
        bufp->chgBit(oldp+2200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
        bufp->chgBit(oldp+2201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
        bufp->chgBit(oldp+2202,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+2203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+2204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
        bufp->chgIData(oldp+2205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+2206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+2207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
        bufp->chgIData(oldp+2208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
        bufp->chgBit(oldp+2209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+2210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
        bufp->chgBit(oldp+2211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+2212,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
        bufp->chgIData(oldp+2213,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
        bufp->chgBit(oldp+2214,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                    >> 2U))));
        bufp->chgBit(oldp+2215,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
        bufp->chgIData(oldp+2216,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
        bufp->chgBit(oldp+2217,((0x7800U == (0x7fffU 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0xdU)))));
        bufp->chgSData(oldp+2218,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                             >> 3U))),10);
        bufp->chgSData(oldp+2219,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 3U))),10);
        bufp->chgBit(oldp+2220,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
        bufp->chgBit(oldp+2221,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
        bufp->chgBit(oldp+2222,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                                 & (0U == ((0x10U & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 0x1bU)) 
                                           | ((0xcU 
                                               & (8U 
                                                  ^ 
                                                  (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                              | ((2U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x17U)) 
                                                 | (1U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0xcU)))))))));
        bufp->chgBit(oldp+2223,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                    >> 1U))));
        bufp->chgBit(oldp+2224,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
        bufp->chgIData(oldp+2225,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
        bufp->chgBit(oldp+2226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+2227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+2228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
        bufp->chgBit(oldp+2229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+2230,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1bU)) 
                                        | ((0xcU & 
                                            (8U ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x17U)) 
                                              | (1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0xcU))))))));
        bufp->chgBit(oldp+2231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
        bufp->chgBit(oldp+2232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+2233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
        bufp->chgBit(oldp+2234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgCData(oldp+2235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
        bufp->chgBit(oldp+2236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
        bufp->chgCData(oldp+2237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
        bufp->chgBit(oldp+2238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arready));
        bufp->chgBit(oldp+2239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_clr));
        bufp->chgBit(oldp+2240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__aw_sh));
        bufp->chgBit(oldp+2241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__w_sh));
        bufp->chgBit(oldp+2242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__ar_sh));
        bufp->chgBit(oldp+2243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ar_sh));
        bufp->chgIData(oldp+2244,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
        bufp->chgIData(oldp+2245,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
        bufp->chgBit(oldp+2246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
        bufp->chgIData(oldp+2247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
        bufp->chgBit(oldp+2248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
        bufp->chgBit(oldp+2249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
        bufp->chgCData(oldp+2250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+2251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
        bufp->chgCData(oldp+2252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
        bufp->chgCData(oldp+2253,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2254,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                   >> 0x18U)),8);
        bufp->chgIData(oldp+2255,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                       << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
        bufp->chgIData(oldp+2256,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
        bufp->chgIData(oldp+2257,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
        bufp->chgCData(oldp+2258,((0xffU & ((IData)(0xdU) 
                                            + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                               << 1U)))),8);
        bufp->chgBit(oldp+2259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w));
        bufp->chgBit(oldp+2260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
        bufp->chgCData(oldp+2261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
        bufp->chgBit(oldp+2262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
        bufp->chgSData(oldp+2263,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                             >> 1U))),13);
        bufp->chgSData(oldp+2264,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                              >> 0xcU))),13);
        bufp->chgCData(oldp+2265,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 0xaU))),2);
        bufp->chgIData(oldp+2266,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
        bufp->chgCData(oldp+2267,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),5);
        bufp->chgBit(oldp+2268,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0x14U == (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
        bufp->chgBit(oldp+2269,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0x10U == (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
        bufp->chgCData(oldp+2270,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                     & (0xcU == (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                    << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                & (8U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                               << 2U) 
                                              | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                   & (4U 
                                                      == 
                                                      (0x1cU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                                  << 1U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                    & (0U 
                                                       == 
                                                       (0x1cU 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))))))),4);
        bufp->chgBit(oldp+2271,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0x18U == (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
        bufp->chgCData(oldp+2272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
        bufp->chgCData(oldp+2273,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
        bufp->chgCData(oldp+2274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
        bufp->chgCData(oldp+2275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+2276,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                    ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                        << 0x18U) | 
                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                            << 8U) 
                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                    : 0U)),32);
        bufp->chgBit(oldp+2277,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
        bufp->chgBit(oldp+2278,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2279,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2280,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2281,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2282,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2283,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2284,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2285,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2286,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2287,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2288,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2289,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2290,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2291,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2292,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2293,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                 & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+2294,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_clr) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__master_ring_clr))));
        bufp->chgBit(oldp+2295,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__master_ring_clr)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_clr)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgCData(oldp+2296,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                      | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
        bufp->chgBit(oldp+2297,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
        bufp->chgIData(oldp+2298,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
        bufp->chgBit(oldp+2299,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
        bufp->chgBit(oldp+2300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
        bufp->chgBit(oldp+2301,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
        bufp->chgBit(oldp+2302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
        bufp->chgBit(oldp+2303,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
        bufp->chgBit(oldp+2304,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
        bufp->chgCData(oldp+2305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
        bufp->chgBit(oldp+2306,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
        bufp->chgBit(oldp+2307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
        bufp->chgCData(oldp+2308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
        bufp->chgQData(oldp+2309,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),64);
        bufp->chgBit(oldp+2311,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
        bufp->chgBit(oldp+2312,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
        bufp->chgBit(oldp+2313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
        bufp->chgBit(oldp+2314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
        bufp->chgCData(oldp+2315,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
        bufp->chgBit(oldp+2316,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
        bufp->chgBit(oldp+2317,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
        bufp->chgBit(oldp+2318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
        bufp->chgBit(oldp+2319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+2320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
        bufp->chgBit(oldp+2321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+2322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
        bufp->chgBit(oldp+2323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+2324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
        bufp->chgBit(oldp+2325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+2326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
        bufp->chgBit(oldp+2327,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
        bufp->chgBit(oldp+2328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
        bufp->chgBit(oldp+2329,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
        bufp->chgBit(oldp+2330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
        bufp->chgBit(oldp+2331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
        bufp->chgBit(oldp+2332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
        bufp->chgBit(oldp+2333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
        bufp->chgBit(oldp+2334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
        bufp->chgCData(oldp+2335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
        bufp->chgCData(oldp+2336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
        bufp->chgBit(oldp+2337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
        bufp->chgBit(oldp+2338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
        bufp->chgBit(oldp+2339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
        bufp->chgBit(oldp+2340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
        bufp->chgBit(oldp+2341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
        bufp->chgBit(oldp+2342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
        bufp->chgBit(oldp+2343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
        bufp->chgCData(oldp+2344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+2345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+2346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
        bufp->chgBit(oldp+2347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
        bufp->chgBit(oldp+2348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
        bufp->chgBit(oldp+2349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
        bufp->chgBit(oldp+2350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
        bufp->chgBit(oldp+2351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+2352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
        bufp->chgBit(oldp+2353,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2354,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2355,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2356,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2357,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2358,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2359,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2360,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2361,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2362,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2363,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2364,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2365,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2366,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2367,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2368,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2369,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2370,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2371,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2372,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2373,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2374,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2375,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2376,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2377,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2378,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                 & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+2379,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2380,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2381,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2382,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2383,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2384,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                 & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
        bufp->chgBit(oldp+2385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rvalid));
        bufp->chgQData(oldp+2386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rdata),64);
        bufp->chgBit(oldp+2388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_rvalid));
        bufp->chgBit(oldp+2389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_rready));
        bufp->chgQData(oldp+2390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_rdata),64);
        bufp->chgBit(oldp+2392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_o_ready));
        bufp->chgBit(oldp+2393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_com_ready));
        bufp->chgBit(oldp+2394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_lsu_ready));
        bufp->chgBit(oldp+2395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prdt_fenceifinish));
        bufp->chgBit(oldp+2396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_to_flush_sh));
        bufp->chgBit(oldp+2397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wait_for_ifetch));
        bufp->chgBit(oldp+2398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__master_ring_clr));
        bufp->chgBit(oldp+2399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu_o_valid));
        bufp->chgIData(oldp+2400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu_o_data),32);
        bufp->chgBit(oldp+2401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_com_sh));
        bufp->chgBit(oldp+2402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_sh));
        bufp->chgBit(oldp+2403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sh));
        bufp->chgBit(oldp+2404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_valid_pre_clr));
        bufp->chgBit(oldp+2405,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_com_sh) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_valid_pre_clr))));
        bufp->chgBit(oldp+2406,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_valid_pre_clr)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_com_sh)))));
        bufp->chgBit(oldp+2407,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sh) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_sh))));
        bufp->chgBit(oldp+2408,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_sh)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sh)))));
        bufp->chgBit(oldp+2409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT____Vcellinp__bjp_prdt_flush_dff____pinNumber3));
        bufp->chgBit(oldp+2410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh));
        bufp->chgBit(oldp+2411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__r_sh));
        bufp->chgBit(oldp+2412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__b_sh));
        bufp->chgCData(oldp+2413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__state_wnxt),6);
        bufp->chgBit(oldp+2414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__axi_read_valid));
        bufp->chgBit(oldp+2415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__axi_write_valid));
        bufp->chgBit(oldp+2416,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__axi_read_valid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__axi_write_valid))));
        bufp->chgIData(oldp+2417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_rdata32),32);
        bufp->chgBit(oldp+2418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_wen));
        bufp->chgQData(oldp+2419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data),64);
        bufp->chgQData(oldp+2421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__write_miss_sram_data),64);
        bufp->chgQData(oldp+2423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram_wen),64);
        bufp->chgBit(oldp+2425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__48__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__49__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__50__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__51__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__52__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__53__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__54__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__55__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__56__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__57__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__58__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__59__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__60__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__61__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__62__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__63__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_lsu_sh));
        bufp->chgBit(oldp+2490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_i_valid));
        bufp->chgBit(oldp+2491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__sel_com));
        bufp->chgBit(oldp+2492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__if_o_sh));
        bufp->chgBit(oldp+2493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__longi_disp));
        bufp->chgCData(oldp+2494,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__oitf_rd_dff____pinNumber3) 
                                    << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__oitf_rd_dff____pinNumber3) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__oitf_rd_dff____pinNumber3) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__oitf_rd_dff____pinNumber3))))),4);
        bufp->chgCData(oldp+2495,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__oitf_dff____pinNumber3) 
                                    << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__oitf_dff____pinNumber3) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__oitf_dff____pinNumber3) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__oitf_dff____pinNumber3))))),4);
        bufp->chgCData(oldp+2496,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__oitf_dff____pinNumber4) 
                                    << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__oitf_dff____pinNumber4) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__oitf_dff____pinNumber4) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__oitf_dff____pinNumber4))))),4);
        bufp->chgBit(oldp+2497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__oitf_dff____pinNumber3));
        bufp->chgBit(oldp+2498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__oitf_dff____pinNumber4));
        bufp->chgBit(oldp+2499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__oitf_rd_dff____pinNumber3));
        bufp->chgBit(oldp+2500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__oitf_dff____pinNumber3));
        bufp->chgBit(oldp+2501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__oitf_dff____pinNumber4));
        bufp->chgBit(oldp+2502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__oitf_rd_dff____pinNumber3));
        bufp->chgBit(oldp+2503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__oitf_dff____pinNumber3));
        bufp->chgBit(oldp+2504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__oitf_dff____pinNumber4));
        bufp->chgBit(oldp+2505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__oitf_rd_dff____pinNumber3));
        bufp->chgBit(oldp+2506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__oitf_dff____pinNumber3));
        bufp->chgBit(oldp+2507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__oitf_dff____pinNumber4));
        bufp->chgBit(oldp+2508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__oitf_rd_dff____pinNumber3));
        bufp->chgBit(oldp+2509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_sh));
        bufp->chgCData(oldp+2510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__state_nxt),6);
        bufp->chgBit(oldp+2511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_sh));
        bufp->chgBit(oldp+2512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_wen));
        bufp->chgQData(oldp+2513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data),64);
        bufp->chgQData(oldp+2515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram_wen),64);
        bufp->chgBit(oldp+2517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__48__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__49__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__50__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__51__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__52__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__53__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__54__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__55__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__56__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__57__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__58__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__59__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__60__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__61__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__62__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__63__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__x64_sram____pinNumber3));
        bufp->chgBit(oldp+2581,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_wen) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT____VdfgTmp_h50ac64bd__0))));
        bufp->chgBit(oldp+2582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rs1_need_wait_nxt));
        bufp->chgBit(oldp+2583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__ifu_need_wait));
        bufp->chgBit(oldp+2584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__ifetch_req_set));
        bufp->chgBit(oldp+2585,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__ifetch_req_set) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_sh))));
        bufp->chgBit(oldp+2586,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_sh)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__ifetch_req_set)))));
        bufp->chgBit(oldp+2587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_wait_set));
        bufp->chgBit(oldp+2588,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_wait_set) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_sh))));
        bufp->chgBit(oldp+2589,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_sh)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_wait_set)))));
        bufp->chgCData(oldp+2590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
        bufp->chgCData(oldp+2591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
        bufp->chgCData(oldp+2592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
        bufp->chgBit(oldp+2593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
        bufp->chgBit(oldp+2594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
        bufp->chgBit(oldp+2595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
        bufp->chgBit(oldp+2596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
        bufp->chgBit(oldp+2597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
        bufp->chgBit(oldp+2598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
        bufp->chgCData(oldp+2599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
        bufp->chgCData(oldp+2600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
        bufp->chgCData(oldp+2601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
        bufp->chgIData(oldp+2602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
        bufp->chgCData(oldp+2603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    }
    bufp->chgBit(oldp+2604,(vlSelf->clock));
    bufp->chgBit(oldp+2605,(vlSelf->reset));
    bufp->chgSData(oldp+2606,(vlSelf->externalPins_gpio_out),16);
    bufp->chgSData(oldp+2607,(vlSelf->externalPins_gpio_in),16);
    bufp->chgCData(oldp+2608,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->chgCData(oldp+2609,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->chgCData(oldp+2610,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->chgCData(oldp+2611,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->chgCData(oldp+2612,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->chgCData(oldp+2613,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->chgCData(oldp+2614,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->chgCData(oldp+2615,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->chgBit(oldp+2616,(vlSelf->externalPins_ps2_clk));
    bufp->chgBit(oldp+2617,(vlSelf->externalPins_ps2_data));
    bufp->chgCData(oldp+2618,(vlSelf->externalPins_vga_r),8);
    bufp->chgCData(oldp+2619,(vlSelf->externalPins_vga_g),8);
    bufp->chgCData(oldp+2620,(vlSelf->externalPins_vga_b),8);
    bufp->chgBit(oldp+2621,(vlSelf->externalPins_vga_hsync));
    bufp->chgBit(oldp+2622,(vlSelf->externalPins_vga_vsync));
    bufp->chgBit(oldp+2623,(vlSelf->externalPins_vga_valid));
    bufp->chgBit(oldp+2624,(vlSelf->externalPins_uart_rx));
    bufp->chgBit(oldp+2625,(vlSelf->externalPins_uart_tx));
    bufp->chgBit(oldp+2626,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                   | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                        : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->chgBit(oldp+2627,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->chgBit(oldp+2628,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->chgBit(oldp+2629,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->chgBit(oldp+2630,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->chgCData(oldp+2631,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                 : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U))),2);
    bufp->chgBit(oldp+2632,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->chgBit(oldp+2633,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_dff__DOT__reg_qout)) 
                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__master_ring_dff__DOT__reg_qout)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid))))));
    bufp->chgBit(oldp+2634,(((3U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                << 0x1eU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                      << 0x1aU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                               << 0x14U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                  << 0x12U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                              << 0xaU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                     << 1U)))))) 
                             & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                & ((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                             : 0U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                   ? 0U
                                                   : 3U)
                                               : 0U))) 
                                   & ((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                          << 0xfU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                        >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)) 
                                      & (0xffffffffffffffffULL 
                                         == vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata)))))));
    bufp->chgBit(oldp+2635,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_set) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_clr))));
    bufp->chgBit(oldp+2636,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_clr)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_set))));
    bufp->chgCData(oldp+2637,(((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_qout))
                                ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_qout))
                                    ? 1U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_qout))
                                             ? 1U : 
                                            ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_qout))
                                              ? 1U : 
                                             ((8U & 
                                               ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh)) 
                                                << 3U)) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh)))))
                                : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_qout))
                                    ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_qout))
                                        ? 1U : ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_qout))
                                                 ? 1U
                                                 : 
                                                ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__r_sh)) 
                                                  << 3U) 
                                                 | ((4U 
                                                     & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__r_sh)) 
                                                        << 2U)) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__r_sh) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh))))))
                                    : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_qout))
                                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_qout))
                                            ? 1U : 
                                           (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__ar_sh) 
                                             << 2U) 
                                            | (2U & 
                                               ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__ar_sh)) 
                                                << 1U))))
                                        : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_qout))
                                            ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__ar_sh) 
                                                << 2U) 
                                               | ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__ar_sh)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_arvalid)) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_arvalid)))))
                                            : 1U))))),4);
    bufp->chgBit(oldp+2638,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->chgCData(oldp+2639,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((9U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U))))))))),4);
    bufp->chgBit(oldp+2640,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->chgBit(oldp+2641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->chgBit(oldp+2642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->chgSData(oldp+2643,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->chgCData(oldp+2644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->chgCData(oldp+2645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->chgIData(oldp+2646,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->chgIData(oldp+2647,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                             << 1U)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->chgIData(oldp+2648,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
}

void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_cleanup\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
