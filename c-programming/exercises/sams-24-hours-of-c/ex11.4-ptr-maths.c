#include <stdio.h>

/**
 * main - using pointers to perform math operation
 *
 * Return: 0
*/
int main(void)
{
	int x = 5;
	int y = 6;

	/*pointers*/
	int *ptr_x = &x;
	int *ptr_y = &y;

	/*gets the product of x and y*/
	printf("The product of %d and %d is: ", *ptr_x, *ptr_y);
	*ptr_x *= *ptr_y;

	printf("%d\n", *ptr_x);

	return (0);
}

