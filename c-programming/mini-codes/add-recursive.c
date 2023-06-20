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
	for (int i = 0; i <= 10; i++)
		printf("Recursive sum: %d\n", add_recursive(i));
	putchar('\n');
	for (int i = 0; i <= 10; i++)
		printf("Iterative sum: %d\n", loop_version(i));
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
	int result = 0; /*ensures previous value is rememberred*/

	if (n == 0)
		return (result);
	
	return (result + n + add_recursive(--n));
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
