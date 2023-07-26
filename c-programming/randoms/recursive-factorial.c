#include <stdio.h>
#define SIZE 10

int factorial(int n);

/**
 * main - getting factorials (non-tail)
 *
 * Return: 0
 */
int main(void)
{
	int n[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	for (int i = 0; i < SIZE; i++)
		printf("%2d! = %7d\n", n[i], factorial(n[i]));
}

/**
 * factorial - get factorial recursively
 *
 * @n: number to check factorial
 *
 * Return: n!
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
