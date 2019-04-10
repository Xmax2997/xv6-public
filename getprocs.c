#include <defs.h>

int
main(void)
{
	cprintf("Hay %d procesos en ejecución en la CPU", getprocs());
	exit();

}