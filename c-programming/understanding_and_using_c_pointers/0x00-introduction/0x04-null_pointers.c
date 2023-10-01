#include <stdio.h>

/**
 * main - shows the difference between uninitialized pointers and null pointers
 *
 * Return: 0
 */
int main(void)
{
	int *ptr_1; /* uninitialized pointer */
	int *ptr_2 = NULL; /* a null pointer */

	/* printing the left values */
	puts("===Left value - Addresses===");
	printf("ptr_1 left value (address): %p\n", (void *) &ptr_1);
	printf("ptr_2 left value (address): %p\n\n", (void *) &ptr_2);

	/* printing the right values of pointers */
	puts("===Right value - Data===");
	printf("ptr_1 right value (data): %16p\n", (void *) ptr_1);
	printf("ptr_2 right value (data): %16p\n\n", (void *) ptr_2);

	/* deferencing */
	puts("===Dereferencing===");
	printf("value at *ptr_1: %d\n", *ptr_1);
	printf("value at *ptr_2: %d\n", *ptr_2); /* causes a Segmentation fault */

	return (0);
}
