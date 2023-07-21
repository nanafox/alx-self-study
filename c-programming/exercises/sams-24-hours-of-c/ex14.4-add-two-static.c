#include <stdio.h>
#include <ctype.h>

/**
 * add_two - adds two numbers.
 *
 * @x: number 1
 * @y: number 2
 *
 * Return: sum of x and y
 * Note: uses the auto specifier by default
 */
int add_two(int x, int y)
{
	static int counter = 1;
	static int total;

	printf("Number of function invocations: %d\n", counter++);
	printf("Previous addition result: %d\n", total);

	total = x + y;
	return (total);
}

/**
 * main - working with storage classess
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0, j = 10; i < j; i++, j--)
		printf("The sum of %d and %d is %d\n\n", i, j, add_two(i, j));

	return (0);
}

