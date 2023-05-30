#include <stdio.h>

/**
 * main - generate fibonnaci numbers and print odd and even elements
 *
 * Return: 0
*/
int main(void)
{
	int size = 11, i;
	int fibs[size]; /*fibonnaci numbers array*/

	/*initial values of fibonnaci*/
	fibs[0] = 0;
	fibs[1] = 1;

	for (i = 2; i < size; i++)
		fibs[i] = fibs[i - 1] + fibs[i - 2]; /*the sum of the previous 2 numbers*/

	/*print all fibs*/
	printf("All fibs:  ");
	for (i = 1; i < size; i++)
		printf("%d ", fibs[i]);

	/*print odd fibs*/
	printf("\nOdd fibs:  ");
	for (i = 1; i < size; i++)
		if (fibs[i] % 2 != 0)
			printf("%d ", fibs[i]);

	/*print even fibs*/
	printf("\nEven fibs: ");
	for (i = 1; i < size; i++)
		if (fibs[i] % 2 == 0 && fibs[i] != 0)
			printf("%d ", fibs[i]);

	putchar('\n');

	return (0);
}

/*
 * Observation
 *
 * Out of every 3 fibonnaci numbers (zero exclusive)
 * we get one even number. The rest are odd numbers.
*/
