#include <stdio.h>
#define SIZE 10

/**
 * main - iterative version of factorials
 *
 * Return: 0
 */
int main(void)
{
	int n[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (int i = 0; i < SIZE; i++)
	{
		int fact = 1; /* reset factorial value for each iteration */

		for (int j = 1; j <= i; j++)
			fact *= n[j];
		printf("%2d! = %7d\n", n[i], fact);
	}
	return (0);
}
