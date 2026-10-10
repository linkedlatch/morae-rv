module morae_alu
  import morae_pkg::*;
(
  input  word_t   a,
  input  word_t   b,
  input  alu_op_t op,
  output word_t   y
);

  localparam int SHAMT_W = $clog2(XLEN);
  logic [SHAMT_W-1:0] shamt;
  assign shamt = b[SHAMT_W-1:0];

  always_comb begin
    case (op)
      ALU_ADD:  y = a + b;
      ALU_SUB:  y = a - b;
      ALU_SLL:  y = a << shamt;
      ALU_SLT:  y = word_t'($signed(a) < $signed(b));
      ALU_SLTU: y = word_t'(a < b);
      ALU_XOR:  y = a ^ b;
      ALU_SRL:  y = a >> shamt;
      ALU_SRA:  y = $signed(a) >>> shamt;
      ALU_OR:   y = a | b;
      ALU_AND:  y = a & b;
      default:  y = 'x;
    endcase
  end

endmodule
