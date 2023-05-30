#include <stdio.h>

/**
 * main - sum numbers in an array
 *
 * Return: 0
*/
int main(void)
{
	int size = 4; /*size of array*/
	int numbers[size], sum = 0, i;

	printf("The sum of "); /*opening statement*/

	for (i = 0; i < size; i++)
	{
		numbers[i] = i * i + 2; /*assign values to elements*/

		if (i != (size - 1)) /*a simple check to ensure presentation is good*/
			printf("%d + ", numbers[i]);
		else
			printf("%d ", numbers[i]);

		sum += numbers[i]; /*increment sum with the element*/
	}
	/*print the score*/
	printf("is: %d\n", sum);

	return (0);
}
