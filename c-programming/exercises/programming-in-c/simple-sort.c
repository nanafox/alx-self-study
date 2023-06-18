#include <stdio.h>
#define SIZE 10

void sort(int *list, int size);

/**
 * main - sorting
 *
 * Return: 0
 */
int main(void)
{
	int grades[SIZE];

	for (int i = SIZE, j = 0; i != 0; i--, j++)
		grades[j] = (i * 7 / 3 + i); /*generate numbers*/

	puts("Original grades list");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", grades[i]);
	putchar('\n');

	puts("Sorted grades");
	sort(grades, SIZE);

	for (int i = 0; i < SIZE; i++)
		printf("%d ", grades[i]);
	putchar('\n');

	return (0);
}

/**
 * sort - bubble sorting
 *
 * @list: number array
 * @size: size of array
 */
void sort(int *list, int size)
{
	int swap, i, j;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (list[i] > list[j])
			{
				swap = list[i];
				list[i] = list[j];
				list[j] = swap;
			}
		}
	}
}
