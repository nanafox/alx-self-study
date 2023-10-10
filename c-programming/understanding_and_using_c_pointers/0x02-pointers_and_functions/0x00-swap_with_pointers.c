#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);

/**
 * main - Driver code to test swapping with pointers
 * @argc: Number of Command Line Arguments received
 * @argv: The actual arguments received. Expects two
 * two numbers only.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s num1 num2\n", argv[0]);
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("Values before swap\n");
	printf("x: %d, y: %d\n", x, y);

	/* perform swap operation */
	swap(&x, &y);

	printf("Values after swap\n");
	printf("x: %d, y: %d\n", x, y);

	return (0);
}

/**
 * swap - Swaps two integers with the value of the other
 * @x: First number
 * @y: Second number
 */
void swap(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}

