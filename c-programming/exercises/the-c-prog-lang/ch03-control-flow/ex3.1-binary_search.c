#include <stdio.h>

/**
 * binary_search - binary search
 *
 * Exercise 3-1: Our binary search makes two tests inside the loop, when one
 * would suffice (at the price of more tests outside). Write a version with
 * only one test inside the loop and measure the difference in run-time.
 *
 * @target: search value
 * @arr: sorted array of integers
 * @arr_count: size of array
 *
 * Return: the postion where @target occur
 */
int binary_search(int target, int *arr, int arr_count)
{
	int low, mid, high;

	low = 0;
	high = arr_count - 1;

	while (low < high)
	{
		mid = (low + high) / 2;
		if (target > arr[mid])
			low = mid + 1;
		else
			high = mid;
	}
	if (low == high)
		if (target == arr[low])
			return (low); /* match found */

	return (-1); /* no match found */
}

/**
 * main - binary search task
 *
 * Return: 0
 */
int main(void)
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int targets[5] = {5, 9, 22, 32, 8};

	for (int i = 0; i < 5; i++)
		(binary_search(targets[i], arr, 10) >= 0) ? puts("Found") :
			puts("Not found");

	return (0);
}
