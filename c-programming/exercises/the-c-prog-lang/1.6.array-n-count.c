#include <stdio.h>
#define SIZE 10

/**
 * main - count digits, whitespaces, and other characters
 *
 * Return: 0
 */
int main(void)
{
	int c, i, nws, nother;
	int ndigits[SIZE];
	nws = nother = 0; /* number of white space and other characters */

	for (i = 0; i < SIZE; ++i)
		ndigits[i] = 0;
	
	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9') /* is digit */
			++ndigits[c - '0']; /* count number of item a digit occurs */
		else if (c == ' ' || c == '\n' || c == '\t')
			++nws; /* count as white space */
		else
			++nother; /* all non-digits, whitespaces, all other character */ 
	}

	puts("Digits:");
	for (i = 0; i < SIZE; ++i)
		printf("%d: %d\n", i, ndigits[i]);
	putchar('\n');
	printf("white space: %d\nother: %d\n", nws, nother);

	return (0);
}
