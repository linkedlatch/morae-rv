RTL := ../rtl/pkg/morae_pkg.sv $(wildcard ../rtl/core/*.sv) $(wildcard ../rtl/mem/*.sv)
TB  := ../tb/tb_morae_core.sv
TOP := tb_morae_core

TEST  ?= smoke
BUILD := build
SIM   := $(BUILD)/V$(TOP)

RISCV_PREFIX ?= riscv64-unknown-elf-

.PHONY: run wave lint hex clean

run: $(SIM)
	$(SIM) +prog=tests/$(TEST).hex

wave: $(SIM)
	$(SIM) +prog=tests/$(TEST).hex +trace

$(SIM): $(RTL) $(TB)
	verilator --binary --timing --trace-fst \
		--top-module $(TOP) -Mdir $(BUILD) $(RTL) $(TB)

lint:
	verilator --lint-only -Wall --top-module morae_core $(RTL)

hex: tests/$(TEST).S
	mkdir -p $(BUILD)
	$(RISCV_PREFIX)gcc -march=rv32i -mabi=ilp32 -nostdlib -Ttext=0 -o $(BUILD)/$(TEST).elf $<
	$(RISCV_PREFIX)objcopy -O binary $(BUILD)/$(TEST).elf $(BUILD)/$(TEST).bin
	od -An -v -tx4 -w4 $(BUILD)/$(TEST).bin | tr -d ' ' > tests/$(TEST).hex

clean:
	rm -rf $(BUILD)
