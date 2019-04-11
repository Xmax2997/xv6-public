#include "types.h"
#include "defs.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "proc.h"
#include "x86.h"

int
main(void)
{
	cprintf("Hay %d procesos en ejecución en la CPU", getprocs());
	return 0; 

}