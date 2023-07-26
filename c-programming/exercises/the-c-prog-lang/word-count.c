#include <stdio.h>
#define IN 1
#define OUT 0
#define SPACE ' '
#define TAB '\t'
#define NEWLINE '\n'

/**
 * main - a loose version UNIX's wc command
 *
 * Return: 0
 */
int main(void)
{
	int c, nl, nw, nc, state;

	nl = nw = nc = 0;
	state = OUT;

	while ((c = getchar()) != EOF)
	{
		++nc; /* count characters */

		if (c == NEWLINE)
			++nl; /* count lines */
		if (c == SPACE || c == TAB || c == NEWLINE)
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw; /* count words */
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
