#include <stdio.h>

int trinum(int x, int a);

/**
 * main - triangular numbers, direct recursion, tail recursion.
 *
 * Return: 0
 */
int main(void)
{
	int t, x;

	printf("Enter a number: ");
	scanf("%d", &x);

	t = trinum(x, 1);

	printf("Triangular number of %d is %d\n", x, t);

	return (0);
}

/**
 * trinum - calculate triangular numbers
 *
 * @x: number
 * @a: accumulator. must be 1, else result will be unexpected
 *
 * Return: triangular number of x
 */
int trinum(int x, int a)
{
	if (x == 1)
		return (a);
	return (trinum(x - 1, x + a));
}
