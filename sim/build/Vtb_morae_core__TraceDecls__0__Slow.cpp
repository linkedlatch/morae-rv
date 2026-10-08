// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vtb_morae_core___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"IMM_I", "IMM_S", "IMM_B", "IMM_U", "IMM_J"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(1, "morae_pkg::imm_sel_t", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ALU_ADD", "ALU_SUB", "ALU_SLL", "ALU_SLT", 
                                "ALU_SLTU", "ALU_XOR", 
                                "ALU_SRL", "ALU_SRA", 
                                "ALU_OR", "ALU_AND"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001"};
        tracep->declDTypeEnum(2, "morae_pkg::alu_op_t", 10, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"A_RS1", "A_PC", "A_ZERO"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(3, "morae_pkg::a_sel_t", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"B_RS2", "B_IMM"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(4, "morae_pkg::b_sel_t", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"WB_ALU", "WB_MEM", "WB_PC4"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(5, "morae_pkg::wb_sel_t", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"JUMP_NONE", "JUMP_BRANCH", "JUMP_JAL", 
                                "JUMP_JALR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(6, "morae_pkg::jump_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
}

void Vtb_morae_core___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtb_morae_core___024root__traceDeclTypesSub0(tracep);
}
