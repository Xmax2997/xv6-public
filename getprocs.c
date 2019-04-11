#include <stdio.h>

int
main(void)
{
	printf("Hay %d procesos en ejecución en la CPU", getprocs());
}