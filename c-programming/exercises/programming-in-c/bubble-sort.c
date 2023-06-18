#include <stdio.h>
#define SIZE 10

void sort_asc(int *list, int size);
void sort_desc(int *list, int size);

/**
 * main - bubble sorts
 *
 * Return: 0
 */
int main(void)
{
	/*same lists - just so that sort_desc would start with an unsorted array*/
	int nums_1[SIZE] = {4, 10, -2, 9, 0, 12, 1, -12, 7, 3};
	int nums_2[SIZE] = {4, 10, -2, 9, 0, 12, 1, -12, 7, 3};

	puts("Original list"); /*show original list before sort*/
	for (int i = 0; i < SIZE; i++)
		printf("%d ", nums_1[i]);
	putchar('\n');

	puts("After Sort - Ascending order");
	sort_asc(nums_1, SIZE); /*sort in asceding order*/
	for (int i = 0; i < SIZE; i++)
		printf("%d ", nums_1[i]);
	putchar('\n');

	puts("After Sort - Descending order");
	sort_desc(nums_2, SIZE); /*sort in descending order*/
	for (int i = 0; i < SIZE; i++)
		printf("%d ", nums_2[i]);
	putchar('\n');

	return (0);
}

/**
 * sort_asc - bubble sort in descending order
 *
 * @list: sequence of numbers - array
 * @size: size of array
 */
void sort_asc(int *list, int size)
{
	register int swap, i, j;

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

/**
 * sort_desc - bubble sort in descending order
 *
 * @list: sequence of numbers - array
 * @size: size of array
 */
void sort_desc(int *list, int size)
{
	register int swap, i, j;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (list[i] < list[j])
			{
				swap = list[i];
				list[i] = list[j];
				list[j] = swap;
			}
		}

	}
}

