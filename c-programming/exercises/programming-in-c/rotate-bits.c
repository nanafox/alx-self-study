#include <stdio.h>
#include <stdlib.h>

unsigned int rotate_bit(unsigned int value, int n);

/**
 * main - main
 * @argc: command line arguments count
 * @argv: command line arguments array
 *
 * Return: 0
*/
int main(int argc, char argv[])
{
	unsigned int value;
	int by_n_bits;
	printf("Value, followed by bits to rotate by: ");
	scanf("%u %d", &value, &by_n_bits);

	unsigned int result = rotate_bit(value, by_n_bits);

	printf("\nResult: %X\n", result);

	return (0);
}

/**
 * rotate_bit - Rotate bits in place
 * @value: the number to be rotated
 * @n: number of bits to rotate value. Rotate left if positive, ele rotate left
 *
 * Return: result
*/
unsigned int rotate_bit(unsigned int value, int n)
{
	unsigned int result, bits;

	/*scale down the shift count to a defined range*/
	if (n > 0)
		n %= 32;
	else
		n = -(-n % 32);

	if (n == 0)
		result = value;
	else if (n > 0)
	{
		/*left rotate*/
		bits = value >> (32 - n);
		result = value << n | bits;
	}
	else
	{
		/*right rotate*/
		n = -n;
		bits = value << (32 - n);
		result = value >> n | bits;
	}
	return (result);
}
