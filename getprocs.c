#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
	printf(getprocs(), "Hay %d procesos en ejecución en la CPU");
}