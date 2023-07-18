#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int row = 2; /*rows for 2D array*/
	int col = 3; /*columns in 1D arrays*/
	int **ptr = malloc(sizeof(int *) * row); /*size of pointer to int*/

	for (int i = 0; i < row; i++)
   		/*allocate space for 1D array elements*/
   		ptr[i] = malloc(sizeof(int) * col);

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			ptr[i][j] = i + 1;
	
	for (int i = 0; i < row; i++)
	{
		putchar('\n');
		for (int j = 0; j < col; j++)
			printf("%d ", ptr[i][j]);
	}
	putchar('\n');

	/*de-allocate memory*/
	for (int i = 0; i < row; i++)
		free(ptr[i]); /*1D array memory space*/
	free(ptr); /*2D array memory space*/
	ptr = NULL;
}
