#include <stdio.h>

/*function-like macro*/
#define MULTIPLY(x, y) ((x) * (y))

/**
 * main - solution to exercise 2, hour 23.
 *
 * using function-like macros
 *
 * Return: 0
 */
int main(void)
{
	int x = 2;
	int y = 3;

	int product = MULTIPLY(x, y);

	printf("%d times %d is %d\n", x, y, product);

	return (0);
}
