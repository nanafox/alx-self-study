#include <stdio.h>
#include <stdlib.h>

/**
 * main - dynamically allocates memory for array size
 *
 * Return: 0
 */
int main(void)
{
	int *numbers, size;

	puts("Multiples of two...");
	printf("Number: ");
	scanf("%d", &size);

	numbers = calloc(size, sizeof(int));
	
	if (numbers != NULL)
		for (int i = 0; i < size; i++)
			numbers[i] = (i + 2) * 2 - 2; /*get multiples of 2*/
	else
	{
		puts("Memory Allocation failed!");
		return 1;
	}
	for (int i = 0; i < size; i++)
		/*print each sequence of 10 items on a new line*/
		(i % 10 == 0 && i != 0) ? printf("\n%5d ", numbers[i]):
			printf("%5d ", numbers[i]);
	putchar('\n');

	free(numbers);

	return (0);
}
