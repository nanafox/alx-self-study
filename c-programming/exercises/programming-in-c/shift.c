#include <stdio.h>

/**
 * shift - Function to shift an unsigned int left if the count is positive,
 * and right if negative
 *
 * @value: value to be shifted
 * @n: number of bits to shift. positive is left shift, negative is right shift
 *
 * Return: value of shift
*/
unsigned int shift(unsigned int value, int n)
{
	if (n > 0)
		value <<= n;

	else
		value >>= -n;

	return (value);
}

/**
 * main - using shift function
 *
 * Return: 0
*/
int main(void)
{
	printf("%d\n", shift(10, 3));
	printf("%d\n", shift(10, -3));
	printf("%d\n", shift(10, 1));
	printf("%d\n", shift(10, -1));

	return (0);
}
