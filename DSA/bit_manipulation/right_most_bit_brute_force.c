#include <stdio.h>

int right_most_bit_brute_force(unsigned long int n);

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
	i = right_most_bit_brute_force(n);
	printf("Right-most bit in %3lu is at index %2d\n", n, i);

	n = 10;
	i = right_most_bit_brute_force(n);
	printf("Right-most bit in %3lu is at index %2d\n", n, i);

	n = 43;
	i = right_most_bit_brute_force(n);
	printf("Right-most bit in %3lu is at index %2d\n", n, i);

	n = 128;
	i = right_most_bit_brute_force(n);
	printf("Right-most bit in %3lu is at index %2d\n", n, i);

	return (0);
}


/**
 * right_most_bit_brute_force - returns the right-most set bit in a number
 * (inefficient)
 * @n: the number to find right most bit of
 *
 * Return: the index (starting from) of right-most set bit in @n,
 * else -1 if @n is 0 (zero)
 */
int right_most_bit_brute_force(unsigned long int n)
{
	int mask, index;

	if (n == 0)
	{
		return (-1); /* there are no set bits for zero */
	}

	mask = 1;
	index = 0;

	while ((n & mask) == 0)
	{
		index++;
		mask <<= 1;
	}

	return (index);
}
