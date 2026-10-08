package morae_pkg;

  parameter int XLEN = 32;
  typedef logic [XLEN-1:0] word_t;
  typedef logic [4:0]      reg_addr_t;

  typedef enum logic [3:0] {
    ALU_ADD,
    ALU_SUB,
    ALU_SLL,
    ALU_SLT,
    ALU_SLTU,
    ALU_XOR,
    ALU_SRL,
    ALU_SRA,
    ALU_OR,
    ALU_AND
  } alu_op_t;

  typedef enum logic [6:0] {
    OPC_LOAD     = 7'b0000011,
    OPC_MISC_MEM = 7'b0001111,
    OPC_OP_IMM   = 7'b0010011,
    OPC_AUIPC    = 7'b0010111,
    OPC_STORE    = 7'b0100011,
    OPC_OP       = 7'b0110011,
    OPC_LUI      = 7'b0110111,
    OPC_BRANCH   = 7'b1100011,
    OPC_JALR     = 7'b1100111,
    OPC_JAL      = 7'b1101111,
    OPC_SYSTEM   = 7'b1110011
  } opcode_t;

  typedef enum logic [2:0] {
    IMM_I,
    IMM_S,
    IMM_B,
    IMM_U,
    IMM_J
  } imm_sel_t;

  typedef enum logic [1:0] {
    A_RS1,
    A_PC,
    A_ZERO
  } a_sel_t;

  typedef enum logic {
    B_RS2,
    B_IMM
  } b_sel_t;

  typedef enum logic [1:0] {
    WB_ALU,
    WB_MEM,
    WB_PC4
  } wb_sel_t;

  typedef enum logic [1:0] {
    JUMP_NONE,
    JUMP_BRANCH,
    JUMP_JAL,
    JUMP_JALR
  } jump_t;

endpackage
