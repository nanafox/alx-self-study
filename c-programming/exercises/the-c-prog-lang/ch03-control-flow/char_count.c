#include <stdio.h>
#define SIZE 10
/**
 * main - using the switch...case instead if...else if..else
 *
 * Return: 0
 */
int main(void)
{
	int c, i, nwhite, nother, ndigits[SIZE];

	nwhite = nother = 0;

	for (i = 0; i < SIZE; i++)
		ndigits[i] = 0;

	while ((c = getchar()) != EOF)
	{
		switch (c)
		{
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9':
			++ndigits[c - '0'];
			break;
		case ' ': case '\n': case '\t':
			nwhite++;
			break;
		default:
			nother++;
			break;
		}
	}

	puts("Number occurrence");
	for (i = 0; i < SIZE; i++)
		printf("%d -> %d\n", i, ndigits[i]);
	printf("Number of whitespace: %d\n", nwhite);
	printf("Others: %d\n", nother);

	return (0);
}
