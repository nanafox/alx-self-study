#include <stdio.h>

/**
 * main - a manual implementation for generating
 * any number of fibonacci numbers, starting with 0 and 1.
 *
 * Return: 0
*/
int main(void)
{
	int f0 = 0, f1 = 1; /*f0 and f1 values*/
	int n; /*number of elements to generate*/

	printf("Number of elements: ");
	scanf("%d", &n);

	printf("%d %d ", f0, f1);
	for (int i = 2; i < n; ++i)
	{
		int f_i = f0 + f1; /*get the next element in the sequence*/

		printf("%d ", f_i);
		/*swap values*/
		f0 = f1;
		f1 = f_i;
	}
	putchar('\n');

	return (0);
}
