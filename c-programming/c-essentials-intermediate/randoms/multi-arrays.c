#include <stdio.h>

/**
 * main - multi-dimensional arrays
 *
 * Return: 0
 */
int main(void)
{
	int grids[4][3] = {
		{1, 2, 3},
		{10, 20, 30},
		{100, 200, 300},
		{1000, 2000, 3000}};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%-6d", grids[i][j]);
		printf("\n");
	}

	return (0);
}
