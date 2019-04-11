
#include "types.h"
#include "defs.h"
#include "param.h"

int
main(void)
{
	cprintf("Hay %d procesos en ejecución en la CPU \n", getprocs());
	return 0;	
}