#include <stdio.h>

int compare_matrix(int cols, int (*matrix_1)[cols], int (*matrix_2)[cols]);
void print_result(int cols, int (*matrix_1)[cols], int (*matrix_2)[cols]);

/**
 * main - comparing matrices
 *
 * Return: 0
 */
int main(void)
{
	int size = 3;
	int matrixA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int matrixB[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int matrixC[3][3] = {{1, 4, 3}, {4, 5, 6}, {7, 8, 9}};

	/*test cases*/
	print_result(size, matrixA, matrixB);
	print_result(size, matrixA, matrixC);
	print_result(size, matrixB, matrixA);
	print_result(size, matrixB, matrixC);
	print_result(size, matrixC, matrixA);
	print_result(size, matrixC, matrixB);
}

/**
 * compare_matrix - compares two matrix to determine which is greater
 *
 * @cols: number of columns in matrix
 * @matrix_1: matrix 1
 * @matrix_2: matrix 2
 *
 * Return: 1 if matrix_1 is greater, -1 if matrix_2 is greater, 0 if equal.
 */
int compare_matrix(int cols, int (*matrix_1)[cols], int (*matrix_2)[cols])
{
	int i, j;

	for (i = 0; i < cols; i++)
	{
		for (j = 0; j < cols; j++)
		{
			if (matrix_1[i][j] > matrix_2[i][j])
				return (1); /*matrix1 is greater*/
			else if (matrix_1[i][j] < matrix_2[i][j])
				return (-1); /*matrix2 is greater*/
		}
	}
	return (0); /*both matrices are equal*/
}

/**
 * print_result - prints the result of which matrix is greater
 *
 * @cols: number of columns in matrix
 * @matrix_1: matrix 1
 * @matrix_2: matrix 2
 */
void print_result(int cols, int (*matrix_1)[cols], int (*matrix_2)[cols])
{
	int result = compare_matrix(cols, matrix_1, matrix_2);

	if (result == 1)
		puts("MatrixA is greater than Matrix B");
	else if (result == -1)
		puts("MatrixB is greater than Matrix A");
	else
		puts("Both matrices are equal.");
}
