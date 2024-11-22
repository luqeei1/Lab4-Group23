// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsignExtend__Syms.h"


void VsignExtend___024root__trace_chg_sub_0(VsignExtend___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VsignExtend___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtend___024root__trace_chg_top_0\n"); );
    // Init
    VsignExtend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsignExtend___024root*>(voidSelf);
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VsignExtend___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VsignExtend___024root__trace_chg_sub_0(VsignExtend___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtend___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->IMMSrc),2);
    bufp->chgIData(oldp+1,(vlSelf->ImmInput),25);
    bufp->chgIData(oldp+2,(vlSelf->ImmExt),32);
}

void VsignExtend___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtend___024root__trace_cleanup\n"); );
    // Init
    VsignExtend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsignExtend___024root*>(voidSelf);
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
