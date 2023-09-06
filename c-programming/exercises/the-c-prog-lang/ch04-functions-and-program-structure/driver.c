#include <stdio.h>
#include "ex4.1-strrindex.c"
#include "strindex.c"
#define SIZE 3

/**
 * main - driver code to test strindex and strrindex functions
 *
 * Return: 0
 */
int main(void)
{
	int i, found, index;
	char lines[SIZE][100] = {
		{"This line has some secret key"},
		{"You have to be discrete sometimes"},
		{"I will be away for a while"}
	};
	char *search = "cret";

	printf("Search for %s\n", search);
	/* left index search */
	found = 0;
	printf("Left index search...\n\n");
	for (i = 0; i < SIZE; i++)
	{
		index = strindex(lines[i], search);
		if (index >= 0)
		{
			printf("%d: %s [index: %d]\n", i + 1, lines[i], index);
			found++;
		}
	}
	printf("\n%d lines were matched\n", found);

	/* right index search */
	found = 0;
	printf("\nRight index search...\n\n");
	for (i = 0; i < SIZE; i++)
	{
		index = strrindex(lines[i], search);
		if (index >= 0)
		{
			printf("%d: %s [index: %d]\n", i + 1, lines[i], index);
			found++;
		}
	}
	printf("\n%d lines were matched\n", found);

	return (0);
}
