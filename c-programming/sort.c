#include <stdio.h>
#define SIZE 6 /* array size */

void bubble_sort(int *arr, int size);
void print_arr(int *arr, int size);

/**
 * main - bubble sort
 *
 * Return: 0
 */
int main(void)
{
	int temp, n = 0, a = 0;
	int nums[SIZE] = {-2, 45, 0, 11, -9, 8};

	print_arr(nums, SIZE);	 /* before sort */
	bubble_sort(nums, SIZE); /* perform sort */
	print_arr(nums, SIZE);	 /* after sort */
}

/**
 * bubble_sort - bubble sort algorithm
 *
 * @arr: array
 * @size: size of array
 */
void bubble_sort(int *arr, int size)
{
	int a, n, temp;
	a = n = 0;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			++a; /* count total number of time loop was encountered */
			if (arr[j] > arr[j + 1])
			{
				++n; /* count number of steps used to sort */
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("Total moves: %d\n", a);
	printf("Sort times: %d\n", n);
}

/**
 * print_arr - print arrays
 *
 * @arr: array
 * @size: size of array
 */
void print_arr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", *(arr + i));
	putchar('\n');
}
