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
	int counter = 1;

	printf("Auto: Number of function invocations: %d\n", counter++);

	return (x + y);
}

/**
 * add_two_static - adds two numbers.
 *
 * @x: number 1
 * @y: number 2
 *
 * Return: sum of of x and y
 *
 * Note: uses the static specifier for the counter variable
 */
int add_two_static(int x, int y)
{
	static int counter = 1;

	printf("Static: Number of function invocations: %d\n", counter++);

	return (x + y);
}

/**
 * main - working with storage classess
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	puts("Using the auto specifier\n");
	for (i = 0, j = 10; i < j; i++, j--)
		printf("The sum of %d and %d is %d\n", i, j, add_two(i, j));

	puts("\nUsing the static specifier\n");
	for (i = 0, j = 10; i < j; i++, j--)
		printf("The sum of %d and %d is %d\n", i, j, add_two_static(i, j));

	return (0);
}

