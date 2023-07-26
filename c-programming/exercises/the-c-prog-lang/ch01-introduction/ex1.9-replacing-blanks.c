#include <stdio.h>
#define BLANK ' '
/**
 * main - trim extra spaces in text
 *
 * Exercise 1-9: Write a program to copy its input to its output, replacing
 * each string of one or more blanks by a single blank.
 *
 * Return: 0
 */
int main(void)
{
	int c;
	int blanks = 0;

	while ((c = getchar()) != EOF)
	{
		/*check blanks*/
		if (c == BLANK)
			++blanks;
		else
			blanks = 0;

		/*print trimmed text*/
		if (blanks < 2)
			putchar(c);
	}
}
