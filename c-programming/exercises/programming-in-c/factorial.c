#include <stdio.h>

unsigned long long int factorial(unsigned int);

/**
 * main - using recursive functions
 *
 * Return: 0
 */
int main(void)
{
	puts("Factorials\n----------");
	for (int i = 0; i <= 10; i++)
		printf("%2u!: %llu\n", i, factorial(i));

	return (0);
}

/**
 * factorial - calculate the factorial
 *
 * @n: number
 *
 * Return: factorial of n.
 */
unsigned long long int factorial(unsigned int n)
{
	unsigned long long int result;

	if (n == 0)
		result = 1;
	else
		result = n * factorial(n - 1);

	return (result);
}
