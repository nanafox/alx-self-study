#include "triangles.h"
#include <stdio.h>

/**
 * floyds_triangle - prints Floyd's triangle
 *
 * @n: size of triangle (length)
*/
void floyds_triangle(int n)
{
	int k = 1;
	
	if (n >= 1)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
				printf("%-3d ", k++);
			putchar('\n');
		}
	}
	else
	{
		puts("Size can't be used!");
		return;
	}
}
