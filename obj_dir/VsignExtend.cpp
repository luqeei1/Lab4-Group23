// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VsignExtend.h"
#include "VsignExtend__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VsignExtend::VsignExtend(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VsignExtend__Syms(contextp(), _vcname__, this)}
    , IMMSrc{vlSymsp->TOP.IMMSrc}
    , ImmInput{vlSymsp->TOP.ImmInput}
    , ImmExt{vlSymsp->TOP.ImmExt}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VsignExtend::VsignExtend(const char* _vcname__)
    : VsignExtend(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VsignExtend::~VsignExtend() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VsignExtend___024root___eval_initial(VsignExtend___024root* vlSelf);
void VsignExtend___024root___eval_settle(VsignExtend___024root* vlSelf);
void VsignExtend___024root___eval(VsignExtend___024root* vlSelf);
#ifdef VL_DEBUG
void VsignExtend___024root___eval_debug_assertions(VsignExtend___024root* vlSelf);
#endif  // VL_DEBUG
void VsignExtend___024root___final(VsignExtend___024root* vlSelf);

static void _eval_initial_loop(VsignExtend__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VsignExtend___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VsignExtend___024root___eval_settle(&(vlSymsp->TOP));
        VsignExtend___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VsignExtend::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VsignExtend::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VsignExtend___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VsignExtend___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VsignExtend::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VsignExtend::final() {
    VsignExtend___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VsignExtend::hierName() const { return vlSymsp->name(); }
const char* VsignExtend::modelName() const { return "VsignExtend"; }
unsigned VsignExtend::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VsignExtend::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VsignExtend___024root__trace_init_top(VsignExtend___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VsignExtend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsignExtend___024root*>(voidSelf);
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VsignExtend___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VsignExtend___024root__trace_register(VsignExtend___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VsignExtend::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VsignExtend___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
