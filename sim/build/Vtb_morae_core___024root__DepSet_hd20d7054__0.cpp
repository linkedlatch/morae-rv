// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_morae_core.h for the primary calling header

#include "Vtb_morae_core__pch.h"
#include "Vtb_morae_core___024root.h"

VL_ATTR_COLD void Vtb_morae_core___024root___eval_initial__TOP(Vtb_morae_core___024root* vlSelf);
VlCoroutine Vtb_morae_core___024root___eval_initial__TOP__Vtiming__0(Vtb_morae_core___024root* vlSelf);
VlCoroutine Vtb_morae_core___024root___eval_initial__TOP__Vtiming__1(Vtb_morae_core___024root* vlSelf);

void Vtb_morae_core___024root___eval_initial(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_morae_core___024root___eval_initial__TOP(vlSelf);
    Vtb_morae_core___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_morae_core___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_morae_core__DOT__clk__0 
        = vlSelfRef.tb_morae_core__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_morae_core__DOT__rst_n__0 
        = vlSelfRef.tb_morae_core__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_morae_core___024root___eval_initial__TOP__Vtiming__1(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "../tb/tb_morae_core.sv", 
                                             15);
        vlSelfRef.tb_morae_core__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_morae_core__DOT__clk)));
    }
}

void Vtb_morae_core___024root___eval_act(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_morae_core___024root___nba_sequent__TOP__0(Vtb_morae_core___024root* vlSelf);
void Vtb_morae_core___024root___nba_sequent__TOP__1(Vtb_morae_core___024root* vlSelf);
void Vtb_morae_core___024root___nba_comb__TOP__0(Vtb_morae_core___024root* vlSelf);

void Vtb_morae_core___024root___eval_nba(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_morae_core___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_morae_core___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vtb_morae_core___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_morae_core___024root___nba_sequent__TOP__1(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc = 
        ((IData)(vlSelfRef.tb_morae_core__DOT__rst_n)
          ? vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc_next
          : 0U);
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
}

VL_INLINE_OPT void Vtb_morae_core___024root___nba_comb__TOP__0(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_a 
        = ((1U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__a_sel))
            ? vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc
            : ((2U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__a_sel))
                ? 0U : vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data));
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

void Vtb_morae_core___024root___timing_resume(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h31ce0a72__0.resume(
                                                   "@(negedge tb_morae_core.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_morae_core___024root___timing_commit(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h31ce0a72__0.commit(
                                                   "@(negedge tb_morae_core.clk)");
    }
}

void Vtb_morae_core___024root___eval_triggers__act(Vtb_morae_core___024root* vlSelf);

bool Vtb_morae_core___024root___eval_phase__act(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_morae_core___024root___eval_triggers__act(vlSelf);
    Vtb_morae_core___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_morae_core___024root___timing_resume(vlSelf);
        Vtb_morae_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_morae_core___024root___eval_phase__nba(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_morae_core___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_morae_core___024root___dump_triggers__nba(Vtb_morae_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_morae_core___024root___dump_triggers__act(Vtb_morae_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_morae_core___024root___eval(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_morae_core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../tb/tb_morae_core.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_morae_core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../tb/tb_morae_core.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_morae_core___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_morae_core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_morae_core___024root___eval_debug_assertions(Vtb_morae_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
