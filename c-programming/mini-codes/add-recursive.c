#include <stdio.h>

int add_recursive(int n);
int loop_version(int n);

/**
 * main - recursion vs iteration
 *
 * Return: 0
 */
int main(void)
{
	int sum = add_recursive(10);
	int sum2 = loop_version(10);

	printf("Recursive sum: %d\n", sum);
	printf("Iterative sum: %d\n", sum2);
}

/**
 * add_recursive - uses recursion to compute the triangular number of n
 *
 * @n: number to calculate triangular number of
 *
 * Return: result - triangular number of n
 */
int add_recursive(int n)
{
	static int result; /*ensures previous value is rememberred*/

	result += n;
	if (n > 0)
		add_recursive(--n);

	return (result);
}

/**
 * loop_version - uses iteration to compute the triangular number of n
 *
 * @n: number to calculate triangular number of
 *
 * Return: result - triangular number of n
 */
int loop_version(int n)
{
	int result = 0;

	for (int i = 0; i <= n; i++)
		result += i;

	return (result);
}
