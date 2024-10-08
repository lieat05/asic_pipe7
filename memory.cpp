#include "include/mmio.h"
#include "include/isa.h"
#include "include/trace.h"

uint64_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: MUXDEF(CONFIG_RT_CHECK, assert(0), return 0);
  }
}

void host_write(void *addr, int len, uint64_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    case 8: *(uint64_t *)addr = data; return;
    IFDEF(CONFIG_RT_CHECK, default: assert(0));
  }
}

static uint8_t pmem[CONFIG_MSIZE] = {};

uint8_t* guest_to_host(uint32_t paddr) { return pmem + (paddr - CONFIG_MBASE); }
uint32_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

void out_of_bound(uint32_t addr) {
  panic("address = 0x%08x is out of bound of pmem [0x%08x, 0x%08x] at pc = 0x%08x",addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}
 
long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(CONFIG_PCSTART), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

void init_mem(){
#if defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif 
 Log("physical memory area [ 0x%08x ,  0x%08x ]", PMEM_LEFT, PMEM_RIGHT);
}
// ================================================================================================================================================
// DPI-C
// ================================================================================================================================================
extern "C" void pmem_read(uint64_t raddr,uint64_t* rdata,char rlen){	
	if(in_pmem(raddr)){
		IFDEF(CONFIG_MTRACE,print_read_mtrace(raddr,*rdata,rlen););
    *rdata = host_read(guest_to_host(raddr),rlen);
		return;
	}
    IFNDEF(CONFIG_DEVICE, out_of_bound(raddr););
	  IFDEF(CONFIG_DEVICE, *rdata = mmio_read(raddr, rlen));
    IFDEF(CONFIG_DTRACE,print_read_mtrace(raddr,*rdata,rlen););
	return;
}

extern "C" void pmem_write(uint32_t waddr,uint64_t wdata,char wlen){
	if(in_pmem(waddr)){
        IFDEF(CONFIG_MTRACE,print_write_mtrace(waddr,wdata,wlen););
		host_write(guest_to_host(waddr),wlen,wdata);
		return;
	}
	IFNDEF(CONFIG_DEVICE, out_of_bound(waddr););
  IFDEF(CONFIG_DEVICE, mmio_write(waddr, wlen, wdata););
  IFDEF(CONFIG_DTRACE,print_write_mtrace(waddr,wdata,wlen););
	return;
}

extern "C" void flash_read(int32_t addr, int32_t *data) { assert(0); }
extern "C" void mrom_read(int32_t addr, int32_t *data) { 
  *data = host_read(guest_to_host(addr),4);
}
extern "C" void read_inaddr(int32_t addr){
  bool read_inmrom = (addr >= 0x20000000) && (addr <= 0x20001000);
  bool read_inmem = (addr >= 0x0f000000) && (addr <= 0x10000fff);
  if(addr == 0x0f0007f8)printf("raddr = %x\n",addr);
  //assert(read_inmrom | read_inmem);
}
extern "C" void write_inaddr(int32_t addr){
  bool write_insram = (addr >= 0x0f000000) && (addr <= 0x10000fff);
  if(addr == 0x0f0007f8)printf("waddr = %x\n",addr);
  //assert(write_insram);
}