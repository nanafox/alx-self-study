#include <stdio.h>
#include <stdlib.h>

/**
 * main - avoiding dangling pointers
 * 		pointers that point to invalid memory address
 *
 * Return: 0
 */
int main(void)
{
	int *ptr = malloc(sizeof(int));

	printf("Before: ptr == NULL?: ");
	(ptr == NULL) ? puts("Yes") : puts("No");

	free(ptr);
	ptr = NULL; /* avoiding dangling pointer */

	printf("After: ptr == NULL?: ");
	(ptr == NULL) ? puts("Yes") : puts("No");
	return (0);
}
