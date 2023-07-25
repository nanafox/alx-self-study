#include <stdio.h>

/**
 * main - counting characters
 *
 * Task: Write a program to count blanks, tabs, and newlines.
 *
 * Return: 0
 */
int main(void)
{
	int newlines = 0;
	int tabs = 0;
	int blanks = 0;
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			++newlines;
		else if (c == '\t')
			++tabs;
		else if (c == ' ')
			++blanks;
	}

	printf("\nTabs: %d\n", tabs);
	printf("Lines: %d\n", newlines);
	printf("Blanks: %d\n", blanks);

	return (0);
}
