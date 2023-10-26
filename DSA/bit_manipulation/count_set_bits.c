#include <stdio.h>

int count_set_bits(unsigned long int n);

/**
 * main - driver code
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int n;

	n = 0;
	i = count_set_bits(n);
	printf("Number of bits in %3lu is %2d\n", n, i);

	n = 10;
	i = count_set_bits(n);
	printf("Number of bits in %3lu is %2d\n", n, i);

	n = 43;
	i = count_set_bits(n);
	printf("Number of bits in %3lu is %2d\n", n, i);

	n = 128;
	i = count_set_bits(n);
	printf("Number of bits in %3lu is %2d\n", n, i);

	return (0);
}

/**
 * count_set_bits - counts the number of set bits in a number
 * @n: the number to count set bit
 *
 * Return: the number of set bits
 */
int count_set_bits(unsigned long int n)
{
	int count = 0;

	while (n > 0)
	{
		n &= n -1;
		count++;
	}

	return (count);
}
