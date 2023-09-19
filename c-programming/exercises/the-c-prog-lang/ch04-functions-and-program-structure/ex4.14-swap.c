#include <stdio.h>
#define swap(t, x, y) { \
	t z = x; \
	x = (t)y; \
	y = (t)z; \
} /* uses type casting */

/**
 * main - driver code
 *
 * Exercise 4-14: Define a macro swap(t,x,y) that interchanges two arguments
 * of type t. (Block structure will help.)
 *
 * Return: 0
 */
int main(void)
{
	int x, y;
	char a, b;
	float f, g;

	x = 10, y = 20;
	a = 'A', b = 'B';
	f = 10.43, g = 43.10;

	puts("Before swap");
	printf("x: %d, y: %d\n", x, y);
	printf("a: %c, y: %c\n", a, b);
	printf("f: %g, g: %g\n", f, g);
	swap(int, x, y);
	swap(char, a, b);
	swap(float, f, g);

	puts("\nAfter swap");
	printf("x: %d, y: %d\n", x, y);
	printf("a: %c, y: %c\n", a, b);
	printf("f: %g, g: %g\n", f, g);

	return (0);
}
