module morae_dmem
  import morae_pkg::*;
#(
  parameter int DEPTH = 16384
) (
  input  logic       clk,
  /* verilator lint_off UNUSEDSIGNAL */
  input  word_t      addr,
  /* verilator lint_on UNUSEDSIGNAL */
  input  word_t      wdata,
  input  logic [3:0] wstrb,
  output word_t      rdata
);

  localparam int AW = $clog2(DEPTH);

  word_t mem [DEPTH];

  initial begin
    string prog;
    if ($value$plusargs("prog=%s", prog)) $readmemh(prog, mem);
  end

  assign rdata = mem[addr[AW+1:2]];

  always_ff @(posedge clk) begin
    for (int i = 0; i < 4; i++) begin
      if (wstrb[i]) mem[addr[AW+1:2]][8*i +: 8] <= wdata[8*i +: 8];
    end
  end

endmodule
