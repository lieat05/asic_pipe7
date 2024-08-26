#include "common.h"
static VysyxSoCFull* top;
VerilatedContext* contextp = NULL;

//wave tfp
VerilatedVcdC* tfp = NULL;

void cpu_init() {
  top -> reset = 1;
  for(int a = 0; a < 10; a++){
    top -> clock = 0;
    top -> eval();
    tfp -> dump(contextp->time());
    contextp->timeInc(1);
    top -> clock = 1;
    top -> eval();
    tfp -> dump(contextp->time());
    contextp->timeInc(1);
  }
  top -> reset = 0;
  top -> clock = 0;
  top -> eval();
  tfp -> dump(contextp->time());
  contextp->timeInc(1);
}

void isa_exec_once() {
  top -> clock = 1;
  top -> eval();
  tfp -> dump(contextp->time());
  contextp->timeInc(1);
  top -> clock = 0;
  top -> eval(); 
  tfp -> dump(contextp->time());
  contextp->timeInc(1);
}


int main(int argc, char* argv[]) {
  Verilated::commandArgs(argc, argv);
  contextp = new VerilatedContext;
  contextp -> commandArgs(argc,argv);
  top = new VysyxSoCFull{contextp};
  tfp = new VerilatedVcdC;
  #ifdef CONFIG_WAVE
  Verilated::traceEverOn(true);
  top->trace(tfp,0);
  tfp->open("wave.vcd");
  #endif
  init_monitor(argc,argv);
  cpu_init();
  sdb_mainloop();
  tfp -> close();
  delete top;
  delete contextp;
  exit(0);
}

// ================================================================================================================================================
// DPI-C
// ================================================================================================================================================  
extern "C" void ebreak(int halt_pc, int halt_ret){
	npc_state.halt_pc = halt_pc;
	npc_state.halt_ret = halt_ret;
	npc_state.state = NPC_END;
}
