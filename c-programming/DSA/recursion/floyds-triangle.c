#include <stdio.h>

int s;
int h;
void floyds_triangle(void);

/**
 * main - tail recursion, indirect recursion
 *
 * Return: 0
 */
int main(void)
{
	h = 10;

	if (s == h)
		return (0);
	floyds_triangle();
}

/**
 * floyds_triangle - floyd's triangle
 */
void floyds_triangle(void)
{
	for (int i = 0; i <= s; i++)
		printf("%d ", i);
	putchar('\n');
	s++;
	main();
}
