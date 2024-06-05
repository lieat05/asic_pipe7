#ifndef __TRACE_H__
#define __TRACE_H__

#include "isa.h"
#include "utils.h"
#include "memory.h"
#include "mmio.h"

extern uint32_t g_timer;
extern uint32_t g_nr_exec_cycle;
extern uint32_t g_nr_inst_num;

void step_trace();
void statistic();

void print_read_mtrace(uint32_t raddr, uint32_t rdata,char rlen);
void print_write_mtrace(uint32_t waddr, uint32_t wdata,char wlen);

#endif
