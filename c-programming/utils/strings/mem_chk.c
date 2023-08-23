#include <unistd.h>
#include <stdlib.h>

/**
 * memory_chk - checks if memory allocation was successful, else terminate
 *
 * @p: pointer to first memory allocation
 */
void memory_chk(void *p)
{
	if (p == NULL)
	{
		write(2, "Memory allocation failed!\n", 27);
		exit(3);
	}
}
