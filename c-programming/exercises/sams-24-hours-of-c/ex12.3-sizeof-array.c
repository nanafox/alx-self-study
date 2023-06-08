#include <stdio.h>

/**
 * main - calculate the size of a multidimentsional array and print elements
 *
 * Return: 0
*/
int main(void)
{
	char list_ch[][2] = {
		'1', 'a',
		'2', 'b',
		'3', 'c',
		'4', 'd',
		'5', 'e',
		'6', 'f'};

	int size = sizeof(list_ch);

	printf("The size in bytes: %d\n", size);

	puts("Elements");
	/*n = size / 2 because it's a 2-D array*/
	for (int i = 0, n = size / 2; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%3c\t", list_ch[i][j]);
		}
		putchar('\n');
	}
	return (0);
}

