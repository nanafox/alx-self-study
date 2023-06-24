#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int max;
	unsigned long *ptr_int;
	max = 4;

	ptr_int = calloc(2, sizeof(unsigned long));
	
	(ptr_int == NULL) ? puts("Null value") : printf("Value of *ptr_int: %lu\n", *ptr_int);

	printf("Address: %p.\n%lu bytes of memory space allocated.\n", ptr_int, sizeof(*ptr_int));
	
	free(ptr_int);

	return (0);
}

