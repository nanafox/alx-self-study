#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int row = 2; /*rows for 2D array*/
	int col = 3; /*columns in 1D arrays*/
	int (*arr)[row][col] = malloc(sizeof *arr);

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			(*arr)[i][j] = i + 1;
	
	for (int i = 0; i < row; i++)
	{
		putchar('\n');
		for (int j = 0; j < col; j++)
			printf("%d ", (*arr)[i][j]);
	}
	printf("%d", arr[0][1]);
	putchar('\n');

	free(arr); /*2D array memory space*/
	arr = NULL;
}
