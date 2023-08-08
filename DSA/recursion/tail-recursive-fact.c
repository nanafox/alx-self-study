#include <stdio.h>
#define SIZE 10

int tail_factorial(int n, int a);

/**
 * main - using tail recursion
 *
 * Return: 0
 */
int main(void)
{
	int n[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (int i = 0; i < SIZE; i++)
		printf("%2d! = %7d\n", n[i], tail_factorial(n[i], 1));

	return (0);
}

/**
 * tail_factorial - factorails: using tail recursion
 *
 * @n: factorial number
 * @a: accumulator
 *
 * Return: n!
 */
int tail_factorial(int n, int a)
{
	if (n == 0)
		return (a);

	return (tail_factorial(n - 1, n * a));
}
