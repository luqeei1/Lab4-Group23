// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsignExtend__Syms.h"


VL_ATTR_COLD void VsignExtend___024root__trace_init_sub__TOP__0(VsignExtend___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtend___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"IMMSrc", false,-1, 1,0);
    tracep->declBus(c+2,"ImmInput", false,-1, 31,7);
    tracep->declBus(c+3,"ImmExt", false,-1, 31,0);
    tracep->pushNamePrefix("signExtend ");
    tracep->declBus(c+4,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"IMMSrc", false,-1, 1,0);
    tracep->declBus(c+2,"ImmInput", false,-1, 31,7);
    tracep->declBus(c+3,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VsignExtend___024root__trace_init_top(VsignExtend___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtend___024root__trace_init_top\n"); );
    // Body
    VsignExtend___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VsignExtend___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsignExtend___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsignExtend___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VsignExtend___024root__trace_register(VsignExtend___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtend___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VsignExtend___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VsignExtend___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VsignExtend___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VsignExtend___024root__trace_full_sub_0(VsignExtend___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VsignExtend___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtend___024root__trace_full_top_0\n"); );
    // Init
    VsignExtend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsignExtend___024root*>(voidSelf);
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VsignExtend___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VsignExtend___024root__trace_full_sub_0(VsignExtend___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtend___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->IMMSrc),2);
    bufp->fullIData(oldp+2,(vlSelf->ImmInput),25);
    bufp->fullIData(oldp+3,(vlSelf->ImmExt),32);
    bufp->fullIData(oldp+4,(0x20U),32);
}
