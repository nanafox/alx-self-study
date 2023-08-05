#include <stdio.h>

/**
 * main - sum of n number of natural numbers using the Gauss Sum formula
 *
 * Return: 0
 */
int main(void)
{
	int sum, n = 1000;
	
	/* O(1) */
	sum = n * (n + 1) / 2;

	printf("Sum of the first %d natural numbers: %d\n", n, sum);

	return (0);
}
