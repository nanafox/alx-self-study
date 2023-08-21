#include <stdio.h>
#include <stdlib.h>
#include "../../utils/numbers/nums_lib.h"
#define INT_ARRAY_LEN 10

int compare(const void *, const void *);

/**
 * main - using the qsort function
 *
 * Return: 0
 */
int main(void)
{
	int nums[INT_ARRAY_LEN] = {4, 2, 9, 2, 12, 30, 32, 1, 22, 0};
	int nums1[INT_ARRAY_LEN] = {45, 8, 5, 12, 42, 94, 3, 10, 8, 1};

	qsort(nums, INT_ARRAY_LEN, sizeof(nums[0]), compare);
	qsort(nums1, INT_ARRAY_LEN, sizeof(nums1[0]), compare);

	for (int i = 0; i < INT_ARRAY_LEN; i++)
		printf("%d ", nums[i]);
	printf("\n");

	for (int i = 0; i < INT_ARRAY_LEN; i++)
		printf("%d ", nums1[i]);
	printf("\n");

	return (0);
}

/**
 * compare - the comparator
 *
 * @x: x value
 * @y: y value
 *
 * Return: 1 if x > y, -1 if y > x, 0 if x == y
 */
int compare(const void *x, const void *y)
{
	return (*((int *) x) - *((int *) y));
}
