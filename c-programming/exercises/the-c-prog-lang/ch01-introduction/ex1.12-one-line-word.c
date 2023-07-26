#include <stdio.h>
#define IN 1
#define OUT 0
#define BLANK ' '
#define TAB '\t'
#define NEWLINE '\n'

/**
 * main - printing input one word per line
 *
 * Exercise 1-2: Write a program that prints its input one word per line.
 *
 * Return: 0
 */
int main(void)
{
	int c;
	int state = OUT;

	while ((c = getchar()) != EOF)
	{
		if (state == OUT)
		{
			state = IN;
			putchar(c); /* print the first character */
		}
		else if (c == BLANK || c == NEWLINE || c == TAB)
		{
			state = OUT;
			/* move to next line when a blank is encountered */
			putchar(NEWLINE);
		}
		else
			putchar(c); /* print remaining letters before blank */
	}
}
