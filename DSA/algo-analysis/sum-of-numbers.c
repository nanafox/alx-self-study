#include <stdio.h>

/**
 * main - generate the sum of n number of natural numbers
 *
 * Return: 0
 */
int main(void)
{
	int sum, n = 1000;

	/* O(n) */
	for (int i = 1; i <= n; i++)
		sum += i;

	printf("Sum of the first %d natural numbers: %d\n", n, sum);

	return (0);
}
