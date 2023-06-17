#include <stdio.h>

void print_multi(char *s, int row, int col);

/**
 * main - solution for exercise 4 (Hour 16)
 *
 * Return: 0
 */
int main(void)
{
	const int row = 3;
	const int col = 30;

	char str[3][30] = {
		"You know what,",
		" C is powerful.\n",
		"It is really powerful."
	};

	char *ptr_str = &str[0][0];

	print_multi(ptr_str, row, col);

	return (0);
}

/**
 * print_multi - print multi-dimensional array
 *
 * @s: character array
 * @row: row
 * @col: columns
 */
void print_multi(char *s, int row, int col)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			/*putchar(s[i][j]) -> equivalent below*/
			putchar(*(s + (i * col) + j)); /*get element's address and print*/
	putchar('\n');
}
