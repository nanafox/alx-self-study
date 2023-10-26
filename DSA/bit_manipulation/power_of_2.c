#include <stdio.h>
#define SIZE 15

int is_power_of_2(unsigned long int n);

/**
 * main - driver code
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned int numbers[SIZE] = {3, 0, 512, 5, 1024, 402, 10, 8, 16, 89, 128, 1, 65, 64, 98};

	for (i = 0; i < SIZE; i++)
	{
		if (is_power_of_2(numbers[i]))
		{
			printf("%u is a power of 2\n", numbers[i]);
		}
		else
		{
			printf("%u is not a power of 2\n", numbers[i]);
		}
	}

	return (0);
}

/**
 * is_power_of_2 - checks whether an unsigned integer n is a power of 2
 * @n: the number to check
 *
 * Return: 1 if @n is a power of 2, 0 otherwise
 */
int is_power_of_2(unsigned long int n)
{
	if (n == 0)
	{
		return (0); /* zero (0) is not a power of 2 */
	}

	return ((n & (n - 1)) == 0);
}
