#include <stdio.h>
#include <stdlib.h>

/**
 * array_sum - calculate the sum the array elements
 *
 * @arr: the array of integers
 * @size: size of array
 */
void array_sum(size_t arr[], int size)
{
	size_t sum = 0;

	for (int i = 0; i < size; i++)
		sum += arr[i];
	printf("%lu\n", sum);
}

/**
 * main - get the sum of array elements
 *
 * Return: 0
 */
int main(void)
{
	int size;

	scanf("%d", &size);
	size_t *arr = malloc(size * sizeof(size_t));

	if (arr != NULL)
		for (int i = 0; i < size; i++)
			scanf("%ld", &arr[i]);
	else
	{
		puts("Memory allocation failed");
		return (-1);
	}
	array_sum(arr, size);

	free(arr);
	arr = NULL;

	return (0);
}
