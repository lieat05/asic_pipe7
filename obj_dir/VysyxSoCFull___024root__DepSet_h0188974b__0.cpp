// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___ico_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
}

void VysyxSoCFull___024root___eval_ico(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VysyxSoCFull___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VysyxSoCFull___024root___eval_act(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 2048> VysyxSoCFull__ConstPool__TABLE_h10c88e1c_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h4abec798_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h05f4911a_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*10:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready;
    __Vdly__ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready = 0;
    SData/*13:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT___asic_spi_sck;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0;
    VlWide<4>/*127:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data;
    VL_ZERO_W(128, __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    IData/*16:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0;
    SData/*12:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = vlSelf->ysyxSoCFull__DOT___asic_spi_sck;
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi 
        = vlSelf->ysyxSoCFull__DOT___asic_spi_mosi;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = (1U & 
                                               ((~ (IData)(vlSelf->reset)) 
                                                & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                                    & ((0U 
                                                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)))
                                                    ? 
                                                   (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))));
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk) 
                                                   | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))
                                                ? (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & (((0x800U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                         ? 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                         - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                         - (IData)(1U))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                        - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                        - (IData)(1U)))))
                                                : (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                          >> 2U) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                      | ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                          >> 1U) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d))))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel)) 
                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse))) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset))
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 3U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 2U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read))
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                                   & (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir))))
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    __Vtableidx3 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) 
                     << 0xaU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                  << 9U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                             << 8U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                << 7U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->reset)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt 
        = VysyxSoCFull__ConstPool__TABLE_h10c88e1c_0
        [__Vtableidx3];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                         | (((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                             & (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx = 4U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0x2774U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 1U;
    } else {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
            = ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                ? 0x30cU : (0x1ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
                                        - (IData)(1U))));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        }
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
            = ((0xeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q) 
                        << 1U)) | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
            }
        } else {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)));
        }
        if ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
                = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                   >> 0x10U);
        } else if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q;
        }
        if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
        } else if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 1U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
        } else if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 2U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
        } else if ((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                             >> 3U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                    (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                           >> 5U))]) | ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk)
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                                   | ((((2U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                                        & (0U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                                        ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                                        : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                                      >> 0x1fU))
                                                : (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                        << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 
                            = (0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU));
                        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 1U;
                        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 
                            = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU));
                    }
                }
            }
        }
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    }
    if (vlSelf->reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0xffffU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0x27fU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
    } else {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr) 
                                   | (0xeU ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xfU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | (((IData)((0x18U == (0x18U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                   << 7U) | (((IData)((0x14U == (0x14U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                              << 6U) | (((IData)((0x11U 
                                                  == 
                                                  (0x11U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                         << 5U) | ((IData)(
                                                           (0x10U 
                                                            != 
                                                            (0x12U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                                   << 4U)))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
                     & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                    & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0xffffU & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                           : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                              - (IData)(1U))));
        if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                    >> 8U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 1U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                - (IData)(1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                         : ((0U != (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))
                             ? (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                             : 0x80U)));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t) 
                             - (IData)(1U)));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0xffU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x3f00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
        }
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0xffffU & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))))
                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc) 
                                                - (IData)(1U))));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
        } else if ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)));
                __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                - (IData)(1U)));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r;
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 2U;
                if ((9U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                 >> 0xaU));
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = ((0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q)) 
                       | ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r)) 
                          << 0xaU));
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = 0U;
                        } else {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q 
                                = ((~ ((IData)(1U) 
                                       << (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                                 >> 0xaU)))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q));
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 4U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = (0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                    }
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                            = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU));
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 5U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                 >> 0xaU));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 1U));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 3U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                 >> 0xaU));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xcU));
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
            } else if ((0x32U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                if ((0x28U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 2U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x400U | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q 
                        = (((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                            | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))
                            ? 1U : ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                                     ? 0U : 7U));
                    if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                                  | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                                ? 0x21U : 0U);
                    }
                }
                if ((0x28U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                    if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                                  | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))))) {
                        if ((0xaU != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q 
                            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                               >> 0xaU)))));
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        if ((0x32U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = 1U;
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q 
                        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q)
                                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i))));
                } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = 0U;
                }
            }
        }
        if (((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r;
        }
        if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 1U;
        } else if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                         >> 6U));
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                = (0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w);
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                = (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w);
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (7U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss 
                    = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w);
            }
        }
        if ((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
              & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 1U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = (1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = (1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                         >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    __Vtableidx4 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                     << 5U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int) 
                                            << 2U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                               << 1U) 
                                              | (IData)(vlSelf->reset))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir 
        = VysyxSoCFull__ConstPool__TABLE_h4abec798_0
        [__Vtableidx4];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                            >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->externalPins_uart_rx));
    vlSelf->__Vtableidx1 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h05f4911a_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                                 & (1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                                | ((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                               | (((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                      >> 8U)) 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q = 0U;
    } else {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0xeU;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (4U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q 
            = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                  ? 0U : 0xffffU) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                        ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                          ? 0U : 0xffffU)) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                         ? 0U : 0xffffU))) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                   ? 0U : 0xffffU));
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q 
                            = (3U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i) 
                                        >> 2U)));
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q 
                        = (0xffffU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q)
                                       : vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
                }
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 1U;
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w));
            }
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 0U;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
        }
    }
    vlSelf->__VdfgTmp_ha17ae98a__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT___asic_spi_sck = __Vdly__ysyxSoCFull__DOT___asic_spi_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((0x400U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((0x200U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0 
        = ((0x80U & ((~ (IData)((0U != (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))))) 
                     << 7U)) | (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                        - ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U)))) : ((0x200U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (2U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                                            >> 1U)));
    vlSelf->ysyxSoCFull__DOT___asic_spi_ss = (0xffU 
                                              & (~ 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                                                  & ((- (IData)(
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                    >> 0xdU)))) 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                       >> 0xdU)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q;
    vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss 
        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss));
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__difftest_dut_regs_TOP(IData/*31:0*/ diff_pc, IData/*31:0*/ z0, IData/*31:0*/ ra, IData/*31:0*/ sp, IData/*31:0*/ gp, IData/*31:0*/ tp, IData/*31:0*/ t0, IData/*31:0*/ t1, IData/*31:0*/ t2, IData/*31:0*/ fp, IData/*31:0*/ s1, IData/*31:0*/ a0, IData/*31:0*/ a1, IData/*31:0*/ a2, IData/*31:0*/ a3, IData/*31:0*/ a4, IData/*31:0*/ a5, IData/*31:0*/ a6, IData/*31:0*/ a7, IData/*31:0*/ s2, IData/*31:0*/ s3, IData/*31:0*/ s4, IData/*31:0*/ s5, IData/*31:0*/ s6, IData/*31:0*/ s7, IData/*31:0*/ s8, IData/*31:0*/ s9, IData/*31:0*/ s10, IData/*31:0*/ a11, IData/*31:0*/ t3, IData/*31:0*/ t4, IData/*31:0*/ t5, IData/*31:0*/ t6);
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__difftest_dut_sync_TOP(IData/*31:0*/ diff_tag, IData/*31:0*/ diff_sync_data);
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__ebreak_TOP(IData/*31:0*/ diff_pc, IData/*31:0*/ diff_halt_ret);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v128;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v128 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256 = 0;
    CData/*0:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256 = 0;
    CData/*4:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256;
    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257 = 0;
    CData/*0:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257 = 0;
    CData/*4:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257;
    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257 = 0;
    CData/*3:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258 = 0;
    CData/*0:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258 = 0;
    IData/*28:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259 = 0;
    CData/*0:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259 = 0;
    CData/*4:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259;
    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259 = 0;
    CData/*3:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128 = 0;
    CData/*1:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128 = 0;
    CData/*1:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v32;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v32 = 0;
    CData/*1:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v32;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v32;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128 = 0;
    CData/*0:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128 = 0;
    CData/*4:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128;
    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129 = 0;
    CData/*0:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129 = 0;
    CData/*4:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129;
    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129 = 0;
    CData/*3:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130 = 0;
    CData/*0:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130 = 0;
    IData/*28:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131 = 0;
    CData/*0:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131 = 0;
    CData/*4:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131;
    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131 = 0;
    CData/*3:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132 = 0;
    CData/*0:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132 = 0;
    IData/*28:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133 = 0;
    CData/*0:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133 = 0;
    CData/*4:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133;
    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133 = 0;
    CData/*3:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134 = 0;
    CData/*0:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134 = 0;
    IData/*28:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135 = 0;
    CData/*0:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135 = 0;
    CData/*4:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135;
    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135 = 0;
    CData/*3:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136 = 0;
    CData/*0:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136 = 0;
    IData/*28:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137 = 0;
    CData/*0:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137 = 0;
    CData/*4:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137;
    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137 = 0;
    CData/*3:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137 = 0;
    // Body
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v32 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v128 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258 = 0U;
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__difftest_dut_regs_TOP(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_pc_delay__DOT__reg_qout, 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [1U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [2U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [3U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [4U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [5U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [6U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [7U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [8U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [9U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0xaU], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0xbU], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0xcU], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0xdU], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0xeU], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0xfU], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x10U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x11U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x12U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x13U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x14U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x15U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x16U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x17U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x18U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x19U], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x1aU], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x1bU], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x1cU], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x1dU], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x1eU], 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                                                                                [0x1fU]);
    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__difftest_dut_sync_TOP(
                                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_valid) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_skip_delay__DOT__reg_qout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_delay__DOT__reg_qout) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_rd_delay__DOT__reg_qout)))), vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_data_delay__DOT__reg_qout);
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_ebreak_delay__DOT__reg_qout) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__ebreak_TOP(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_pc_delay__DOT__reg_qout, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout);
    }
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136 = 0U;
    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)))) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_fencei) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__unnamedblk3__DOT__i = 0x40U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_valid_delay__DOT__reg_qout 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_valid_delay__DOT__reg_s1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__diff_valid_delay____pinNumber3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rs1_need_wait_r_dff__DOT__reg_qout 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rs1_need_wait_r_dff__DOT__reg_s1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rs1_need_wait_nxt)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__unnamedblk1__DOT__i = 0x40U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__unnamedblk1__DOT__i = 0x40U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v0 = 1U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_en_dff__DOT__reg_qout) {
        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128 
            = ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table
                [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_index_dff__DOT__reg_qout]
                [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__prdt_result_history])
                ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table
                    [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_index_dff__DOT__reg_qout]
                    [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__prdt_result_history])
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_res_dff__DOT__reg_qout)
                        ? 3U : 2U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_res_dff__DOT__reg_qout)
                                       ? 3U : 1U)) : 
               ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table
                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_index_dff__DOT__reg_qout]
                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__prdt_result_history])
                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_res_dff__DOT__reg_qout)
                     ? 2U : 0U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_res_dff__DOT__reg_qout)
                                    ? 1U : 0U)));
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128 = 1U;
        __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__prdt_result_history;
        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_index_dff__DOT__reg_qout;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[1U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[1U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[1U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[1U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[2U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[2U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[2U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[2U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[3U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[3U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[3U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[3U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[4U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[4U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[4U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[4U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[5U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[5U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[5U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[5U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[6U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[6U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[6U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[6U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[7U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[7U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[7U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[7U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[8U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[8U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[8U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[8U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[9U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[9U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[9U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[9U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xaU][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xaU][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xaU][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xaU][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xbU][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xbU][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xbU][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xbU][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xcU][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xcU][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xcU][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xcU][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xdU][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xdU][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xdU][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xdU][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xeU][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xeU][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xeU][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xeU][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xfU][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xfU][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xfU][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0xfU][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x10U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x10U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x10U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x10U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x11U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x11U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x11U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x11U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x12U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x12U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x12U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x12U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x13U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x13U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x13U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x13U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x14U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x14U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x14U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x14U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x15U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x15U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x15U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x15U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x16U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x16U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x16U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x16U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x17U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x17U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x17U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x17U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x18U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x18U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x18U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x18U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x19U][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x19U][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x19U][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x19U][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1aU][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1aU][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1aU][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1aU][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1bU][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1bU][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1bU][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1bU][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1cU][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1cU][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1cU][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1cU][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1dU][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1dU][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1dU][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1dU][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1eU][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1eU][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1eU][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1eU][3U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1fU][0U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1fU][1U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1fU][2U] = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[0x1fU][3U] = 1U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__pattern_history_table__v128;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v0 = 1U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_en_dff__DOT__reg_qout) {
        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v32 
            = ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history) 
                      << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_res_dff__DOT__reg_qout));
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v32 = 1U;
        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v32 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_index_dff__DOT__reg_qout;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0xfU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x10U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x11U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x12U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x13U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x14U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x15U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x16U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x17U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x18U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x19U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x1aU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x1bU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x1cU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x1dU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x1eU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[0x1fU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v32) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v32] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table__v32;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v0 = 1U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v0 = 1U;
    } else {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_fencei) {
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v128 = 1U;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit_dff__DOT__reg_qout) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_req_valid))) {
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256 = 1U;
            __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256 = 0U;
            __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit1_dff__DOT__reg_qout;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256 
                = (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout 
                            >> 2U));
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257 
                = ((0xfU == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend
                             [(0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout 
                                        >> 2U))][(1U 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit1_dff__DOT__reg_qout)))]))
                    ? 0xfU : (0xfU & ((IData)(1U) + 
                                      (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend
                                       [(0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout 
                                                  >> 2U))]
                                       [(1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit1_dff__DOT__reg_qout)))]))));
            __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257 = 0U;
            __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit1_dff__DOT__reg_qout)));
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257 
                = (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout 
                            >> 2U));
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_wen) {
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258 
                = (0x10U | (0x1fffffe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout 
                                           >> 3U)));
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258 = 1U;
            __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_miss1_dff__DOT__reg_qout;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258 
                = (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout 
                            >> 2U));
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259 
                = (0xfU & ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend
                           [(0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout 
                                      >> 2U))][(1U 
                                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_miss1_dff__DOT__reg_qout)))]));
            __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259 = 0U;
            __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_miss1_dff__DOT__reg_qout)));
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259 
                = (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout 
                            >> 2U));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_hit_dff__DOT__reg_qout) 
             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_qout) 
                >> 2U))) {
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128 = 1U;
            __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128 = 0U;
            __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel1_dff__DOT__reg_qout;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout;
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129 
                = ((0xfU == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                             [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout]
                             [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel0_dff__DOT__reg_qout]))
                    ? 0xfU : (0xfU & ((IData)(1U) + 
                                      (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                                       [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout]
                                       [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel0_dff__DOT__reg_qout]))));
            __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129 = 0U;
            __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel0_dff__DOT__reg_qout;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_hit_dff__DOT__reg_qout) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_qout) 
                       >> 2U))) {
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130 
                = (0x10U | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_tag_dff__DOT__reg_qout 
                            << 5U));
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130 = 1U;
            __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel1_dff__DOT__reg_qout;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout;
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131 
                = (0xfU & ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout]
                           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel0_dff__DOT__reg_qout]));
            __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131 = 0U;
            __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel0_dff__DOT__reg_qout;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_dff__DOT__reg_qout) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_wb_dff__DOT__reg_qout)) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_qout) 
                       >> 2U))) {
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132 
                = (0x10U | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_tag_dff__DOT__reg_qout 
                            << 5U));
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132 = 1U;
            __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel1_dff__DOT__reg_qout;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout;
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133 
                = (0xfU & ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout]
                           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel0_dff__DOT__reg_qout]));
            __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133 = 0U;
            __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel0_dff__DOT__reg_qout;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_rvalid) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_rd_dff__DOT__reg_qout) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_wbrd_dff__DOT__reg_qout)))) {
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134 
                = (0x10U | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_tag_dff__DOT__reg_qout 
                            << 5U));
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134 = 1U;
            __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel1_dff__DOT__reg_qout;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout;
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135 
                = (0xfU & ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout]
                           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel0_dff__DOT__reg_qout]));
            __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135 = 0U;
            __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel0_dff__DOT__reg_qout;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_rvalid) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_miss_dff__DOT__reg_qout) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_miss_wb_dff__DOT__reg_qout)))) {
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136 
                = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_tag_dff__DOT__reg_qout 
                   << 5U);
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136 = 1U;
            __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel1_dff__DOT__reg_qout;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout;
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137 
                = (0xfU & ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout]
                           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel0_dff__DOT__reg_qout]));
            __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137 = 0U;
            __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel0_dff__DOT__reg_qout;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout;
        }
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[1U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[1U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[2U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[2U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[3U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[3U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[4U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[4U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[5U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[5U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[6U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[6U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[7U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[7U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[8U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[8U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[9U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[9U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0xaU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0xaU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0xbU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0xbU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0xcU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0xcU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0xdU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0xdU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0xeU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0xeU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0xfU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0xfU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x10U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x10U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x11U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x11U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x12U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x12U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x13U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x13U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x14U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x14U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x15U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x15U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x16U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x16U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x17U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x17U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x18U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x18U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x19U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x19U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x1aU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x1aU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x1bU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x1bU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x1cU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x1cU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x1dU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x1dU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x1eU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x1eU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x1fU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x1fU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x20U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x20U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x21U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x21U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x22U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x22U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x23U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x23U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x24U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x24U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x25U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x25U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x26U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x26U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x27U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x27U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x28U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x28U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x29U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x29U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x2aU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x2aU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x2bU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x2bU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x2cU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x2cU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x2dU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x2dU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x2eU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x2eU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x2fU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x2fU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x30U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x30U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x31U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x31U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x32U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x32U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x33U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x33U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x34U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x34U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x35U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x35U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x36U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x36U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x37U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x37U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x38U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x38U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x39U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x39U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x3aU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x3aU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x3bU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x3bU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x3cU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x3cU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x3dU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x3dU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x3eU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x3eU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x3fU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[0x3fU][1U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128] 
            = ((~ ((IData)(0xfU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128))) 
               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
               [__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128]
               [__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v128]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129] 
            = (((~ ((IData)(0xfU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                [__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129]
                [__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129]) 
               | (0x1fffffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129) 
                                 << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v129))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v130;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131] 
            = (((~ ((IData)(0xfU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                [__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131]
                [__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131]) 
               | (0x1fffffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131) 
                                 << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v131))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v132;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133] 
            = (((~ ((IData)(0xfU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                [__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133]
                [__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133]) 
               | (0x1fffffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133) 
                                 << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v133))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v134;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135] 
            = (((~ ((IData)(0xfU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                [__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135]
                [__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135]) 
               | (0x1fffffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135) 
                                 << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v135))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v136;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137] 
            = (((~ ((IData)(0xfU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                [__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137]
                [__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137]) 
               | (0x1fffffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137) 
                                 << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend__v137))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_valid_delay__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_num_dff__DOT__reg_qout = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_en) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_num_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_num_dff__DOT__reg_s1)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_num_nxt)
                : 0U);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_num_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__fencei_need_wait_r_dff__DOT__reg_qout = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__fencei_need_wait_set) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prdt_fenceifinish))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__fencei_need_wait_r_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__fencei_need_wait_r_dff__DOT__reg_s1) 
               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__prdt_fenceifinish)) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__fencei_need_wait_set)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__fencei_need_wait_r_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rs1_need_wait_r_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__res_neg_dff__DOT__reg_qout = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul_req_sh) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__res_neg_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__res_neg_dff__DOT__reg_s1) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_neg) 
                  ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplier_neg)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__res_neg_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_miss_dff__DOT__reg_qout = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_sh) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_miss_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_miss_dff__DOT__reg_s1) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_req_hit)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_miss_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits3_dff__DOT__reg_qout 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
            ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits3_dff__DOT__reg_s1)
                     ? ((((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                        >> 6U))) | 
                          (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                        >> 6U)))) << 3U) 
                        | ((((5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                           >> 6U))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                             >> 6U)))) 
                            << 2U) | (((3U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                >> 6U))) 
                                       << 1U) | (4U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                     >> 6U))))))
                     : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits3_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplier_abs_dff__DOT__reg_qout = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul_req_sh) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplier_abs_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplier_abs_dff__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplier_abs_nxt
                : 0U);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplier_abs_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits2_dff__DOT__reg_qout 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
            ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits2_dff__DOT__reg_s1)
                     ? ((((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                        >> 4U))) | 
                          (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                        >> 4U)))) << 3U) 
                        | ((((5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                           >> 4U))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                             >> 4U)))) 
                            << 2U) | (((3U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                >> 4U))) 
                                       << 1U) | (4U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                     >> 4U))))))
                     : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits2_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits1_dff__DOT__reg_qout 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
            ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits1_dff__DOT__reg_s1)
                     ? ((((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                        >> 2U))) | 
                          (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                        >> 2U)))) << 3U) 
                        | ((((5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                           >> 2U))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                             >> 2U)))) 
                            << 2U) | (((3U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                >> 2U))) 
                                       << 1U) | (4U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel) 
                                                     >> 2U))))))
                     : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits1_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits0_dff__DOT__reg_qout 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
            ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits0_dff__DOT__reg_s1)
                     ? ((((1U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel))) 
                          | (2U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel)))) 
                         << 3U) | ((((5U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel))) 
                                     | (6U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel)))) 
                                    << 2U) | (((3U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel))) 
                                               << 1U) 
                                              | (4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_sel))))))
                     : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits0_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_wait_dff__DOT__reg_qout = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_wait_set) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_sh))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_wait_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_wait_dff__DOT__reg_s1) 
               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_sh)) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_wait_set)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_wait_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wdata_dff__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_sh) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wdata_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wdata_dff__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_dcache_axi_wdata
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wdata_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_src1_dff__DOT__reg_qout = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_com_sh) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_src1_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_src1_dff__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_reg_src1
                : 0U);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_src1_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__63__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__63__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__63__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__63__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x3fU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__63__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__63__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__62__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__62__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__62__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__62__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x3eU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__62__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__62__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__61__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__61__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__61__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__61__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x3dU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__61__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__61__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__60__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__60__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__60__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__60__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x3cU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__60__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__60__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__59__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__59__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__59__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__59__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x3bU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__59__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__59__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__58__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__58__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__58__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__58__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x3aU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__58__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__58__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__57__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__57__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__57__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__57__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x39U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__57__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__57__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__56__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__56__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__56__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__56__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x38U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__56__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__56__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__55__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__55__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__55__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__55__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x37U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__55__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__55__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__54__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__54__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__54__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__54__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x36U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__54__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__54__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__53__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__53__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__53__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__53__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x35U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__53__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__53__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__52__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__52__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__52__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__52__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x34U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__52__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__52__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__51__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__51__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__51__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__51__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x33U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__51__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__51__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__50__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__50__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__50__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__50__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x32U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__50__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__50__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__49__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__49__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__49__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__49__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x31U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__49__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__49__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__48__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__48__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__48__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__48__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x30U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__48__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__48__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__47__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__47__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__47__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x2fU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__47__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__47__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__46__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__46__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__46__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x2eU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__46__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__46__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__45__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__45__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__45__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x2dU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__45__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__45__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__44__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__44__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__44__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x2cU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__44__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__44__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__43__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__43__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__43__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x2bU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__43__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__43__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__42__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__42__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__42__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x2aU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__42__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__42__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__41__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__41__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__41__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x29U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__41__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__41__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__40__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__40__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__40__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x28U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__40__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__40__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__39__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__39__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__39__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x27U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__39__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__39__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__38__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__38__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__38__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x26U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__38__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__38__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__37__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__37__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__37__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x25U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__37__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__37__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__36__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__36__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__36__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x24U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__36__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__36__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__35__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__35__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__35__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x23U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__35__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__35__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__34__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__34__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__34__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x22U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__34__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__34__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__33__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__33__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__33__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x21U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__33__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__33__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__32__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__32__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__32__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x20U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__32__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__32__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__31__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__31__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__31__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x1fU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__31__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__31__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__30__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__30__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__30__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x1eU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__30__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__30__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__29__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__29__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__29__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x1dU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__29__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__29__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__28__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__28__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__28__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x1cU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__28__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__28__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__27__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__27__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__27__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x1bU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__27__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__27__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__26__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__26__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__26__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x1aU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__26__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__26__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__25__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__25__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__25__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x19U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__25__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__25__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__24__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__24__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__24__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x18U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__24__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__24__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__23__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__23__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__23__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x17U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__23__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__23__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__22__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__22__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__22__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x16U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__22__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__22__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__21__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__21__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__21__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x15U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__21__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__21__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__20__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__20__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__20__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x14U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__20__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__20__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__19__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__19__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__19__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x13U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__19__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__19__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__18__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__18__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__18__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x12U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__18__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__18__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__17__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__17__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__17__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x11U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__17__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__17__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__16__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__16__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__16__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0x10U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__16__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__16__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__15__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__15__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__15__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0xfU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__15__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__15__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__14__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__14__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__14__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0xeU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__14__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__14__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__13__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__13__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__13__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0xdU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__13__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__13__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__12__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__12__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__12__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0xcU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__12__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__12__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__11__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__11__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__11__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0xbU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__11__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__11__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__10__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__10__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__10__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0xaU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__10__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__10__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__9__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__9__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__9__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[9U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__9__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__9__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__8__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__8__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__8__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[8U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__8__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__8__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__7__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__7__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__7__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[7U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__7__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__7__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__6__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__6__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__6__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[6U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__6__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__6__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__5__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__5__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__5__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[5U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__5__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__5__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__4__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__4__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__4__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[4U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__4__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__4__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__3__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__3__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__3__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__3__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__3__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__2__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__2__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__2__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__2__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__2__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__1__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__1__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__1__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__1__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__1__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__0__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__x64_sram____pinNumber3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__0__KET____DOT__x64_sram__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__0__KET____DOT__x64_sram__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_data
                : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__sram[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__0__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram__DOT__genblk1__BRA__0__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_src2_dff__DOT__reg_qout = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_com_sh) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_src2_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_src2_dff__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_reg_src2
                : 0U);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_src2_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_valid_pre_dff__DOT__reg_qout = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_lsu_sh) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_valid_pre_clr))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_valid_pre_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_valid_pre_dff__DOT__reg_s1) 
               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_valid_pre_clr)) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_lsu_sh)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_valid_pre_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_absneg_dff__DOT__reg_qout = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul_req_sh) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_absneg_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_absneg_dff__DOT__reg_s1)
                ? (- vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_nxt)
                : 0U);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_absneg_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid_pre_dff__DOT__reg_qout = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_muldiv_sh) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid_pre_clr))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid_pre_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid_pre_dff__DOT__reg_s1) 
               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid_pre_clr)) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_muldiv_sh)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid_pre_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_outaddr_dff__DOT__reg_qout = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_sh) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_outaddr_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_outaddr_dff__DOT__reg_s1) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_outaddr));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_outaddr_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_req_sh) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_s1) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_nxt));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_dff__DOT__reg_qout = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul_req_sh) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_dff__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_nxt
                : 0U);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_3 
        = (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits3_dff__DOT__reg_qout) 
                                      >> 3U))))) & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_dff__DOT__reg_qout))) 
           | (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits3_dff__DOT__reg_qout) 
                                         >> 2U))))) 
               & (0xffffffff00000000ULL | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_absneg_dff__DOT__reg_qout)))) 
              | (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits3_dff__DOT__reg_qout) 
                                            >> 1U))))) 
                  & ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_dff__DOT__reg_qout)) 
                     << 1U)) | ((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits3_dff__DOT__reg_qout))))) 
                                & (0xfffffffe00000000ULL 
                                   | ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_absneg_dff__DOT__reg_qout)) 
                                      << 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_0 
        = (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits0_dff__DOT__reg_qout) 
                                      >> 3U))))) & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_dff__DOT__reg_qout))) 
           | (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits0_dff__DOT__reg_qout) 
                                         >> 2U))))) 
               & (0xffffffff00000000ULL | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_absneg_dff__DOT__reg_qout)))) 
              | (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits0_dff__DOT__reg_qout) 
                                            >> 1U))))) 
                  & ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_dff__DOT__reg_qout)) 
                     << 1U)) | ((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits0_dff__DOT__reg_qout))))) 
                                & (0xfffffffe00000000ULL 
                                   | ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_absneg_dff__DOT__reg_qout)) 
                                      << 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_1 
        = (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits1_dff__DOT__reg_qout) 
                                      >> 3U))))) & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_dff__DOT__reg_qout))) 
           | (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits1_dff__DOT__reg_qout) 
                                         >> 2U))))) 
               & (0xffffffff00000000ULL | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_absneg_dff__DOT__reg_qout)))) 
              | (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits1_dff__DOT__reg_qout) 
                                            >> 1U))))) 
                  & ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_dff__DOT__reg_qout)) 
                     << 1U)) | ((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits1_dff__DOT__reg_qout))))) 
                                & (0xfffffffe00000000ULL 
                                   | ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_absneg_dff__DOT__reg_qout)) 
                                      << 1U))))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_idle_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_wptr_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_valid_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src2_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__63__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__62__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__61__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__60__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__59__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__58__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__57__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__56__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__55__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__54__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__53__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__52__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__51__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__50__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__49__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__48__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__47__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__46__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__45__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__44__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__43__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__42__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__41__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__40__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__39__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__38__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__37__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__36__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__35__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__34__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__33__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__32__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__31__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__30__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__29__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__28__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__27__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__26__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__25__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__24__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__23__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__22__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__21__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__20__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__19__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__18__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__17__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__16__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__15__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__14__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__13__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__12__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__11__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__10__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__9__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__8__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__7__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__6__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__5__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__4__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__3__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__2__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__1__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__0__KET____DOT__x64_sram__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_valid_pre_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_prdt_taken_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_rptr_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mcause_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mstatus_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__ifetch_valid_req_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rst_req_dff__DOT__reg_qout = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg1_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos2_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos1_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg0_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__special_divisor_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_small_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_lzc_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__quot_neg_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_valid_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wstrb_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__master_ring_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len4_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len2_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len1_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_bytesel_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_pc_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__pc_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_outaddr_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_write_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_awaddr_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_state__DOT__reg_qout = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_qout = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_read_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_statew_dff__DOT__reg_qout = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wbrd_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_awsize_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_skip_delay__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_ebreak_delay__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_rd_delay__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_data_delay__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_delay__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_pc_delay__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_en_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_res_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_index_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit1_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_miss1_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_hit_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel1_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel0_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel1_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel0_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_hit_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_wb_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_miss_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_miss_wb_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_rd_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_wbrd_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_tag_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_qout = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_op_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rdwen_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_wen_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_big_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_lzc_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_imm_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mtvec_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mepc_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_sync_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_ebreak_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_lsu_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_pc_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_rdwen_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__alu__DOT__alu_wbck_ebreak_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rd_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rd_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_rd_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_qout = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_data_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_valid_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_data_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_valid_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_res_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rdwen_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_pc_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_pc_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_pc_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src1_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src2_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_rd_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_pc_dff__DOT__reg_qout = 0U;
    } else {
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__disp_com) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__longi_disp)) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__com_o_flush))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_wptr_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_wptr_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__com_wptr_dff____pinNumber4));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sh) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_sh))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_valid_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_valid_dff__DOT__reg_s1) 
                   & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_sh)) 
                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sh)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__oitf_dff____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__oitf_dff____pinNumber4));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__oitf_dff____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__oitf_dff____pinNumber4));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__63__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__63__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__63__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__62__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__62__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__62__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__61__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__61__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__61__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__60__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__60__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__60__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__59__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__59__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__59__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__58__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__58__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__58__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__57__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__57__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__57__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__56__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__56__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__56__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__55__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__55__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__55__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__54__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__54__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__54__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__53__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__53__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__53__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__52__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__52__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__52__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__51__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__51__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__51__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__50__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__50__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__50__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__49__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__49__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__49__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__48__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__48__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__48__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__47__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__47__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__46__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__46__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__45__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__45__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__44__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__44__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__43__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__43__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__42__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__42__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__41__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__41__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__40__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__40__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__39__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__39__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__38__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__38__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__37__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__37__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__36__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__36__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__35__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__35__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__34__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__34__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__33__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__33__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__32__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__32__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__31__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__31__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__30__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__30__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__29__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__29__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__28__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__28__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__27__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__27__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__26__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__26__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__25__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__25__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__24__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__24__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__23__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__23__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__22__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__22__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__21__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__21__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__20__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__20__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__19__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__19__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__18__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__18__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__17__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__17__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__16__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__16__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__15__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__15__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__14__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__14__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__13__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__13__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__12__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__12__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__11__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__11__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__10__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__10__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__9__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__9__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__8__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__8__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__7__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__7__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__6__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__6__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__5__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__5__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__4__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__4__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__3__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__3__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__2__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__2__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__1__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__1__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__x64_sram____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__0__KET____DOT__x64_sram__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__0__KET____DOT__x64_sram__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_data
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__oitf_rd_dff____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_s1)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd)
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__oitf_rd_dff____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_s1)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd)
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__oitf_rd_dff____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_s1)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd)
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__oitf_rd_dff____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_s1)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd)
                    : 0U);
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_com_sh) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_valid_pre_clr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_valid_pre_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_valid_pre_dff__DOT__reg_s1) 
                   & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_valid_pre_clr)) 
                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_com_sh)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__if_o_sh) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_prdt_taken_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_prdt_taken_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_o_prdt_taken));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout
                    : 0U);
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_s1)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__state_nxt)
                : 1U);
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_op_dff__DOT__reg_qout) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_qout))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_rptr_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_rptr_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__com_rptr_dff____pinNumber4));
        }
        if ((((0x342U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx)) 
              | (0x342U == ((0x80U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                             ? 0x342U : 0U))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_csr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mcause_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mcause_dff__DOT__reg_s1)
                    ? ((0x342U == ((0x80U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                    ? 0x342U : 0U))
                        ? (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                 >> 7U)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_wdata)
                    : 0U);
        }
        if ((((0x300U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx)) 
              | (0x300U == ((0x80U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                             ? 0x342U : 0U))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_csr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mstatus_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mstatus_dff__DOT__reg_s1)
                    ? ((0x300U == ((0x80U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                    ? 0x342U : 0U))
                        ? (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                 >> 7U)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_wdata)
                    : 0U);
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__ifetch_req_set) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_sh))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__ifetch_valid_req_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__ifetch_valid_req_dff__DOT__reg_s1) 
                   & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_sh)) 
                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__ifetch_req_set)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_en) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_s1)
                    ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_he1627121__0)
                            ? 0x10U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hc84a0142__0)
                                        ? 8U : 4U))
                        : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_h62851a69__0)) 
                            << 4U) | (((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_h62851a69__0)) 
                                       << 3U) | (((2U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_hd0d7bce6__0)) 
                                                  << 2U) 
                                                 | (((6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_h91734dab__0)) 
                                                     << 1U) 
                                                    | (7U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_h91734dab__0)))))))
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_s1)
                    ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))
                        ? 0ULL : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_iter_end)
                    : 0ULL);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_s1)
                    ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hcf4afe7a__0)
                            ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_o_rem)) 
                               << 3U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_big_dff__DOT__reg_qout)
                                          ? 0ULL : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hf9e144d9__0))
                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_iter_end)
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_sh) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rst_req_dff__DOT__reg_qout 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rst_req_dff__DOT__reg_s1)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_req_hit));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit1_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit1_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_req_hit1));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_miss1_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_miss1_dff__DOT__reg_s1) 
                   & ((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend
                       [(0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_req_pc 
                                  >> 2U))][0U]) < (0xfU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend
                                                   [
                                                   (0x3fU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_req_pc 
                                                       >> 2U))]
                                                   [1U])));
        }
        if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg1_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg1_dff__DOT__reg_s1)
                    ? ((0xdU & (- (IData)((0U == (7U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                             >> 0x1cU))))))) 
                       | ((0xfU & (- (IData)((1U == 
                                              (7U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                             >> 0x1cU))))))) 
                          | ((0x10U & (- (IData)((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                              >> 0x1cU))))))) 
                             | ((0x12U & (- (IData)(
                                                    (3U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                 >> 0x1cU))))))) 
                                | ((0x13U & (- (IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                    >> 0x1cU))))))) 
                                   | ((0x14U & (- (IData)(
                                                          (5U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                       >> 0x1cU))))))) 
                                      | ((0x16U & (- (IData)(
                                                             (6U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                          >> 0x1cU))))))) 
                                         | (0x18U & 
                                            (- (IData)(
                                                       (7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                    >> 0x1cU))))))))))))))
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos2_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos2_dff__DOT__reg_s1)
                    ? ((0x14U & (- (IData)((0U == (7U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                              >> 0x1cU))))))) 
                       | ((0x12U & (- (IData)((1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                           >> 0x1cU))))))) 
                          | ((0x11U & (- (IData)((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                              >> 0x1cU))))))) 
                             | ((0x10U & (- (IData)(
                                                    (3U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                 >> 0x1cU))))))) 
                                | ((0xeU & (- (IData)(
                                                      (4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                   >> 0x1cU))))))) 
                                   | ((0xcU & (- (IData)(
                                                         (5U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                      >> 0x1cU))))))) 
                                      | (0xaU & ((- (IData)(
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
                                                                           >> 0x1cU))))))))))))))
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos1_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos1_dff__DOT__reg_s1)
                    ? ((2U & ((- (IData)((0U == (7U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                            >> 0x1cU)))))) 
                              | ((- (IData)((1U == 
                                             (7U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                            >> 0x1cU)))))) 
                                 | ((- (IData)((2U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                            >> 0x1cU)))))) 
                                    | (- (IData)((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                              >> 0x1cU)))))))))) 
                       | (1U & ((- (IData)((4U == (7U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                              >> 0x1cU)))))) 
                                | ((- (IData)((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                           >> 0x1cU)))))) 
                                   | (- (IData)((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                             >> 0x1cU))))))))))
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg0_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg0_dff__DOT__reg_s1)
                    ? ((2U & (- (IData)((0U == (7U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                           >> 0x1cU))))))) 
                       | ((3U & (- (IData)((1U == (7U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                              >> 0x1cU))))))) 
                          | ((3U & (- (IData)((2U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                           >> 0x1cU))))))) 
                             | ((3U & (- (IData)((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                              >> 0x1cU))))))) 
                                | ((3U & (- (IData)(
                                                    (4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                 >> 0x1cU))))))) 
                                   | (4U & ((- (IData)(
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
                                                                         >> 0x1cU))))))))))))))
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__special_divisor_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__special_divisor_dff__DOT__reg_s1) 
                   & ((0U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                            >> 0x1cU)))) 
                      | (4U == (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                              >> 0x1cU))))));
        }
        if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_req_sh) 
                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
                       >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_lzc_dff__DOT__reg_qout) 
                                 >> 5U))))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__quot_neg_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__quot_neg_dff__DOT__reg_s1) 
                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_nxt) 
                         ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_neg))));
        }
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_small_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_small_dff__DOT__reg_s1) 
                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_diff_nxt) 
                       >> 5U) | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout))));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_lzc_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_lzc_dff__DOT__reg_s1)
                    ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout)) 
                        << 5U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_dividend__cnt_o))
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_big_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_big_dff__DOT__reg_s1) 
                   & ((0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_divisor__cnt_o)) 
                      & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                 >> 0x1fU))));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_lzc_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_lzc_dff__DOT__reg_s1)
                    ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                        << 5U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_divisor__cnt_o))
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_sh) 
             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__longi_disp) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_valid_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_valid_dff__DOT__reg_s1) 
                   & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout)) 
                      & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__longi_disp)) 
                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_sh))));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_clr) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__master_ring_clr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__master_ring_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__master_ring_dff__DOT__reg_s1) 
                   & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__master_ring_clr)) 
                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_clr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT____Vcellinp__bjp_prdt_flush_dff____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_pc_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_pc_dff__DOT__reg_s1)
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_bxx_res)
                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_imm_dff__DOT__reg_qout 
                           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_pc_dff__DOT__reg_qout)
                        : ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_pc_dff__DOT__reg_qout))
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_s1) 
                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_req_prdt_en) 
                      & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                          >> 5U) ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_bxx_res))));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__pc_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__pc_dff__DOT__reg_s1)
                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_csr_ren)
                     ? (((- (IData)((5U == (IData)(vlSelf->__VdfgTmp_h3be0d50b__0)))) 
                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mtvec_dff__DOT__reg_qout) 
                        | ((- (IData)((0x41U == (IData)(vlSelf->__VdfgTmp_h3be0d50b__0)))) 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mepc_dff__DOT__reg_qout))
                     : (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_rs1en))) 
                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
                         [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                    >> 0xfU))]) | (
                                                   (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_csr_ren) 
                                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_rs1en)))))) 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_pc_dff__DOT__reg_qout))) 
                   + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_o_prdt_taken)
                       ? (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__dec_jal))) 
                           & (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout) 
                                            | ((0x800U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                     >> 0x14U)))))) 
                          | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_rs1en))) 
                              & (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                              >> 0x14U))) 
                             | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__dec_bxx))) 
                                & (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                                                         >> 7U))))))))
                       : 4U)) : 0U);
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_set) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_clr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_dff__DOT__reg_s1) 
                   & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_clr)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_set)));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_state__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_state__DOT__reg_s1)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__state_nxt)
                : 1U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_s1)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__state_rnxt)
                : 1U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_statew_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_statew_dff__DOT__reg_s1)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__state_wnxt)
                : 1U);
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_sync_dff__DOT__reg_qout) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_ha44a23a8__0))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_s1)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__count_nxt)
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_sh) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_idle_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_idle_dff__DOT__reg_s1) 
                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_hit) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_hit) 
                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss))));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wstrb_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wstrb_dff__DOT__reg_s1)
                    ? ((1U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hf4e7f781__0)))) 
                       | ((2U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hf4dbf72a__0)))) 
                          | ((4U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hf4efd26b__0)))) 
                             | ((8U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hff018c03__0)))) 
                                | ((0x10U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hc1630a31__0)))) 
                                   | ((0x20U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hc1574919__0)))) 
                                      | ((0x40U & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hf4b829cc__0)))) 
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
                                                              & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hc37d369c__0)))))))))))))))))
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len4_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len4_dff__DOT__reg_s1) 
                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                      >> 7U));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len2_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len2_dff__DOT__reg_s1) 
                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                      >> 6U));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len1_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len1_dff__DOT__reg_s1) 
                   & (IData)((0U == (0xc0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout))));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_bytesel_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_bytesel_dff__DOT__reg_s1)
                    ? (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout)
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_outaddr_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_outaddr_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_outaddr));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_write_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_write_dff__DOT__reg_s1) 
                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_outaddr) 
                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss_wb)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_awaddr_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_awaddr_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_dcache_axi_awaddr
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_read_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_read_dff__DOT__reg_s1) 
                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_outaddr) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_miss) 
                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss_rd))));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wbrd_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wbrd_dff__DOT__reg_s1) 
                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_miss_wb) 
                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss_wbrd)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_awsize_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_awsize_dff__DOT__reg_s1)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_dcache_axi_awsize)
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_hit_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_hit_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_hit));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel1_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel1_dff__DOT__reg_s1) 
                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_miss0)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel0_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel0_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_miss0));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel1_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel1_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_hit1));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel0_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel0_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_hit0));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_hit_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_hit_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_hit));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_wb_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_wb_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss_wb));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_miss_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_miss_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_miss));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_miss_wb_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_miss_wb_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_miss_wb));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_rd_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_rd_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss_rd));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_wbrd_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_wbrd_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_miss_wbrd));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_s1)
                    ? (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                >> 2U)) : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_tag_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_tag_dff__DOT__reg_s1)
                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                       >> 8U) : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_sync_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_sync_dff__DOT__reg_s1) 
                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                      >> 0xbU));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_valid) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_skip_delay__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_skip_delay__DOT__reg_s1) 
                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout) 
                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_ebreak_delay__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_ebreak_delay__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_ebreak_dff__DOT__reg_qout));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_rd_delay__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_rd_delay__DOT__reg_s1)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_data_delay__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_data_delay__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_delay__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_delay__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_lsu_dff__DOT__reg_qout));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__genblk1__DOT__regfile____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_qout) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_pc_delay__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_pc_delay__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_pc_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_i_valid) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_s1) 
                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rdwen_dff__DOT__reg_qout) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv_o_valid)) 
                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rdwen_dff__DOT__reg_qout)) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__sel_com) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_wen_dff__DOT__reg_qout)))));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_op_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_op_dff__DOT__reg_s1)
                    ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv_o_valid) 
                        << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh) 
                                   << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__sel_com)))
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_ebreak_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_ebreak_dff__DOT__reg_s1) 
                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__sel_com) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__alu__DOT__alu_wbck_ebreak_dff__DOT__reg_qout)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_s1)
                    ? (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv_o_valid))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rd_dff__DOT__reg_qout)) 
                       | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rd_dff__DOT__reg_qout)) 
                          | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__sel_com))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_rd_dff__DOT__reg_qout))))
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_s1)
                    ? (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv_o_valid))) 
                        & (((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                                              >> 4U)))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_qout)) 
                           | (((- (IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul_i_signed1) 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                                                    >> 7U))))) 
                               & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_qout 
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
                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_res_dff__DOT__reg_qout)))))
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_lsu_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_lsu_dff__DOT__reg_s1) 
                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh) 
                      & ((~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                              >> 0x1fU) | (3U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                                  >> 0x1cU)))) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rdwen_dff__DOT__reg_qout))));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_pc_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_pc_dff__DOT__reg_s1)
                    ? (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv_o_valid))) 
                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_pc_dff__DOT__reg_qout) 
                       | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_o_sh))) 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_pc_dff__DOT__reg_qout) 
                          | ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__sel_com))) 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_pc_dff__DOT__reg_qout)))
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_lsu_sh) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src2_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src2_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_reg_src2
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rd_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rd_dff__DOT__reg_s1)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd)
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rdwen_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rdwen_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_s1)
                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_imm 
                       + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_reg_src1)
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_pc_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_pc_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_pc_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT____Vcellinp__bjp_prdt_en_dff____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_en_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_en_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_req_prdt_en));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_res_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_res_dff__DOT__reg_s1) 
                   & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_adder_res 
                              >> 0x20U)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_index_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_index_dff__DOT__reg_s1)
                    ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_pc_dff__DOT__reg_qout 
                                >> 2U)) : 0U);
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_s1)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__state_nxt)
                : 1U);
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sh) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_wen_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_wen_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_rdwen_dff__DOT__reg_qout));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_rd_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_rd_dff__DOT__reg_s1)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_rd_dff__DOT__reg_qout)
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_data_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_data_dff__DOT__reg_s1)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_adder_res)
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_valid_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_valid_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_bjp));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_data_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_data_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_rdata
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_valid_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_valid_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_csr));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_res_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_res_dff__DOT__reg_s1)
                    ? (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_add))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__adder_res)) 
                       | (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op_sub))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__adder_res)) 
                          | (((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_alu) 
                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                             >> 8U)))) 
                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op1 
                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op2)) 
                             | (((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_alu) 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                                >> 0xcU)))) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op1 
                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op2)) 
                                | (((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_alu) 
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
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__share__DOT__op2))))))))))
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_pc_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_pc_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_pc_dff__DOT__reg_qout
                    : 0U);
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_wen) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT____VdfgTmp_h50ac64bd__0))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_s1)
                    ? (((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_sh) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_req_hit0)))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_rdata)) 
                       | (((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__req_o_sh) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_req_hit1)))) 
                           & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_rdata 
                                      >> 0x20U))) | 
                          ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_sram_wen))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_rdata))))
                    : 0U);
        }
        if ((((0x305U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx)) 
              | (0x305U == ((0x80U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                             ? 0x342U : 0U))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_csr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mtvec_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mtvec_dff__DOT__reg_s1)
                    ? ((0x305U == ((0x80U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                    ? 0x342U : 0U))
                        ? (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                 >> 7U)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_wdata)
                    : 0U);
        }
        if ((((0x341U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_idx)) 
              | (0x341U == ((0x80U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                             ? 0x342U : 0U))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_csr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mepc_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mepc_dff__DOT__reg_s1)
                    ? ((0x341U == ((0x80U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout)
                                    ? 0x342U : 0U))
                        ? (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                                 >> 7U)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_reg_wdata)
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__oitf_dff____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__oitf_dff____pinNumber4));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__oitf_dff____pinNumber3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__oitf_dff____pinNumber4));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_ena) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_nxt));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__abs_ena) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_s1)
                    ? (0x1ffffffffULL & (((- (QData)((IData)(
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
                                             & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__normalized_dividend))) 
                                            | ((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
                                                                      >> 4U))))) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_nxt 
                                                  >> 3U)))))
                    : 0ULL);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_s1)
                    ? (0x1ffffffffULL & (((- (QData)((IData)(
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
                                             & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__normalized_divisor))) 
                                            | ((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
                                                                      >> 4U))))) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_plus_d_nxt 
                                                  >> 3U)))))
                    : 0ULL);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_muldiv_sh) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rdwen_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rdwen_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rd_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rd_dff__DOT__reg_s1)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd)
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_pc_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_pc_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_pc_dff__DOT__reg_qout
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src1_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src1_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_reg_src1
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src2_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src2_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_reg_src2
                    : 0U);
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sel_alu) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_sh))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__alu__DOT__alu_wbck_ebreak_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__alu__DOT__alu_wbck_ebreak_dff__DOT__reg_s1) 
                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                      >> 0x12U));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_com_sh) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_imm_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_imm_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_imm
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_rdwen_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_rdwen_dff__DOT__reg_s1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_rd_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_rd_dff__DOT__reg_s1)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd)
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_infobus_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_pc_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_pc_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_pc_dff__DOT__reg_qout
                    : 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_en) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_nxt
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_s1)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_nxt
                    : 0U);
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_s1)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_nxt
                : 0ULL);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_s1)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__state_nxt)
                : 1U);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_2 
        = (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits2_dff__DOT__reg_qout) 
                                      >> 3U))))) & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_dff__DOT__reg_qout))) 
           | (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits2_dff__DOT__reg_qout) 
                                         >> 2U))))) 
               & (0xffffffff00000000ULL | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_absneg_dff__DOT__reg_qout)))) 
              | (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits2_dff__DOT__reg_qout) 
                                            >> 1U))))) 
                  & ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_dff__DOT__reg_qout)) 
                     << 1U)) | ((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__booth_bits2_dff__DOT__reg_qout))))) 
                                & (0xfffffffe00000000ULL 
                                   | ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_absneg_dff__DOT__reg_qout)) 
                                      << 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_idle_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__com_wptr_dff____pinNumber4 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_wptr_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_wptr_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_valid_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src2_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x3fU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__63__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__63__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x3eU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__62__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__62__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x3dU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__61__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__61__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x3cU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__60__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__60__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x3bU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__59__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__59__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x3aU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__58__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__58__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x39U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__57__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__57__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x38U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__56__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__56__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x37U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__55__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__55__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x36U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__54__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__54__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x35U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__53__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__53__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x34U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__52__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__52__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x33U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__51__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__51__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x32U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__50__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__50__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x31U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__49__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__49__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x30U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__48__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__48__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x2fU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__47__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__47__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x2eU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__46__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__46__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x2dU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__45__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__45__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x2cU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__44__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__44__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x2bU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__43__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__43__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x2aU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__42__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__42__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x29U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__41__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__41__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x28U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__40__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__40__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x27U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__39__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__39__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x26U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__38__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__38__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x25U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__37__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__37__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x24U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__36__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__36__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x23U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__35__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__35__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x22U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__34__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__34__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x21U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__33__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__33__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x20U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__32__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__32__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x1fU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__31__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__31__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x1eU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__30__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__30__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x1dU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__29__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__29__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x1cU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__28__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__28__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x1bU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__27__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__27__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x1aU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__26__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__26__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x19U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__25__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__25__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x18U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__24__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__24__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x17U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__23__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__23__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x16U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__22__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__22__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x15U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__21__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__21__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x14U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__20__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__20__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x13U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__19__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__19__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x12U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__18__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__18__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x11U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__17__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__17__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0x10U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__16__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__16__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0xfU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__15__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__15__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0xeU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__14__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__14__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0xdU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__13__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__13__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0xcU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__12__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__12__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0xbU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__11__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__11__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0xaU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__10__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__10__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[9U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__9__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__9__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[8U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__8__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__8__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[7U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__7__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__7__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[6U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__6__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__6__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[5U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__5__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__5__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[4U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__4__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__4__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__3__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__3__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__2__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__2__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__1__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__1__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__0__KET____DOT__x64_sram__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__genblk1__BRA__0__KET____DOT__x64_sram__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rdwen_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rdwen_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rdwen_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rdwen_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__oitf_rd[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__3__KET____DOT__oitf_rd_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__oitf_rd[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__2__KET____DOT__oitf_rd_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__oitf_rd[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_rd_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__oitf_rd[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_rd_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_valid_pre_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_prdt_taken_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_extend 
        = ((- (QData)((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout) 
                                >> 1U) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplier_abs_dff__DOT__reg_qout 
                                          >> 0x1fU))))) 
           & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_abs_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____Vcellinp__com_rptr_dff____pinNumber4 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_rptr_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_rptr_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mcause_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mstatus_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__ifetch_valid_req_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber2 
        = (0xfffffffffULL & ((- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout))) 
                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rst_req_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg1_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos2_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos1_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg0_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->__VdfgTmp_hcdb3edec__0 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg0_dff__DOT__reg_qout) 
                                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__special_divisor_dff__DOT__reg_qout));
    vlSelf->__VdfgTmp_h1195937e__0 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos1_dff__DOT__reg_qout) 
                                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__special_divisor_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__special_divisor_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_small_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_lzc_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber1 
        = (0xfffffffffULL & ((- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout))) 
                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__quot_neg_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x1fU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x1eU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x1dU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x1cU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x1bU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x1aU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x19U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x18U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x17U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x16U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x15U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x14U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x13U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x12U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x11U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0x10U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0xfU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0xeU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0xdU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0xcU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0xbU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[9U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[8U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[7U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[6U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[5U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[4U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__disp__DOT__disp_valid_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wstrb_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_jalr 
        = (IData)((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32 
        = ((7U != (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                         >> 2U))) & (3U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h0ef97249__0 
        = ((0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                   >> 0x19U)) | (1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                        >> 0x19U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h70e47a00__0 
        = (IData)((0x17U == (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h9260baa9__0 
        = (IData)((0xfU == (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_hdcc769da__0 
        = (IData)((3U == (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h7bbdb29a__0 
        = (IData)((0x13U == (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__master_ring_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len4_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len2_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len1_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_h376e7bed__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len1_dff__DOT__reg_qout) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_bytesel_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_h30cacbd8__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len1_dff__DOT__reg_qout) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_bytesel_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_h30e6dbb7__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len1_dff__DOT__reg_qout) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_bytesel_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_h2d6ac26f__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len1_dff__DOT__reg_qout) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_bytesel_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_hab7d3d20__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len2_dff__DOT__reg_qout) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_bytesel_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_habf59cee__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len2_dff__DOT__reg_qout) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_bytesel_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_h7ea7f127__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_len4_dff__DOT__reg_qout) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_bytesel_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_bytesel_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_pc_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__pc_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_outaddr_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_write_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_awaddr_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_state__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid 
        = (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_state__DOT__reg_qout))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_read_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_statew_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wbrd_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__count_nxt 
        = ((0x7fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout))
            ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_clean 
        = (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                    [(0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout) 
                               >> 1U))][(1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout))] 
                    >> 4U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_awsize_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[1U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[1U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[2U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[2U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[3U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[3U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[4U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[4U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[5U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[5U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[6U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[6U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[7U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[7U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[8U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[8U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[9U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[9U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xaU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xaU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xbU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xbU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xcU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xcU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xdU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xdU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xeU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xeU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xfU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xfU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x10U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x10U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x11U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x11U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x12U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x12U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x13U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x13U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x14U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x14U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x15U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x15U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x16U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x16U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x17U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x17U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x18U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x18U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x19U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x19U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1aU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1aU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1bU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1bU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1cU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1cU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1dU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1dU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1eU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1eU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1fU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1fU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x20U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x20U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x21U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x21U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x22U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x22U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x23U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x23U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x24U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x24U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x25U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x25U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x26U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x26U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x27U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x27U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x28U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x28U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x29U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x29U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2aU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2aU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2bU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2bU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2cU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2cU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2dU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2dU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2eU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2eU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2fU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2fU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x30U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x30U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x31U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x31U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x32U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x32U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x33U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x33U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x34U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x34U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x35U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x35U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x36U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x36U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x37U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x37U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x38U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x38U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x39U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x39U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3aU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3aU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3bU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3bU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3cU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3cU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3dU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3dU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3eU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3eU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3fU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3fU][1U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v128) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[1U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[1U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[2U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[2U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[3U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[3U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[4U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[4U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[5U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[5U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[6U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[6U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[7U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[7U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[8U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[8U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[9U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[9U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xaU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xaU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xbU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xbU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xcU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xcU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xdU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xdU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xeU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xeU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xfU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0xfU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x10U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x10U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x11U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x11U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x12U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x12U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x13U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x13U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x14U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x14U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x15U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x15U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x16U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x16U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x17U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x17U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x18U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x18U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x19U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x19U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1aU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1aU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1bU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1bU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1cU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1cU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1dU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1dU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1eU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1eU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1fU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x1fU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x20U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x20U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x21U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x21U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x22U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x22U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x23U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x23U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x24U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x24U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x25U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x25U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x26U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x26U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x27U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x27U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x28U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x28U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x29U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x29U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2aU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2aU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2bU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2bU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2cU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2cU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2dU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2dU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2eU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2eU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2fU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x2fU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x30U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x30U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x31U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x31U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x32U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x32U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x33U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x33U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x34U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x34U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x35U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x35U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x36U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x36U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x37U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x37U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x38U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x38U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x39U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x39U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3aU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3aU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3bU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3bU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3cU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3cU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3dU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3dU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3eU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3eU][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3fU][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[0x3fU][1U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256] 
            = ((~ ((IData)(0xfU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256))) 
               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend
               [__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256]
               [__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v256]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257] 
            = (((~ ((IData)(0xfU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend
                [__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257]
                [__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257]) 
               | (0x1fffffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257) 
                                 << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v257))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v258;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259] 
            = (((~ ((IData)(0xfU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend
                [__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259]
                [__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259]) 
               | (0x1fffffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259) 
                                 << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_extend__v259))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_skip_delay__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_ebreak_delay__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_rd_delay__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_data_delay__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs[0xaU] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__regfile__DOT__reg_qout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__regfile__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_sync_delay__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_pc_delay__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__intermediate_sum1 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_0 
           ^ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_1 
               << 2U) ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_2 
                         << 4U)));
    vlSelf->__VdfgTmp_h2d611035__0 = (0x7fffffffffffffffULL 
                                      & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_0 
                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_1 
                                             << 2U)) 
                                         | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_0 
                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_1 
                                                << 2U)) 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_2 
                                               << 4U))));
    vlSelf->__VdfgTmp_h6fbd2f8c__0 = (0x7ffffffffULL 
                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber1 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_auipc 
        = (IData)(((0U == (0x60U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h70e47a00__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_lui 
        = (IData)(((0x20U == (0x60U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h70e47a00__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_jal 
        = (IData)(((0x60U == (0x60U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h9260baa9__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_miscmem 
        = (IData)(((0U == (0x60U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h9260baa9__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_load 
        = (IData)(((0U == (0x60U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_hdcc769da__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch 
        = (IData)(((0x60U == (0x60U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_hdcc769da__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_store 
        = (IData)(((0x20U == (0x60U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_hdcc769da__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op 
        = (IData)(((0x20U == (0x60U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h7bbdb29a__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm 
        = (IData)(((0U == (0x60U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h7bbdb29a__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_system 
        = (IData)(((0x60U == (0x60U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h7bbdb29a__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_en_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_res_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__prdt_result_history 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__bpu__DOT__branch_history_table
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_index_dff__DOT__reg_qout];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_index_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_hit1_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_miss1_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_hit_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel1_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_msel0_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel1_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_hsel0_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_hit_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_wb_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_miss_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_miss_wb_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_rd_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_write_miss_wbrd_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_index_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_tag_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_arvalid 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_qout) 
                  >> 1U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_qout) 
                             >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_stater_dff__DOT__reg_qout) 
                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_read_dff__DOT__reg_qout) 
                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wbrd_dff__DOT__reg_qout))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__rptr 
        = (((- (IData)((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_op_dff__DOT__reg_qout)))) 
            & (2U | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_rptr_dff__DOT__reg_qout))) 
           | (1U & (- (IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_op_dff__DOT__reg_qout) 
                                     >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_op_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rdwen_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_wen_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_big_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_diff 
        = (0x3fU & ((0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_lzc_dff__DOT__reg_qout)) 
                    - (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_lzc_dff__DOT__reg_qout))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hcf4afe7a__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_small_dff__DOT__reg_qout) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_lzc_dff__DOT__reg_qout) 
              >> 5U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_lzc_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_sh 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_valid_pre_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_o_flush 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_valid_pre_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__muldiv_o_flush 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid_pre_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__com_o_flush 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_valid_pre_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid_pre_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_o_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__icache_state__DOT__reg_qout) 
              >> 5U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_req_valid_pre_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT____VdfgTmp_h0dc29806__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__rst_req_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_u 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_lui) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_auipc));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h3dbdfcf8__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_jal) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_jalr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fence 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_miscmem) 
           & (0U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fencei 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_miscmem) 
           & (0x1000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs2en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32) 
           & ((0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                               >> 0x14U))) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_store) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__mul_op 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op) 
           & (1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                     >> 0x19U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h93711e12__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op) 
           & (0U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h937d1e55__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op) 
           & (0x1000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h93897e78__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op) 
           & (0x2000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h916fc8f4__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op) 
           & (0x3000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h6e3777ae__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op) 
           & (0x4000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h6e3e364e__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op) 
           & (0x5000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h939a9767__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op) 
           & (0x6000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h9224901c__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op) 
           & (0x7000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_i 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_jalr) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_load)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1 
            = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                        >> 0xfU));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2 
            = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                        >> 0x14U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_imm 
            = (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_i))) 
                & (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                      >> 0x14U))) | ((0xfffff000U & 
                                      ((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_u))) 
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
                                                             >> 0x14U))))))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd 
            = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                        >> 7U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_imm = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rd = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_slli 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm) 
           & (IData)(((0x1000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h0ef97249__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_addi 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm) 
           & (0U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h840ba0c3__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm) 
           & (0x5000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csrrwi 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_system) 
           & (0x5000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csrrsi 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_system) 
           & (0x6000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csrrci 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_system) 
           & (0x7000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h23370bb6__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_system) 
           & (0U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_imm_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h0fa23aad__0 
        = (IData)((0U == (0xc0000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h452a276f__0 
        = (1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                     >> 0x1bU)) & (~ (IData)((0U != 
                                              (0x7000000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h7bb56642__0 
        = (IData)((0U == (0xc00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h77e5988a__0 
        = (IData)((0U == (0x18U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h6fc4c6af__0 
        = (IData)((0U == (0x6000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h544edb2e__0 
        = (IData)((0xcU == (0xcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_6_5_11 
        = (IData)((0x60U == (0x60U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_1_0_11 
        = (IData)((3U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mtvec_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csrreg__DOT__mepc_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_sync_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_sync_dff__DOT__reg_qout) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb 
            = ((0xf0U & ((- (IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout) 
                                           >> 1U)))) 
                         << 4U)) | (0xfU & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout) 
                                                           >> 1U)))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_awaddr 
            = ((0xffffff00U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                               [(0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout) 
                                          >> 1U))][
                               (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout))] 
                               << 3U)) | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout) 
                                                   << 1U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_addr 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_count_dff__DOT__reg_qout) 
                        >> 1U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wstrb_dff__DOT__reg_qout;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_awaddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_awaddr_dff__DOT__reg_qout;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_addr 
            = (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                        >> 2U));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_h00f445ae__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_state_dff__DOT__reg_qout) 
            >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_statew_dff__DOT__reg_qout) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_write_dff__DOT__reg_qout) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_wbrd_dff__DOT__reg_qout) 
                            | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__sync_clean)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_axi_sync_dff__DOT__reg_qout))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__0__KET____DOT__oitf_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__genblk1__BRA__1__KET____DOT__oitf_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_ebreak_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x1eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x1dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x1aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__regfile____pinNumber3 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_en_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_rd_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_data_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_lsu_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_qout) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_valid_delay__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT____Vcellinp__diff_valid_delay____pinNumber3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_qout) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__diff_valid_delay__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_pc_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_set 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_arvalid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__master_ring_dff__DOT__reg_qout)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_arvalid) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_dff__DOT__reg_qout) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_master__DOT__icache_arvalid_hold_dff__DOT__reg_qout) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize = 2U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dcache_axi_arvalid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_read_outaddr_dff__DOT__reg_qout)
                ? (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                         >> 6U)) : 2U);
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_axi_arvalid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize = 2U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_nxt 
        = (0xfffffffffULL & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber1 
                              ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber2 
                                 ^ ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout)) 
                                    << 1U))) + (0xffffffffeULL 
                                                & ((vlSelf->__VdfgTmp_h6fbd2f8c__0 
                                                    << 1U) 
                                                   | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber1 
                                                        | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber2) 
                                                       << 1U) 
                                                      & ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout)) 
                                                         << 2U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_valid_pre_clr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_req_sh) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_prdt_flush_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____VdfgTmp_h8aec6602__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_qout) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__rptr))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_o_flush));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____VdfgTmp_h319be0ef__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_qout) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__rptr))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__muldiv_o_flush));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____VdfgTmp_h9df3f46e__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_wptr_dff__DOT__reg_qout)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__com_o_flush));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____VdfgTmp_h00239dbe__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__com_o_flush) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__com_wptr_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_req_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__ifetch_valid_req_dff__DOT__reg_qout) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT____VdfgTmp_h0dc29806__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__lsu_op 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_load) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_store) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fence) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fencei))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__need_imm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_i) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_u) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_store) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_jal))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_nop 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_addi) 
           & (IData)(((0U == (0xf8f80U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout)) 
                      & (~ (IData)((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                           >> 0x14U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_srli 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h840ba0c3__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h0ef97249__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_srai 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h840ba0c3__0) 
           & ((0x20U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                         >> 0x19U)) | (0x21U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                 >> 0x19U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h68212022__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csrrwi) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csrrsi) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csrrci)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_mret 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h23370bb6__0) 
           & (0x302U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                         >> 0x14U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ecall 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h23370bb6__0) 
           & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                     >> 0x14U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ebreak 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h23370bb6__0) 
           & (1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                     >> 0x14U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_4_2_011 
        = ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
               >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h544edb2e__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__dec_bxx 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_6_5_11) 
           & (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                   >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h77e5988a__0)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_1_0_11)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_rs1en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_6_5_11) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h77e5988a__0) 
               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout 
                  >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_1_0_11)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_hf4160036__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_6_5_11) 
           & (IData)(((((0x10U == (0x1010U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout)) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h544edb2e__0)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_1_0_11)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h6fc4c6af__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid 
        = (1U & (IData)(((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_statew_dff__DOT__reg_qout))) 
                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_h00f445ae__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid 
        = (1U & (IData)(((0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_statew_dff__DOT__reg_qout))) 
                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT____VdfgTmp_h00f445ae__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_rdwen_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_dividend__DOT__lzc_is_which 
        = (((0U == (0x7fffffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                           >> 1U)))) 
            << 0x1fU) | (((0U == (0x3fffffffU & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                         >> 2U)))) 
                          << 0x1eU) | (((0U == (0x1fffffffU 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                           >> 3U)))) 
                                        << 0x1dU) | 
                                       (((0U == (0xfffffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                            >> 4U)))) 
                                         << 0x1cU) 
                                        | (((0U == 
                                             (0x7ffffffU 
                                              & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                         >> 5U)))) 
                                            << 0x1bU) 
                                           | (((0U 
                                                == 
                                                (0x3ffffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                            >> 6U)))) 
                                               << 0x1aU) 
                                              | (((0U 
                                                   == 
                                                   (0x1ffffffU 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                               >> 7U)))) 
                                                  << 0x19U) 
                                                 | (((0U 
                                                      == 
                                                      (0xffffffU 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                  >> 8U)))) 
                                                     << 0x18U) 
                                                    | (((0U 
                                                         == 
                                                         (0x7fffffU 
                                                          & (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                     >> 9U)))) 
                                                        << 0x17U) 
                                                       | (((0U 
                                                            == 
                                                            (0x3fffffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                        >> 0xaU)))) 
                                                           << 0x16U) 
                                                          | (((0U 
                                                               == 
                                                               (0x1fffffU 
                                                                & (IData)(
                                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                           >> 0xbU)))) 
                                                              << 0x15U) 
                                                             | (((0U 
                                                                  == 
                                                                  (0xfffffU 
                                                                   & (IData)(
                                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                              >> 0xcU)))) 
                                                                 << 0x14U) 
                                                                | (((0U 
                                                                     == 
                                                                     (0x7ffffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0xdU)))) 
                                                                    << 0x13U) 
                                                                   | (((0U 
                                                                        == 
                                                                        (0x3ffffU 
                                                                         & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0xeU)))) 
                                                                       << 0x12U) 
                                                                      | (((0U 
                                                                           == 
                                                                           (0x1ffffU 
                                                                            & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0xfU)))) 
                                                                          << 0x11U) 
                                                                         | (((0U 
                                                                              == 
                                                                              (0xffffU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x10U)))) 
                                                                             << 0x10U) 
                                                                            | (((0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x11U)))) 
                                                                                << 0xfU) 
                                                                               | (((0U 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x12U)))) 
                                                                                << 0xeU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x13U)))) 
                                                                                << 0xdU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x14U)))) 
                                                                                << 0xcU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x15U)))) 
                                                                                << 0xbU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x16U)))) 
                                                                                << 0xaU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x17U)))) 
                                                                                << 9U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x18U)))) 
                                                                                << 8U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x19U)))) 
                                                                                << 7U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x1aU)))) 
                                                                                << 6U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x1bU)))) 
                                                                                << 5U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xfU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x1cU)))) 
                                                                                << 4U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x1dU)))) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x1eU)))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x1fU))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_dividend__cnt_o 
        = ((0U == (0xffffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                        >> 8U)))) ? 
           ((0U == (0x7fffffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                           >> 1U))))
             ? 0x1fU : ((0U == (0x3fffffffU & (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                       >> 2U))))
                         ? 0x1eU : ((0U == (0x1fffffffU 
                                            & (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                       >> 3U))))
                                     ? 0x1dU : ((0U 
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
                                                     : 0U))))))))
            : ((0U == (0xffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                          >> 0x10U))))
                ? ((0U == (0x7fffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                >> 9U))))
                    ? 0x17U : ((0U == (0x3fffffU & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                            >> 0xaU))))
                                ? 0x16U : ((0U == (0x1fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                              >> 0xbU))))
                                            ? 0x15U
                                            : ((0U 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                            >> 0xcU))))
                                                ? 0x14U
                                                : (
                                                   (0U 
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
                                                       : 0U))))))))
                : ((0U == (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                            >> 0x18U))))
                    ? ((0U == (0x7fffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                  >> 0x11U))))
                        ? 0xfU : ((0U == (0x3fffU & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                             >> 0x12U))))
                                   ? 0xeU : ((0U == 
                                              (0x1fffU 
                                               & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                          >> 0x13U))))
                                              ? 0xdU
                                              : ((0U 
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
                                                      : 0U))))))))
                    : ((0U == (0x7fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                >> 0x19U))))
                        ? 7U : ((0U == (0x3fU & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                         >> 0x1aU))))
                                 ? 6U : ((0U == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                            >> 0x1bU))))
                                          ? 5U : ((0U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                               >> 0x1cU))))
                                                   ? 4U
                                                   : 
                                                  ((0U 
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
                                                      : 1U))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hf9e144d9__0 
        = (0x1ffffffffULL & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_diff))
                              ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout))
                              : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                 << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hee0dcae5__0 
        = ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_lzc_dff__DOT__reg_qout))
            ? 0xffffffffU : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_big_dff__DOT__reg_qout)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout)
                              : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__need_corr 
        = (1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_lzc_dff__DOT__reg_qout) 
                     >> 5U)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_too_big_dff__DOT__reg_qout)) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout)
                                    ? (~ ((~ (IData)(
                                                     (0U 
                                                      != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout))) 
                                          | (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                                     >> 0x20U))))
                                    : (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout 
                                               >> 0x20U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_divisor__DOT__lzc_is_which 
        = (((0U == (0x7fffffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                           >> 1U)))) 
            << 0x1fU) | (((0U == (0x3fffffffU & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                         >> 2U)))) 
                          << 0x1eU) | (((0U == (0x1fffffffU 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                           >> 3U)))) 
                                        << 0x1dU) | 
                                       (((0U == (0xfffffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                            >> 4U)))) 
                                         << 0x1cU) 
                                        | (((0U == 
                                             (0x7ffffffU 
                                              & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                         >> 5U)))) 
                                            << 0x1bU) 
                                           | (((0U 
                                                == 
                                                (0x3ffffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                            >> 6U)))) 
                                               << 0x1aU) 
                                              | (((0U 
                                                   == 
                                                   (0x1ffffffU 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                               >> 7U)))) 
                                                  << 0x19U) 
                                                 | (((0U 
                                                      == 
                                                      (0xffffffU 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                  >> 8U)))) 
                                                     << 0x18U) 
                                                    | (((0U 
                                                         == 
                                                         (0x7fffffU 
                                                          & (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                     >> 9U)))) 
                                                        << 0x17U) 
                                                       | (((0U 
                                                            == 
                                                            (0x3fffffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                        >> 0xaU)))) 
                                                           << 0x16U) 
                                                          | (((0U 
                                                               == 
                                                               (0x1fffffU 
                                                                & (IData)(
                                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                           >> 0xbU)))) 
                                                              << 0x15U) 
                                                             | (((0U 
                                                                  == 
                                                                  (0xfffffU 
                                                                   & (IData)(
                                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                              >> 0xcU)))) 
                                                                 << 0x14U) 
                                                                | (((0U 
                                                                     == 
                                                                     (0x7ffffU 
                                                                      & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0xdU)))) 
                                                                    << 0x13U) 
                                                                   | (((0U 
                                                                        == 
                                                                        (0x3ffffU 
                                                                         & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0xeU)))) 
                                                                       << 0x12U) 
                                                                      | (((0U 
                                                                           == 
                                                                           (0x1ffffU 
                                                                            & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0xfU)))) 
                                                                          << 0x11U) 
                                                                         | (((0U 
                                                                              == 
                                                                              (0xffffU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x10U)))) 
                                                                             << 0x10U) 
                                                                            | (((0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x11U)))) 
                                                                                << 0xfU) 
                                                                               | (((0U 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x12U)))) 
                                                                                << 0xeU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x13U)))) 
                                                                                << 0xdU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x14U)))) 
                                                                                << 0xcU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x15U)))) 
                                                                                << 0xbU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x16U)))) 
                                                                                << 0xaU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x17U)))) 
                                                                                << 9U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x18U)))) 
                                                                                << 8U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x19U)))) 
                                                                                << 7U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1aU)))) 
                                                                                << 6U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1bU)))) 
                                                                                << 5U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xfU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1cU)))) 
                                                                                << 4U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1dU)))) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1eU)))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1fU))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_divisor__cnt_o 
        = ((0U == (0xffffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                        >> 8U)))) ? 
           ((0U == (0x7fffffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                           >> 1U))))
             ? 0x1fU : ((0U == (0x3fffffffU & (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                       >> 2U))))
                         ? 0x1eU : ((0U == (0x1fffffffU 
                                            & (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                       >> 3U))))
                                     ? 0x1dU : ((0U 
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
                                                     : 0U))))))))
            : ((0U == (0xffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                          >> 0x10U))))
                ? ((0U == (0x7fffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                >> 9U))))
                    ? 0x17U : ((0U == (0x3fffffU & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                            >> 0xaU))))
                                ? 0x16U : ((0U == (0x1fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                              >> 0xbU))))
                                            ? 0x15U
                                            : ((0U 
                                                == 
                                                (0xfffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                            >> 0xcU))))
                                                ? 0x14U
                                                : (
                                                   (0U 
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
                                                       : 0U))))))))
                : ((0U == (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                            >> 0x18U))))
                    ? ((0U == (0x7fffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                  >> 0x11U))))
                        ? 0xfU : ((0U == (0x3fffU & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                             >> 0x12U))))
                                   ? 0xeU : ((0U == 
                                              (0x1fffU 
                                               & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                          >> 0x13U))))
                                              ? 0xdU
                                              : ((0U 
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
                                                      : 0U))))))))
                    : ((0U == (0x7fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                >> 0x19U))))
                        ? 7U : ((0U == (0x3fU & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                         >> 0x1aU))))
                                 ? 6U : ((0U == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                            >> 0x1bU))))
                                          ? 5U : ((0U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                               >> 0x1cU))))
                                                   ? 4U
                                                   : 
                                                  ((0U 
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
                                                      : 1U))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__csa_3_2_x3 
        = (0xfffffffffULL & (((- (QData)((IData)((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout))))) 
                              & ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                                 << 4U)) | (((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                                    >> 1U))))) 
                                             & ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                                                << 3U)) 
                                            | (((~ 
                                                 ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                                                  << 3U)) 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                                         >> 3U)))))) 
                                               | ((~ 
                                                   ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                                                    << 4U)) 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                                           >> 4U))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5 
        = (0x7fU & (((- (IData)((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout)))) 
                     & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                >> 0x18U))) | (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                               >> 1U)))) 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                           >> 0x19U))) 
                                               | (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                                  >> 3U)))) 
                                                   & (~ (IData)(
                                                                ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                                                                 >> 0x19U)))) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                                    >> 4U)))) 
                                                     & (~ (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                   >> 0x18U))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_plsu_d_add1____pinNumber3 
        = (0xfffffffffULL & ((- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout))) 
                             ^ ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                                << 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4 
        = (0x7fU & (((- (IData)((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout)))) 
                     & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                >> 0x19U))) | ((0x3fU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                                  >> 1U)))) 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                              >> 0x1aU)))) 
                                               | (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                                  >> 3U)))) 
                                                   & (~ (IData)(
                                                                ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout)) 
                                                                 >> 0x1aU)))) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout) 
                                                                    >> 4U)))) 
                                                     & (~ (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                   >> 0x19U))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____VdfgTmp_hf22f5cdd__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_qout) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__rptr))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____VdfgTmp_h9df3f46e__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____VdfgTmp_h370bffe6__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wbu__DOT__wbck_o_valid_dff__DOT__reg_qout) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT__rptr))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__depend__DOT____VdfgTmp_h00239dbe__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_shift_ilgl 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_slli) 
            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_srli) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_srai))) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
              >> 0x19U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__bjp_op 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h3dbdfcf8__0) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_mret)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csr 
        = (((0U != (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                          >> 0xcU))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_system)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ecall));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rs1en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32) 
           & ((0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                               >> 0xfU))) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_lui)) 
                                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_auipc)) 
                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_jal)) 
                                                   & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fence)) 
                                                      & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fencei)) 
                                                         & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ecall)) 
                                                            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ebreak)) 
                                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h68212022__0)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rdwen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__dec_rv32) 
           & ((0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                               >> 7U))) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch)) 
                                           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_store)) 
                                              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fence)) 
                                                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fencei)) 
                                                    & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ecall)) 
                                                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ebreak)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__dec_jal 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_6_5_11) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_4_2_011) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_1_0_11)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_fencei 
        = (IData)(((((0x1000U == (0x1060U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_4_2_011)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__opcode_1_0_11)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h6fc4c6af__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__dec_ecall 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_hf4160036__0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h0fa23aad__0) 
              & (IData)((((0U == (0x30300000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout)) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h452a276f__0)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h7bb56642__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__dec_mret 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_hf4160036__0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h0fa23aad__0) 
              & (IData)((((0x30200000U == (0x30300000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__icache__DOT__ifetch_rsp_inst_dff__DOT__reg_qout)) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h452a276f__0)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT____VdfgTmp_h7bb56642__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__alu__DOT__alu_wbck_ebreak_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_rd_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rd_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_rd_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->__VdfgTmp_h3d5389e9__0 = (0x7fffffffffffffffULL 
                                      & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_3 
                                           << 6U) & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_extend 
                                           << 8U)) 
                                         | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_3 
                                              << 6U) 
                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_extend 
                                                << 8U)) 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_qout 
                                               << 8U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__intermediate_sum3 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_3 
            << 6U) ^ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__partial_product_extend 
                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_qout) 
                      << 8U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_res_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_data_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__bjp__DOT__bjp_o_valid_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_data_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__csr__DOT__csr_o_valid_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul_i_signed1 
        = (IData)((0U != (0x60U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_i_signed 
        = (IData)((0U != (0x500U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul_req_sh 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid) 
            & (IData)((0U != (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_quot 
        = (IData)((0U != (0x300U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_rem 
        = (IData)((0U != (0xc00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_res_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_rdwen_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_miss0 
        = ((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
            [(0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                       >> 2U))][0U]) > (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                                        [(0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                                   >> 2U))]
                                        [1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_addr_inside 
        = ((0xf00U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                       >> 0x10U)) | (0x2000U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                                 >> 0x10U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_pc_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_pc_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__com__DOT__com_o_pc_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__normalized_dividend 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout) 
           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_dividend__cnt_o));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hc84a0142__0 
        = ((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hf9e144d9__0 
                            >> 0x1dU))) >= ((4U & (
                                                   (- (IData)(
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
                                            | ((6U 
                                                & (- (IData)(
                                                             (4U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                          >> 0x1cU))))))) 
                                               | ((6U 
                                                   & (- (IData)(
                                                                (5U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                             >> 0x1cU))))))) 
                                                  | ((6U 
                                                      & (- (IData)(
                                                                   (6U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1cU))))))) 
                                                     | (8U 
                                                        & (- (IData)(
                                                                     (7U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                                >> 0x1cU))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_he1627121__0 
        = ((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hf9e144d9__0 
                            >> 0x1dU))) >= ((0xcU & 
                                             (- (IData)(
                                                        (0U 
                                                         == 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                     >> 0x1cU))))))) 
                                            | ((0xeU 
                                                & (- (IData)(
                                                             (1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout 
                                                                          >> 0x1cU))))))) 
                                               | ((0xfU 
                                                   & (- (IData)(
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
                                                                                >> 0x1cU)))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__pre_shifted_rem 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__need_corr)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_reg_src1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_diff_nxt 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_divisor__cnt_o) 
                    - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_dividend__cnt_o)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__normalized_divisor 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_abs_dff__DOT__reg_qout) 
           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellout__lzc_divisor__cnt_o));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_iter_end 
        = (0xfffffffffULL & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                              << 2U) ^ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                         << 2U) ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__csa_3_2_x3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_iter_end 
        = ((0xffffffffeULL & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout) 
                               << 3U) | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                           | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout) 
                                          << 3U) & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__csa_3_2_x3 
                                          << 1U)))) 
           | (QData)((IData)((0U != (0x18U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_dff__DOT__reg_qout))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__sd_m_pos_2_sign 
        = (1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                           >> 0x1aU)) + ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                                  >> 0x1aU)) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5) 
                                            + (0x40U 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_pos2_dff__DOT__reg_qout) 
                                                  << 1U))))) 
                 >> 6U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_plsu_d_nxt_x0 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber1 
           ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber2 
              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_plsu_d_add1____pinNumber3));
    vlSelf->__VdfgTmp_h1ddb876e__0 = (0x7ffffffffULL 
                                      & (vlSelf->__VdfgTmp_h6fbd2f8c__0 
                                         | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber1 
                                             | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_add1____pinNumber2) 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____Vcellinp__nrdnt_rem_plsu_d_add1____pinNumber3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__sd_m_neg_0_sign 
        = (1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                           >> 0x1bU)) + ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                                  >> 0x1bU)) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4) 
                                            + (IData)(vlSelf->__VdfgTmp_hcdb3edec__0)))) 
                 >> 6U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__sd_m_pos_1_sign 
        = (1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                           >> 0x1bU)) + ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                                  >> 0x1bU)) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__divisor_for_sd_trunc_3_4) 
                                            + (0x78U 
                                               | (IData)(vlSelf->__VdfgTmp_h1195937e__0))))) 
                 >> 6U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_reg_src2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regs
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_rs2];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__alu_op 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_shift_ilgl)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op_imm) 
              | (((1U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                          >> 0x19U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_op)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_auipc) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_lui) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_nop) 
                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h23370bb6__0) 
                              & (0x105U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                            >> 0x14U))) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ebreak))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage1__DOT__fencei_need_wait_set 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifetch_rsp_fencei) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_o_valid));
    vlSelf->__VdfgTmp_h3be0d50b__0 = (1U | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__dec_mret) 
                                             << 6U) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__dec_ecall) 
                                               << 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_csr_ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__dec_ecall) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_stage2__DOT__if_decode__DOT__dec_mret));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__intermediate_sum5 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__intermediate_sum1 
           ^ ((vlSelf->__VdfgTmp_h2d611035__0 << 1U) 
              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__intermediate_sum3));
    vlSelf->__VdfgTmp_h796c662f__0 = (0x7fffffffffffffffULL 
                                      & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__intermediate_sum1 
                                          & (vlSelf->__VdfgTmp_h2d611035__0 
                                             << 1U)) 
                                         | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__intermediate_sum1 
                                             | (vlSelf->__VdfgTmp_h2d611035__0 
                                                << 1U)) 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__intermediate_sum3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_clean 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_miss0) 
                  & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                        [(0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                   >> 2U))][0U] >> 4U))) 
                 | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_miss0)) 
                    & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                          [(0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                     >> 2U))][1U] >> 4U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_dirty 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_miss0) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                     [(0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                >> 2U))][0U] >> 4U)) 
                 | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_miss0)) 
                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                       [(0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                  >> 2U))][1U] >> 4U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_read_outaddr 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_addr_inside)) 
                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                    >> 4U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_hit0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_addr_inside) 
           & ((0xffffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                            [(0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                       >> 2U))][0U] 
                            >> 5U)) == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                        >> 8U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_hit1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_addr_inside) 
           & ((0xffffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_extend
                            [(0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                       >> 2U))][1U] 
                            >> 5U)) == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_src1_dff__DOT__reg_qout 
                                        >> 8U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_write_outaddr 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__lsu_req_addr_inside)) 
                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lsu__DOT__lsu_infobus_dff__DOT__reg_qout 
                    >> 5U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram__DOT__sram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__dcache__DOT__dcache_sram_addr];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_nxt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_i_signed) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src1_dff__DOT__reg_qout 
              >> 0x1fU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplicand_neg 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul_i_signed1) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src1_dff__DOT__reg_qout 
              >> 0x1fU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src1_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_plus_d_nxt 
        = (0xfffffffffULL & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_plsu_d_nxt_x0 
                              ^ ((vlSelf->__VdfgTmp_h1ddb876e__0 
                                  << 1U) ^ (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout)) 
                                             << 1U) 
                                            | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout))))) 
                             + (0xffffffffeULL & ((
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_plsu_d_nxt_x0 
                                                    << 1U) 
                                                   & (vlSelf->__VdfgTmp_h1ddb876e__0 
                                                      << 2U)) 
                                                  | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__nrdnt_rem_plsu_d_nxt_x0 
                                                       << 1U) 
                                                      | (vlSelf->__VdfgTmp_h1ddb876e__0 
                                                         << 2U)) 
                                                     & ((QData)((IData)(
                                                                        (3U 
                                                                         & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout)))))) 
                                                        << 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_hd0d7bce6__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__sd_m_pos_1_sign) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__sd_m_neg_0_sign));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__u_sign_coder__DOT____VdfgTmp_h91734dab__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__sd_m_pos_1_sign) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__sd_m_neg_0_sign) 
                       << 1U) | (1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_sum_dff__DOT__reg_qout 
                                                 >> 0x1aU)) 
                                        + ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_carry_dff__DOT__reg_qout 
                                                    >> 0x1aU)) 
                                           + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__u_qds__DOT__divisor_for_sd_trunc_2_5) 
                                              + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__qds_para_neg1_dff__DOT__reg_qout) 
                                                 << 1U)))) 
                                       >> 6U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_neg 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_i_signed) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src2_dff__DOT__reg_qout 
              >> 0x1fU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__state_nxt 
        = ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
            ? ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                ? 1U : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                         ? 1U : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                                  ? 1U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                                           ? 1U : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                                                    ? 1U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                                                     ? 1U
                                                     : 0x20U))))))
            : ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                ? ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                    ? 1U : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                             ? 1U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                                      ? 1U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                                               ? 1U
                                               : 0x20U))))
                : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                    ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                        ? 1U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                                 ? 1U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                                          ? 1U : 0x10U)))
                    : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                        ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                            ? 1U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                                     ? 1U : 8U)) : 
                       ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                             ? 1U : 4U) : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul_req_sh)
                                                ? (
                                                   ((0U 
                                                     == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src1_dff__DOT__reg_qout) 
                                                    | (0U 
                                                       == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src2_dff__DOT__reg_qout))
                                                    ? 0x20U
                                                    : 2U)
                                                : 1U)
                                            : 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__multiplier_neg 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_infobus_dff__DOT__reg_qout 
            >> 5U) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src2_dff__DOT__reg_qout 
                      >> 0x1fU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src2_dff__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_s1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)));
    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_num_nxt 
            = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_diff) 
                        >> 1U) + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__lzc_diff))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__shifter_din 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_abs_dff__DOT__reg_qout);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__shifter_num 
            = (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__dividend_lzc_dff__DOT__reg_qout));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_num_nxt 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_num_dff__DOT__reg_qout) 
                       - (IData)(1U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__shifter_din 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__pre_shifted_rem);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__shifter_num 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT____VdfgTmp_hcf4afe7a__0)
                         ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__divisor_lzc_dff__DOT__reg_qout)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__prev_quot_digit_en 
        = (IData)((0U != (0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__inv1 
        = (- ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))
               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src1_dff__DOT__reg_qout
               : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__inv2 
        = (- ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout))
               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_src2_dff__DOT__reg_qout
               : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__iter_quot_minus_1_dff__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_req_sh 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__muldiv_req_valid) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_quot) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div_rem))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__shifter_extend_msb 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
            >> 5U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__rem_neg_dff__DOT__reg_qout) 
                      & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__pre_shifted_rem 
                                 >> 0x20U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv_o_valid 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__div__DOT__div_state__DOT__reg_qout) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__muldiv__DOT__mul__DOT__mul_state__DOT__reg_qout)) 
                 >> 5U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_o_infobus 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__alu_op)
            ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_ebreak) 
                << 0x12U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_nop) 
                              << 0x11U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_auipc) 
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
                                                                                << 3U))))))))))))))))
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__bjp_op)
                ? (1U | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_mret) 
                          << 0xdU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
                                       << 0xcU) | (
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_branch) 
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
                                                                           << 3U))))))))))))
                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__lsu_op)
                    ? (2U | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fencei) 
                              << 0xbU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_fence) 
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
                                                            << 3U)))))))))
                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__rv32_csr)
                        ? (3U | ((0x7ff8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                >> 5U)) 
                                 | (((0U == (0x1fU 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                >> 0xfU))) 
                                     << 0xeU) | ((0x3e00U 
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
                                                                   << 3U))))))))))
                        : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT__mul_op)
                            ? (4U | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h9224901c__0) 
                                       & (1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__id_inst_dff__DOT__reg_qout 
                                                 >> 0x19U))) 
                                      << 0xbU) | ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__decode__DOT____VdfgTmp_h939a9767__0) 
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
                                                                       << 3U))))))))))
                            : 0U)))));
}
