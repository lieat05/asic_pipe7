#include "verilated.h"
#include "verilated_vcd_c.h"//wave
#include "obj_dir/Vlieat_top.h"
#include "verilated_dpi.h"//DPI-C
#include <assert.h>
#include "include/isa.h"
#include "include/utils.h"

static Vlieat_top* top;
VerilatedContext* contextp = NULL;

//wave tfp
VerilatedVcdC* tfp = NULL;

void cpu_init() {
  top -> clk = 0;
  top -> rstn = 1;
  top -> eval();
  tfp -> dump(contextp->time());
  contextp->timeInc(1);
  top -> clk = 1;
  top -> rstn = 0;
  top -> eval();
  tfp -> dump(contextp->time());
  contextp->timeInc(1);
  top -> clk = 0;
  top -> eval();
  tfp -> dump(contextp->time());
  contextp->timeInc(1);
  top -> clk = 1;
  top -> rstn = 1;
  top -> eval();
  tfp -> dump(contextp->time());
  contextp->timeInc(1);
}

void isa_exec_once() {
  top -> clk = 0;
  top -> eval();
  tfp -> dump(contextp->time());
  contextp->timeInc(1);
  top -> clk = 1;
  top -> eval(); 
  tfp -> dump(contextp->time());
  contextp->timeInc(1);
}


int main(int argc, char* argv[]) {
  contextp = new VerilatedContext;
  contextp -> commandArgs(argc,argv);
  top = new Vlieat_top{contextp};
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
extern "C" void uart_write(int data){
	putchar(data);
}
  
extern "C" void ebreak(int halt_pc){
	npc_state.halt_pc = halt_pc;
	npc_state.state = NPC_END;
}

