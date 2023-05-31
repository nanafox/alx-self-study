#include <stdio.h>

/**
 * main - sorting with the bubble sort algorithm
 *
 * Return: 0
*/
int main(void)
{
	int i, temp, swapped;
	int size = 5;
	int numbers[size];

	printf("bubSort: Enter 5 numbers that needs to be sorted.\n\n");
	/*get numbers from user - this forms the original which will be later sorted*/
	for (i = 0; i < size; i++)
	{
		printf("Value #%d: ", i + 1);
		scanf("%d", &numbers[i]);
	}

	/*print original list*/
	printf("\nOriginal list: ");
	for (i = 0; i < size; i++)
		printf("%d ", numbers[i]);

	/*perform bubble sort*/
	do {
		swapped = 0;
		for (i = 0; i < size - 1; i++)
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
  * left alone. This way, we can focus on the numbers that are still low.
*/
