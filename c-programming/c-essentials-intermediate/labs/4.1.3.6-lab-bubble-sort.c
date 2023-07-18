#include <stdio.h>

/**
 * main - bubble sort numbers (float and/or int) in descending order.
 *
 * Return: 0
*/
int main()
{
	int size = 10;
	float numbers[10] = {6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9, 5, 1, 6};
	int swapped, i;
	float temp; /*temporary storage to swap values*/

	printf("Original list: ");
	for (i = 0; i < size; i++)
		(i < size) ? printf("%.2f ", numbers[i]) : printf("%f", numbers[i]);

	do {
		swapped = 0; /*not swapped*/
		for (i = 0; i < (size - 1); i++)
			if (numbers[i] < numbers[i + 1]) /*sort reversely*/
			{
				temp = numbers[i]; /*temporary storage*/
				numbers[i] = numbers[i + 1]; /*push higher to left*/
				numbers[i + 1] = temp; /*lower numbers bubbles to the right*/
				swapped = 1; /*swapped*/
		}
	} while (swapped);

	printf("\nSorted list: ");
	for (i = 0; i < size; i++)
		(i < size) ? printf("%.2f ", numbers[i]) : printf("%f", numbers[i]);

	putchar('\n');

	return (0);
}