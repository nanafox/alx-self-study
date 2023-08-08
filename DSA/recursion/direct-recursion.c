#include <stdio.h>

int main(int x);
int s, x;

/**
 * main - direct recursion
 * @x: value
 * Return: 0
 */
int main(int x)
{
	s += x;

	printf("x=%d, s=%d\n", x, s);

	if (x == 5) /* base case */
		return (0);
	main(++x);
}
