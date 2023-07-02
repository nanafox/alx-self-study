#include <stdio.h>
#include <stdlib.h>

void create_chessboard(char (*chessboard)[8]);
void print_chessboard(char (*chessboard)[8]);

/**
 * main - multidimensional arrays: creating a chess board
 *
 * Return: 0
 */
int main(void)
{
	char chessboard[8][8];

	create_chessboard(chessboard);
	print_chessboard(chessboard);

	return (0);
}

/**
 * create_chessboard - creates a minimal chess board
 *
 * @chessboard: array to contain chess board
 */
void create_chessboard(char (*chessboard)[8])
{
	/*create board*/
	for (int row = 0; row < 8; row++)
	{
		for (int col = 0; col < 8; col++)
		{
			if ((row == 0 && col == 0) || (row == 0 && col == 7) ||
					(row == 7 && col == 0) || (row == 7 && col == 7))
				chessboard[row][col] = 'R'; /*Rookie*/
			else if ((row == 0 && col == 1) || (row == 0 && col == 6) ||
					(row == 7 && col == 1) || (row == 7 && col == 6))
				chessboard[row][col] = 'N'; /*Knights*/
			else if ((row == 0 && col == 2) || (row == 0 && col == 5) ||
					(row == 7 && col == 2) || (row == 7 && col == 5))
				chessboard[row][col] = 'B'; /*Bishops*/
			else if (row == 0 && col == 3 || row == 7 && col == 3)
				chessboard[row][col] = 'Q'; /*Queen*/
			else if (row == 0 && col == 4 || row == 7 && col == 4)
				chessboard[row][col] = 'K'; /*King*/
			else if (row == 1 || row == 6)
				chessboard[row][col] = 'P'; /*Pawns*/
			else
				chessboard[row][col] = ' '; /*empty*/
		}
	}
}

/**
 * print_chessboard - prints a chess board
 *
 * @chessboard: board to print
 */
void print_chessboard(char (*chessboard)[8])
{
	for (int row = 0; row < 8; row++)
	{
		for (int col = 0; col < 8; col++)
			printf("%c ", chessboard[row][col]);
		putchar('\n');
	}
}
