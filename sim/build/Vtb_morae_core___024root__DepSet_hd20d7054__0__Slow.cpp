// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_morae_core.h for the primary calling header

#include "Vtb_morae_core__pch.h"
#include "Vtb_morae_core___024root.h"

VL_ATTR_COLD void Vtb_morae_core___024root___eval_static__TOP(Vtb_morae_core___024root* vlSelf);
VL_ATTR_COLD void Vtb_morae_core___024root____Vm_traceActivitySetAll(Vtb_morae_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_morae_core___024root___eval_static(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_morae_core___024root___eval_static__TOP(vlSelf);
    Vtb_morae_core___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtb_morae_core___024root___eval_static__TOP(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_morae_core__DOT__clk = 0U;
    vlSelfRef.tb_morae_core__DOT__cycles = 0U;
}

VL_ATTR_COLD void Vtb_morae_core___024root___eval_initial__TOP(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INN(64, std::string{"prog=%s"}, 
                                         vlSelfRef.tb_morae_core__DOT__u_imem__DOT__unnamedblk1__DOT__prog))) {
        VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NN(vlSelfRef.tb_morae_core__DOT__u_imem__DOT__unnamedblk1__DOT__prog)
                     ,  &(vlSelfRef.tb_morae_core__DOT__u_imem__DOT__mem)
                     , 0, ~0ULL);
    }
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INN(64, std::string{"prog=%s"}, 
                                         vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__unnamedblk1__DOT__prog))) {
        VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NN(vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__unnamedblk1__DOT__prog)
                     ,  &(vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__mem)
                     , 0, ~0ULL);
    }
}

VL_ATTR_COLD void Vtb_morae_core___024root___eval_final(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_morae_core___024root___dump_triggers__stl(Vtb_morae_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_morae_core___024root___eval_phase__stl(Vtb_morae_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_morae_core___024root___eval_settle(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_morae_core___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../tb/tb_morae_core.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_morae_core___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_morae_core___024root___dump_triggers__stl(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_morae_core___024root___stl_sequent__TOP__0(Vtb_morae_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_morae_core___024root___eval_stl(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_morae_core___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_morae_core___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_morae_core___024root___stl_sequent__TOP__0(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_addr 
        = (0x1fU & (vlSelfRef.tb_morae_core__DOT__u_imem__DOT__mem
                    [(0x3fffU & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc 
                                 >> 2U))] >> 7U));
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_addr 
        = (0x1fU & (vlSelfRef.tb_morae_core__DOT__u_imem__DOT__mem
                    [(0x3fffU & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc 
                                 >> 2U))] >> 0xfU));
    vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst 
        = (vlSelfRef.tb_morae_core__DOT__u_imem__DOT__mem
           [(0x3fffU & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc 
                        >> 2U))] >> 7U);
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_addr 
        = (0x1fU & (vlSelfRef.tb_morae_core__DOT__u_imem__DOT__mem
                    [(0x3fffU & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc 
                                 >> 2U))] >> 0x14U));
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst 
        = vlSelfRef.tb_morae_core__DOT__u_imem__DOT__mem
        [(0x3fffU & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc 
                     >> 2U))];
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3 
        = (7U & (vlSelfRef.tb_morae_core__DOT__u_imem__DOT__mem
                 [(0x3fffU & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc 
                              >> 2U))] >> 0xcU));
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data 
        = ((0U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_addr))
            ? 0U : ((0x1eU >= (0x1fU & ((IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_addr) 
                                        - (IData)(1U))))
                     ? vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs
                    [(0x1fU & ((IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_addr) 
                               - (IData)(1U)))] : 0U));
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data 
        = ((0U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_addr))
            ? 0U : ((0x1eU >= (0x1fU & ((IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_addr) 
                                        - (IData)(1U))))
                     ? vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs
                    [(0x1fU & ((IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_addr) 
                               - (IData)(1U)))] : 0U));
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm_sel = 0U;
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op = 0U;
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__a_sel = 0U;
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__b_sel = 1U;
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_write = 0U;
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__wb_sel = 0U;
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__mem_write = 0U;
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__jump = 0U;
    if ((0x40U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
        if ((0x20U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
            if ((1U & (~ (vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst 
                          >> 4U)))) {
                if ((8U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                    if ((4U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                        if ((2U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                            if ((1U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                                vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm_sel = 4U;
                                vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_write = 1U;
                                vlSelfRef.tb_morae_core__DOT__u_core__DOT__wb_sel = 2U;
                                vlSelfRef.tb_morae_core__DOT__u_core__DOT__jump = 2U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                    if ((2U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                        if ((1U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                            vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_write = 1U;
                            vlSelfRef.tb_morae_core__DOT__u_core__DOT__wb_sel = 2U;
                            vlSelfRef.tb_morae_core__DOT__u_core__DOT__jump = 3U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                    if ((1U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                        vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm_sel = 2U;
                        vlSelfRef.tb_morae_core__DOT__u_core__DOT__jump = 1U;
                    }
                }
            }
        }
    } else if ((0x20U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
        if ((0x10U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
            if ((1U & (~ (vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst 
                          >> 3U)))) {
                if ((4U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                    if ((2U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                        if ((1U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                            vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm_sel = 3U;
                            vlSelfRef.tb_morae_core__DOT__u_core__DOT__a_sel = 2U;
                            vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_write = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                    if ((1U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                        vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__arith 
                            = (1U & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst 
                                     >> 0x1eU));
                        vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__f3 
                            = vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3;
                        {
                            if ((4U & (IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__f3))) {
                                if ((2U & (IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__f3))) {
                                    if ((1U & (IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__f3))) {
                                        vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__Vfuncout = 9U;
                                        goto __Vlabel1;
                                    } else {
                                        vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__Vfuncout = 8U;
                                        goto __Vlabel1;
                                    }
                                } else if ((1U & (IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__f3))) {
                                    vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__Vfuncout 
                                        = ((IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__arith)
                                            ? 7U : 6U);
                                    goto __Vlabel1;
                                } else {
                                    vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__Vfuncout = 5U;
                                    goto __Vlabel1;
                                }
                            } else if ((2U & (IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__f3))) {
                                if ((1U & (IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__f3))) {
                                    vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__Vfuncout = 4U;
                                    goto __Vlabel1;
                                } else {
                                    vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__Vfuncout = 3U;
                                    goto __Vlabel1;
                                }
                            } else if ((1U & (IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__f3))) {
                                vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__Vfuncout = 2U;
                                goto __Vlabel1;
                            } else {
                                vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__arith)
                                        ? 1U : 0U);
                                goto __Vlabel1;
                            }
                            __Vlabel1: ;
                        }
                        vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op 
                            = vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__Vfuncout;
                        vlSelfRef.tb_morae_core__DOT__u_core__DOT__b_sel = 0U;
                        vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_write = 1U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst 
                          >> 2U)))) {
                if ((2U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                    if ((1U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                        vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm_sel = 1U;
                        vlSelfRef.tb_morae_core__DOT__u_core__DOT__mem_write = 1U;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
        if ((1U & (~ (vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst 
                      >> 3U)))) {
            if ((4U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                if ((2U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                    if ((1U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                        vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm_sel = 3U;
                        vlSelfRef.tb_morae_core__DOT__u_core__DOT__a_sel = 1U;
                        vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_write = 1U;
                    }
                }
            } else if ((2U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                if ((1U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                    vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__arith 
                        = ((5U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3)) 
                           & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst 
                              >> 0x1eU));
                    vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__f3 
                        = vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3;
                    {
                        if ((4U & (IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__f3))) {
                            if ((2U & (IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__f3))) {
                                if ((1U & (IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__f3))) {
                                    vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__Vfuncout = 9U;
                                    goto __Vlabel2;
                                } else {
                                    vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__Vfuncout = 8U;
                                    goto __Vlabel2;
                                }
                            } else if ((1U & (IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__f3))) {
                                vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__arith)
                                        ? 7U : 6U);
                                goto __Vlabel2;
                            } else {
                                vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__Vfuncout = 5U;
                                goto __Vlabel2;
                            }
                        } else if ((2U & (IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__f3))) {
                            if ((1U & (IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__f3))) {
                                vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__Vfuncout = 4U;
                                goto __Vlabel2;
                            } else {
                                vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__Vfuncout = 3U;
                                goto __Vlabel2;
                            }
                        } else if ((1U & (IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__f3))) {
                            vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__Vfuncout = 2U;
                            goto __Vlabel2;
                        } else {
                            vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__Vfuncout 
                                = ((IData)(vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__arith)
                                    ? 1U : 0U);
                            goto __Vlabel2;
                        }
                        __Vlabel2: ;
                    }
                    vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op 
                        = vlSelfRef.__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__Vfuncout;
                    vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_write = 1U;
                }
            }
        }
    } else if ((1U & (~ (vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst 
                         >> 3U)))) {
        if ((1U & (~ (vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst 
                      >> 2U)))) {
            if ((2U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                if ((1U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst)) {
                    vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_write = 1U;
                    vlSelfRef.tb_morae_core__DOT__u_core__DOT__wb_sel = 1U;
                }
            }
        }
    }
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_a 
        = ((1U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__a_sel))
            ? vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc
            : ((2U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__a_sel))
                ? 0U : vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data));
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm 
        = ((4U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm_sel))
            ? ((2U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm_sel))
                ? 0U : ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm_sel))
                         ? 0U : (((- (IData)((1U & 
                                              (vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst 
                                               >> 0x18U)))) 
                                  << 0x14U) | (((0xff000U 
                                                 & (vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst 
                                                    << 7U)) 
                                                | (0x800U 
                                                   & (vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst 
                                                      >> 2U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst 
                                                     >> 0xdU))))))
            : ((2U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm_sel))
                ? ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm_sel))
                    ? (0xfffff000U & (vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst 
                                      << 7U)) : (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst 
                                                                 >> 0x18U)))) 
                                                  << 0xcU) 
                                                 | ((0x800U 
                                                     & (vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst 
                                                        << 0xbU)) 
                                                    | ((0x7e0U 
                                                        & (vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst 
                                                           >> 0xdU)) 
                                                       | (0x1eU 
                                                          & vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst)))))
                : ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm_sel))
                    ? (((- (IData)((1U & (vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst 
                                          >> 0x18U)))) 
                        << 0xcU) | ((0xfe0U & (vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst 
                                               >> 0xdU)) 
                                    | (0x1fU & vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst)))
                    : (((- (IData)((1U & (vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst 
                                          >> 0x18U)))) 
                        << 0xcU) | (0xfffU & (vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst 
                                              >> 0xdU))))));
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc_target 
        = (vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm 
           + vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc);
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_b 
        = ((IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__b_sel)
            ? vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm
            : vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data);
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y 
        = ((8U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op))
            ? ((4U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op))
                ? 0U : ((2U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op))
                         ? 0U : ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op))
                                  ? (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_a 
                                     & vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_b)
                                  : (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_a 
                                     | vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_b))))
            : ((4U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op))
                ? ((2U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_a, 
                                         (0x1fU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_b))
                        : (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_a 
                           >> (0x1fU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_b)))
                    : ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op))
                        ? (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_a 
                           ^ vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_b)
                        : (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_a 
                           < vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_b)))
                : ((2U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op))
                    ? ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op))
                        ? VL_LTS_III(32, vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_a, vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_b)
                        : (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_a 
                           << (0x1fU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_b)))
                    : ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op))
                        ? (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_a 
                           - vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_b)
                        : (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_a 
                           + vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_b)))));
    if ((0U == (3U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3)))) {
        vlSelfRef.tb_morae_core__DOT__dmem_wdata = 
            ((vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data 
              << 0x18U) | ((0xff0000U & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data 
                                         << 0x10U)) 
                           | ((0xff00U & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data 
                                          << 8U)) | 
                              (0xffU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data))));
        vlSelfRef.tb_morae_core__DOT__dmem_wstrb = 
            (0xfU & ((IData)(1U) << (3U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y)));
    } else if ((1U == (3U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3)))) {
        vlSelfRef.tb_morae_core__DOT__dmem_wdata = 
            ((vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data 
              << 0x10U) | (0xffffU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data));
        vlSelfRef.tb_morae_core__DOT__dmem_wstrb = 
            (0xfU & ((IData)(3U) << (3U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y)));
    } else {
        vlSelfRef.tb_morae_core__DOT__dmem_wdata = vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data;
        vlSelfRef.tb_morae_core__DOT__dmem_wstrb = 
            (0xfU & 0xfU);
    }
    vlSelfRef.tb_morae_core__DOT__dmem_rdata = vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__mem
        [(0x3fffU & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y 
                     >> 2U))];
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0 
        = (vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__mem
           [(0x3fffU & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y 
                        >> 2U))] >> (0x18U & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y 
                                              << 3U)));
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc_next 
        = ((2U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__jump))
            ? vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc_target
            : ((3U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__jump))
                ? (0xfffffffeU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y)
                : ((1U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__jump))
                    ? (((4U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                         ? ((2U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                             ? ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                 ? (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data 
                                    >= vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data)
                                 : (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data 
                                    < vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data))
                             : ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                 ? VL_GTES_III(32, vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data, vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data)
                                 : VL_LTS_III(32, vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data, vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data)))
                         : ((1U & (~ ((IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3) 
                                      >> 1U))) && (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                                    ? 
                                                   (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data 
                                                    != vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data)
                                                    : 
                                                   (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data 
                                                    == vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data))))
                        ? vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc_target
                        : ((IData)(4U) + vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc))
                    : ((IData)(4U) + vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc))));
    if ((1U & (~ (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__mem_write)))) {
        vlSelfRef.tb_morae_core__DOT__dmem_wstrb = 0U;
    }
    vlSelfRef.tb_morae_core__DOT__mem_wstrb = ((1U 
                                                == 
                                                (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y 
                                                 >> 0x1cU))
                                                ? 0U
                                                : (IData)(vlSelfRef.tb_morae_core__DOT__dmem_wstrb));
}

VL_ATTR_COLD void Vtb_morae_core___024root___eval_triggers__stl(Vtb_morae_core___024root* vlSelf);

VL_ATTR_COLD bool Vtb_morae_core___024root___eval_phase__stl(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_morae_core___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_morae_core___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_morae_core___024root___dump_triggers__act(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_morae_core.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_morae_core.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_morae_core.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_morae_core___024root___dump_triggers__nba(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_morae_core.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_morae_core.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_morae_core.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_morae_core___024root____Vm_traceActivitySetAll(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtb_morae_core___024root___ctor_var_reset(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_morae_core__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_morae_core__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_morae_core__DOT__dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_morae_core__DOT__dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_morae_core__DOT__dmem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tb_morae_core__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tb_morae_core__DOT__cycles = 0;
    vlSelf->tb_morae_core__DOT__u_core__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->tb_morae_core__DOT__u_core__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->tb_morae_core__DOT__u_core__DOT__pc_target = VL_RAND_RESET_I(32);
    vlSelf->tb_morae_core__DOT__u_core__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->tb_morae_core__DOT__u_core__DOT__rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_morae_core__DOT__u_core__DOT__rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_morae_core__DOT__u_core__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_morae_core__DOT__u_core__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->tb_morae_core__DOT__u_core__DOT__imm_sel = VL_RAND_RESET_I(3);
    vlSelf->tb_morae_core__DOT__u_core__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->tb_morae_core__DOT__u_core__DOT__a_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_morae_core__DOT__u_core__DOT__b_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_morae_core__DOT__u_core__DOT__rd_write = VL_RAND_RESET_I(1);
    vlSelf->tb_morae_core__DOT__u_core__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_morae_core__DOT__u_core__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->tb_morae_core__DOT__u_core__DOT__jump = VL_RAND_RESET_I(2);
    vlSelf->tb_morae_core__DOT__u_core__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->tb_morae_core__DOT__u_core__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->tb_morae_core__DOT__u_core__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->tb_morae_core__DOT__u_core__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->tb_morae_core__DOT__u_core__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->tb_morae_core__DOT__u_core__DOT__alu_y = VL_RAND_RESET_I(32);
    vlSelf->tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst = VL_RAND_RESET_I(25);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_morae_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_hf9468087__0 = VL_RAND_RESET_I(32);
    vlSelf->tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_morae_core__DOT__u_imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_morae_core__DOT__u_dmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_morae_core__DOT__u_dmem__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__f3 = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__arith = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__f3 = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__arith = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_morae_core__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_morae_core__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
