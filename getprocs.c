#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
	cprintf("Hay %d procesos en ejecución en la CPU", getprocs());
}