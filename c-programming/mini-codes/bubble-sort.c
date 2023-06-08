#include <stdio.h>

void bub_sort(int numbers[], int size);

/**
 * main - sorting with the bubble sort algorithm (for integers only).
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int size; /*number of items to store in array / sort*/

	printf("Number of elements to sort: ");
	scanf("%d", &size);

	if (size < 0 || size > 10)
	{
		printf("\nError: Accepted range is 1 through 10\n");

		return (1);
	}

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
		(i < size) ? printf("%d ", numbers[i]) : printf("%d", numbers[i]);

	/*perform bubble sort*/
	bub_sort(numbers, size);

	/*print sorted list*/
	printf("\nSorted list: ");
	for (i = 0; i < size; i++)
		/*print element while taking care of spacing*/
		(i < size) ? printf("%d ", numbers[i]) : printf("%d", numbers[i]);

	putchar('\n');

	return (0);
}

/**
 * bub_sort - perform sorting with bubble sort algorithm (integers only)
 *
 * @numbers: an array of numbers to be sorted
 * @size: the size of the array
 */
void bub_sort(int numbers[], int size)
{
	int swapped, i;

	do
	{
		swapped = 0; /*represent false - not swapped*/
		for (i = 0; i < size - 1; i++)
			if (numbers[i] > numbers[i + 1])
			{
				numbers[i + 1] ^= numbers[i]; /*temporary storage*/
				numbers[i] ^= numbers[i + 1]; /*push lower number left (swap)*/
				numbers[i + 1] ^= numbers[i]; /*bubble higher number to the right*/
				swapped = 1;				  /*confirm swap ocurred*/
			}
	} while (swapped); /*run so long as there are elements to sort.*/
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
 *
 * Update - June 8, 2023
   * This was done only because only ints were used.
   * Also, changes were made to use variables instead of constants
   *
   * the sorting functionality is now taken care of by a separate function
 */
