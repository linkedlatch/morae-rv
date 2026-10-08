package morae_pkg;

  parameter int XLEN = 32;
  typedef logic [XLEN-1:0] word_t;
  typedef logic [4:0]      reg_addr_t;

  typedef enum logic [3:0] {
    ALU_ADD  = 4'b0_000,
    ALU_SUB  = 4'b1_000,
    ALU_SLL  = 4'b0_001,
    ALU_SLT  = 4'b0_010,
    ALU_SLTU = 4'b0_011,
    ALU_XOR  = 4'b0_100,
    ALU_SRL  = 4'b0_101,
    ALU_SRA  = 4'b1_101,
    ALU_OR   = 4'b0_110,
    ALU_AND  = 4'b0_111
  } alu_op_t;

endpackage
