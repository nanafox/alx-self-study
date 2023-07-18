#include "triangles.h"
#include <stdio.h>

/**
 * normal_triangle - draw a right-angled triangle with slashes
 *
 * @n: size of triangle (length)
*/
void normal_triangle(int n)
{
	if (n >= 1)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
				putchar('\\');
			putchar('\n');
		}
	}
	else
		puts("Size can't be used!");
}
