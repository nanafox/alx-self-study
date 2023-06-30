#include <stdio.h>

void add_row_col(int size, int (*arr)[size]);

/**
 * main - 2D array exercise
 *
 * Task: Write a program that reads a 5x5 array of integers and
 * then prints the row sum and column sum.
 *
 * Return: 0
 */
int main(void)
{
	int size = 5;
	/*hard coded for simplicity - should've been user input*/
	int arr[5][5] = {{1, 2, 3, 4, 5},
					 {6, 7, 8, 9, 10},
					 {11, 12, 14, 15},
					 {16, 17, 18, 19, 20},
					 {21, 22, 23, 24, 25}};

	/*computes sums*/
	add_row_col(size, arr);

	return (0);
}

/**
 * add_row_col - compute for the sum for row elements and column elements
 * in a 2-D array
 *
 * @size: size of array
 * @arr: 2D array of elements
 */
void add_row_col(int size, int (*arr)[size])
{
	int row_sum, col_sum;

	/*compute sum for row elements*/
	printf("Row sum: %3c", ' ');
	for (int row = 0; row < size; row++)
	{
		row_sum = 0;
		for (int col = 0; col < size; col++)
			row_sum += arr[row][col];
		printf("%d ", row_sum);
	}
	putchar('\n');

	/*compute sum for column elements*/
	printf("Column sum: ");
	for (int row = 0; row < size; row++)
	{
		col_sum = 0;
		for (int col = 0; col < size; col++)
			col_sum += arr[col][row];
		printf("%d ", col_sum);
	}
	putchar('\n');
}
