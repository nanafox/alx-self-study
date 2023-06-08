#include <stdio.h>

/**
 * main - a simple character array program
 *
 * Return: 0
*/
int main(void)
{
	char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};

	for (int i = 0; array_ch[i]; i++)
		printf("array_ch[%d]: %c\n", i, array_ch[i]);

	return (0);
}

