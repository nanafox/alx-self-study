#include <stdio.h>

/**
 * main - an array of odd numbers
 *
 * Return: 0
*/
int main(void)
{
	int odd_numbers[8];

	for (int i = 0, pos = 0; i < 16; i++)
	{
		if (i % 2 != 0)
		{
			odd_numbers[pos] = i;
			++pos;
			printf("Adding: %d\n", i);
		}
	}

	putchar('\n');

	/*get array size / length*/
	int size = sizeof(odd_numbers) / sizeof(odd_numbers[0]);

	printf("Size of array: %d\nIn bytes: %ld\n", size, sizeof(odd_numbers));

	printf("Odd Numbers: ");

	for (int i = 0; i < size; i++)
	{
		printf("%d ", odd_numbers[i]);
	}

	putchar('\n');

	return (0);
}
