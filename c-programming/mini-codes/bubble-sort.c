#include <stdio.h>

/**
 * main - sorting with the bubble sort algorithm (for integers only).
 *
 * Return: 0
*/
int main(void)
{
	int i, swapped;
	int size = 5; /*number of items to store in array / sort*/
	int numbers[size];

	printf("bubSort: Enter %d numbers that needs to be sorted.\n\n", size);
	/*get numbers from user - this forms the original which will be later sorted*/
	for (i = 0; i < size; i++)
	{
		printf("Value #%d: ", i + 1);
		scanf("%d", &numbers[i]);
	}

	/*print original list*/
	printf("\nOriginal list: ");
	for (i = 0; i < size; i++)
		/*print element while taking care of spacing*/
		(i < 5) ? printf("%d ", numbers[i]) : printf("%d", numbers[i]);

	/*perform bubble sort*/
	do {
		swapped = 0;
		for (i = 0; i < size - 1; i++)
			if (numbers[i] > numbers[i + 1])
			{
				numbers[i + 1] ^= numbers[i]; /*temporary storage*/
				numbers[i] ^= numbers[i + 1]; /*push lower number left (swap)*/
				numbers[i + 1] ^= numbers[i]; /*bubble higher number to the right*/
				swapped = 1; /*confirm swap ocurred*/
			}
	} while (swapped); /*run so long as there are elements to sort.*/

	/*print sorted list*/
	printf("\nSorted list: ");
	for (i = 0; i < 5; i++)
		/*print element while taking care of spacing*/
		(i < 5) ? printf("%d ", numbers[i]) : printf("%d", numbers[i]);

	putchar('\n');

	return (0);
}

/*
 * Observation - May 30, 2023
 *
  * the range excludes the higher bound since it bubbles and should be
  * left alone. This way, we can focus on the numbers that are still low.
  *
 * Update - May 31, 2023
 *
  * Used bit manipulation to swap the values and got rid of the extra
  * variable, temp.
*/
