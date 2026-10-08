// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_morae_core.h for the primary calling header

#include "Vtb_morae_core__pch.h"
#include "Vtb_morae_core__Syms.h"
#include "Vtb_morae_core___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_morae_core___024root___eval_initial__TOP__Vtiming__0(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    if (VL_TESTPLUSARGS_I(std::string{"trace"})) {
        __Vtemp_1[0U] = 0x2e667374U;
        __Vtemp_1[1U] = 0x77617665U;
        __Vtemp_1[2U] = 0x696c642fU;
        __Vtemp_1[3U] = 0x6275U;
        vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
        vlSymsp->_traceDumpOpen();
    }
    vlSelfRef.tb_morae_core__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_h31ce0a72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_morae_core.clk)", 
                                                         "../tb/tb_morae_core.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_h31ce0a72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_morae_core.clk)", 
                                                         "../tb/tb_morae_core.sv", 
                                                         50);
    vlSelfRef.tb_morae_core__DOT__rst_n = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_morae_core___024root___dump_triggers__act(Vtb_morae_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_morae_core___024root___eval_triggers__act(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_morae_core__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_morae_core__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_morae_core__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_morae_core__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.tb_morae_core__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_morae_core__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_morae_core__DOT__clk__0 
        = vlSelfRef.tb_morae_core__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_morae_core__DOT__rst_n__0 
        = vlSelfRef.tb_morae_core__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_morae_core___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_morae_core___024root___nba_sequent__TOP__0(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__tb_morae_core__DOT__cycles;
    __Vdly__tb_morae_core__DOT__cycles = 0;
    IData/*31:0*/ __VdlyVal__tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs__v0;
    __VdlyVal__tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs__v0;
    __VdlyDim0__tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs__v0;
    __VdlySet__tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v0;
    __VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v0;
    __VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v0;
    __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v1;
    __VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v1 = 0;
    SData/*13:0*/ __VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v1;
    __VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v1;
    __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v2;
    __VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v2 = 0;
    SData/*13:0*/ __VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v2;
    __VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v2;
    __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v3;
    __VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v3 = 0;
    SData/*13:0*/ __VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v3;
    __VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v3;
    __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v3 = 0;
    // Body
    __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v0 = 0U;
    __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v1 = 0U;
    __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v2 = 0U;
    __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v3 = 0U;
    __Vdly__tb_morae_core__DOT__cycles = vlSelfRef.tb_morae_core__DOT__cycles;
    __VdlySet__tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs__v0 = 0U;
    vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__unnamedblk2__DOT__i = 4U;
    if ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__mem_wstrb))) {
        __VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v0 
            = (0xffU & vlSelfRef.tb_morae_core__DOT__dmem_wdata);
        __VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v0 
            = (0x3fffU & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y 
                          >> 2U));
        __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.tb_morae_core__DOT__mem_wstrb))) {
        __VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v1 
            = (0xffU & (vlSelfRef.tb_morae_core__DOT__dmem_wdata 
                        >> 8U));
        __VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v1 
            = (0x3fffU & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y 
                          >> 2U));
        __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v1 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.tb_morae_core__DOT__mem_wstrb))) {
        __VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v2 
            = (0xffU & (vlSelfRef.tb_morae_core__DOT__dmem_wdata 
                        >> 0x10U));
        __VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v2 
            = (0x3fffU & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y 
                          >> 2U));
        __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v2 = 1U;
    }
    if ((8U & (IData)(vlSelfRef.tb_morae_core__DOT__mem_wstrb))) {
        __VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v3 
            = (vlSelfRef.tb_morae_core__DOT__dmem_wdata 
               >> 0x18U);
        __VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v3 
            = (0x3fffU & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y 
                          >> 2U));
        __VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v3 = 1U;
    }
    if (vlSelfRef.tb_morae_core__DOT__rst_n) {
        __Vdly__tb_morae_core__DOT__cycles = ((IData)(1U) 
                                              + vlSelfRef.tb_morae_core__DOT__cycles);
        if (VL_UNLIKELY((0U != (3U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_morae_core.sv:59: Assertion failed in %Ntb_morae_core: misaligned pc=%08x\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc);
            VL_STOP_MT("../tb/tb_morae_core.sv", 59, "", false);
        }
        if (((0U != (IData)(vlSelfRef.tb_morae_core__DOT__dmem_wstrb)) 
             & (0x10000000U == vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y))) {
            if ((1U == vlSelfRef.tb_morae_core__DOT__dmem_wdata)) {
                VL_WRITEF_NX("PASS (%0d cycles)\n",0,
                             32,vlSelfRef.tb_morae_core__DOT__cycles);
                VL_FINISH_MT("../tb/tb_morae_core.sv", 63, "");
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_morae_core.sv:65: Assertion failed in %Ntb_morae_core: FAIL: test %0# (pc=%08x)\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             VL_SHIFTR_III(32,32,32, vlSelfRef.tb_morae_core__DOT__dmem_wdata, 1U),
                             32,vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc);
                VL_STOP_MT("../tb/tb_morae_core.sv", 65, "", false);
            }
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, vlSelfRef.tb_morae_core__DOT__cycles))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_morae_core.sv:68: Assertion failed in %Ntb_morae_core: TIMEOUT after %0d cycles (pc=%08x)\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.tb_morae_core__DOT__cycles,
                         32,vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc);
            VL_STOP_MT("../tb/tb_morae_core.sv", 68, "", false);
        }
    }
    if (((IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_write) 
         & (0U != (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_addr)))) {
        vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_hf9468087__0 
            = ((1U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__wb_sel))
                ? ((4U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                    ? ((2U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                        ? vlSelfRef.tb_morae_core__DOT__dmem_rdata
                        : ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                            ? (0xffffU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0)
                            : (0xffU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0)))
                    : ((2U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                        ? vlSelfRef.tb_morae_core__DOT__dmem_rdata
                        : ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                            ? (((- (IData)((1U & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0))
                            : (((- (IData)((1U & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0)))))
                : ((2U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__wb_sel))
                    ? ((IData)(4U) + vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc)
                    : vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y));
        if ((0x1eU >= (0x1fU & ((IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_addr) 
                                - (IData)(1U))))) {
            __VdlyVal__tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs__v0 
                = vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_hf9468087__0;
            __VdlyDim0__tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs__v0 
                = (0x1fU & ((IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_addr) 
                            - (IData)(1U)));
            __VdlySet__tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs__v0 = 1U;
        }
    }
    if (__VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v0) {
        vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__mem[__VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__mem
                [__VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v0));
    }
    if (__VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v1) {
        vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__mem[__VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__mem
                [__VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v2) {
        vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__mem[__VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__mem
                [__VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tb_morae_core__DOT__u_dmem__DOT__mem__v3) {
        vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__mem[__VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__mem
                [__VdlyDim0__tb_morae_core__DOT__u_dmem__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_morae_core__DOT__u_dmem__DOT__mem__v3) 
                  << 0x18U));
    }
    vlSelfRef.tb_morae_core__DOT__cycles = __Vdly__tb_morae_core__DOT__cycles;
    if (__VdlySet__tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs__v0) {
        vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[__VdlyDim0__tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs__v0] 
            = __VdlyVal__tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs__v0;
    }
}
