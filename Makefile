include /usr/local/share/verilator/include/verilated.mk
OBJ_PATH = ./obj_dir/
CC = g++
SCRS = *.cpp
VERILAGS = -O3 -Wall --trace --cc --exe --build

NPC_FLAGS += -l $(OBJ_PATH)npc-log.txt
NPC_FLAGS += --diff=$(NEMU_HOME)/build/riscv32-nemu-interpreter-so

LINK = -LDFLAGS "-lreadline  --no-pie  -ldl -lLLVM-14 -lSDL2" 
LLVM = -CFLAGS "-I/usr/lib/llvm-14/include -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS   -D__STDC_LIMIT_MACROS -fPIE"

git:
$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
sim:git
	@verilator $(VERILAGS) $(LINK) $(LLVM) $(SCRS) ./vsrc/lieat_top.v --timing --top-module lieat_top
	./obj_dir/Vlieat_top $(NPC_FLAGS) $(NPC_IMG) 
.PHONY:clean
clean:
	@rm -rf obj_dir wave.vcd
include ../Makefile
