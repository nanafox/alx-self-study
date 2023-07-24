#include <stdio.h>

/**
 * main - input and output
 *
 * Task: Verify that the expression getchar () != EOF is 0 or 1.
 *
 * Return: 0
 */
int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);

	printf("\nValue of getchar() != EOF: %d\n", c == EOF);

	return (0);
}
