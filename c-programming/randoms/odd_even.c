#include <stdio.h>

#define is_odd(n) ((n) & 1) /* returns 1 for odds, 0 for even */

/**
 * main - Takes a number and prints whether it is even or odd
 *
 * Return: 0
 */
int main(void)
{
	int n;

	printf("Number: ");
	scanf("%d", &n);

	printf("%d is %s\n", n, (is_odd(n) ? "odd" : "even"));

	return (0);
}
