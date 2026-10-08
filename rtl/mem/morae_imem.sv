module morae_imem
  import morae_pkg::*;
#(
  parameter int DEPTH = 16384
) (
  /* verilator lint_off UNUSEDSIGNAL */
  input  word_t addr,
  /* verilator lint_on UNUSEDSIGNAL */
  output word_t rdata
);

  localparam int AW = $clog2(DEPTH);

  word_t mem [DEPTH];

  initial begin
    string prog;
    if ($value$plusargs("prog=%s", prog)) $readmemh(prog, mem);
  end

  assign rdata = mem[addr[AW+1:2]];

endmodule
