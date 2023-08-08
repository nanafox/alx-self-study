#include <stdio.h>

int bitcount(unsigned int x);
int bitcount_while(unsigned int x);

/**
 * main - Exercise 2-9
 *
 * Task: In a two's complement number system, x &= (x-1) deletes the
 * rightmost 1-bit in x. Explain why. Use this observation to write a
 * faster version of bitcount.
 *
 * Return: 0
 */
int main(void)
{
	printf("Bit count for   15: %d\n", bitcount(15));
	printf("Bit count for    8: %d\n", bitcount_while(8));
	printf("Bit count for  255: %d\n", bitcount(255));
	printf("Bit count for  192: %d\n", bitcount_while(192));
}

/**
 * bitcount - count number of 1's in a digit
 *
 * @x: digit to counts bits of
 *
 * Return: number 1 bits in x
 */
int bitcount(unsigned int x)
{
	int bit_count = 0;

	for (; x != 0; x &= (x - 1))
		bit_count++;

	return (bit_count);
}

/**
 * bitcount_while - count number of 1's in a digit (while loop version)
 *
 * @x: digit to counts bits of
 *
 * Return: number 1 bits in x
 */
int bitcount_while(unsigned int x)
{
	int bit_count = 0;

	while (x)
	{
		x &= (x - 1);
		bit_count++;
	}

	return (bit_count);
}
