#include "types.h"
#include "defs.h"
#include "param.h"

int
main(void)
{
	cprintf("La cantidad de procesos en ejecucion en la CPU es %d\n", getprocs());
}