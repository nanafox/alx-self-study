#include <stdio.h>
#include "safe_free.h"

void mem_alloc_fail(void);

/**
 * main - driver code to test a safer way to free dynamically allocate memory
 *
 * Return: 0
 */
int main(void)
{
	int *arr;
	char *str;

	arr = calloc(10, sizeof(int));
	if (arr == NULL)
		mem_alloc_fail();

	str = malloc(50 * sizeof(char));
	if (str == NULL)
	{
		safe_free(arr);
		mem_alloc_fail();
	}

	/*
	 * memory is used for whatever is needed
	 */

	/* free memory after use */
	safe_free(arr);
	safe_free(str);

	return (0);
}

/**
 * mem_alloc_fail - prints that memory allocation failed and exits
 */
void mem_alloc_fail(void)
{
	fprintf(stderr, "Memory allocation failed\n");
	exit(1);
}
