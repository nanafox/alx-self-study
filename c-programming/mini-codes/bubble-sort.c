#include <stdio.h>

/**
 * main - sorting with the bubble sort algorithm
 *
 * Return: 0
*/
int main(void)
{
	int i, temp, swapped;
	int numbers[5] = {5, 3, 10, 2, 1};

	/*print original list*/
	printf("Original list: ");
	for (i = 0; i < 5; i++)
		printf("%d ", numbers[i]);

	/*perform sort*/
	do {
		swapped = 0;
		for (i = 0; i < 4; i++)
			if (numbers[i] > numbers[i + 1])
			{
				temp = numbers[i]; /*temporary storage*/
				numbers[i] = numbers[i + 1]; /*push lower number left*/
				numbers[i + 1] = temp; /*bubble higher number to the right*/
				swapped = 1; /*confirm swap ocurred*/
			}
	} while (swapped); /*run so long as there are elements to sort.*/

	/*print sorted list*/
	printf("\nSorted list: ");
	for (i = 0; i < 5; i++)
		printf("%d ", numbers[i]);

	putchar('\n');

	return (0);
}

/*
 * Observation
 *
  * the range excludes the higher bound since it bubbles and should be
  * alone. This way, we can focus on the numbers that still low.
*/
