include /usr/local/share/verilator/include/verilated.mk
OBJ_PATH = ./obj_dir/
CC   = g++
C_SCRS = *.cpp
SOC_SCRS = $(shell find /home/lieat/Desktop/ysyx-workbench/ysyxSoC/perip -name "*.v")
CORE_SCRS = $(shell find /home/lieat/Desktop/ysyx-workbench/npc/vsrc -name "*.v")
SCRS = $(C_SCRS) $(SOC_SCRS)
TOP_NAME = ysyxSoCFull
TOP  = $(WORKBENCH)/ysyxSoC/build/ysyxSoCFull.v

WAVE = wave.vcd

VERI_PATH += -I$(WORKBENCH)/npc/vsrc
VERI_PATH += -I$(WORKBENCH)/ysyxSoC/perip
VERI_PATH += -I$(WORKBENCH)/ysyxSoC/perip/uart16550/rtl
VERI_PATH += -I$(WORKBENCH)/ysyxSoC/perip/spi/rtl
VERI_PATH += -I$(WORKBENCH)/ysyxSoC/build

VERILAGS = -O3 -Wall --trace --cc --exe --build --timescale "1ns/1ns" --no-timing $(VERI_PATH) -Wno-lint --autoflush 
VERILAGS += -CFLAGS -I$(NPC_HOME)/include

LINK = -LDFLAGS "-lreadline  --no-pie  -ldl -lLLVM-14 -lSDL2" 
LLVM = -CFLAGS "-I/usr/lib/llvm-14/include -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS   -D__STDC_LIMIT_MACROS -fPIE"

git:
$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
sim:git
	@verilator $(VERILAGS) $(LINK) $(LLVM) $(SCRS) $(TOP) --top-module $(TOP_NAME)
	$(OBJ_PATH)V$(TOP_NAME) $(NPC_FLAGS) $(NPC_IMG) 
.PHONY:clean
clean:
	@rm -rf obj_dir $(WAVE)
include ../Makefile
