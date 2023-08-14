#include <stdio.h>
#include "search_algos/binary_search.c"
#include "search_algos/linear_search.c"
#define ARR_SIZE 10
#define TARGET_SIZE 5

/**
 * main - performing search
 *
 * Return: 0
 */
int main(void)
{
	int array[ARR_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int targets[TARGET_SIZE] = {4, 23, 10, 2, 78};

	printf("The list: ");
	for (int i = 0; i < ARR_SIZE; i++)
		printf("%d ", array[i]);
	puts("\n\nUsing Binary Search");
	for (int i = 0; i < TARGET_SIZE; i++)
		(binary_search(targets[i], array, ARR_SIZE) >= 0) ?
			printf("%2d: found in list\n", targets[i]) :
			printf("%2d: Not found\n", targets[i]);

	puts("\nUsing Linear Search");
	for (int i = 0; i < TARGET_SIZE; i++)
		(linear_search(targets[i], array, ARR_SIZE)) ?
			printf("%2d: found in list\n", targets[i]) :
			printf("%2d: Not found\n", targets[i]);
	return (0);
}
