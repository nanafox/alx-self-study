#include <stdio.h>
#include <stdlib.h>

/**
 * main - confirming the initial values of calloc and malloc memory spaces
 *
 * Return: 0
 */
int main(void)
{
	int *ptr1, *ptr2, n;

	n = 5;
	ptr1 = calloc(n, sizeof(int)); /*memory allocation with calloc*/
	ptr2 = malloc(n * sizeof(int)); /*malloc*/

	if ((ptr1 != NULL) && (ptr2 != NULL))
	{
		for (int i = 0; i < n; i++)
			printf("ptr1[%d]: %d, ptr2[%d]: %d\n",
					i, *(ptr1 + 1), i, *(ptr2 + 1));
		putchar('\n');

		free(ptr1);
		free(ptr2);
	}
	else
	{
		puts("Memory Allocation failed!");
		return (1);
	}
	
	return (0);
}
