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

endpackage
