#include <stdio.h>

#define SIZE 10

int min(int *list, int size);

/**
 * main - passing arrays to functions"
 *
 * Return: 0
 */
int main(void)
{
	int numbers[SIZE] = {9, -2, 4, 2, 5, 10, 3, 1, -3, 8};

	int m = min(numbers, SIZE);

	printf("%d is the smallest item\n", m);

	return (0);
}

/**
 * min - gets the minimum value
 *
 * @list: array of numbers
 * @size: size of array
 *
 * Return: min
 */
int min(int *list, int size)
{
	int min = 0;

	for (int i = 0; i < size; i++)
	{
		if (list[i] < min)
			min = list[i];
	}

	return (min);
}
