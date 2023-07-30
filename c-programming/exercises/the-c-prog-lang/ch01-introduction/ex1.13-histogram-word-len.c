#include <stdio.h>
#define IN 1  /* in a word */
#define OUT 0 /* out of word */
#define SIZE 21
#define WORD 1 /* a word */

/**
 * main - Exercise 1-13
 *
 * Write a program to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal; a vertical
 * orientation is more challenging.
 *
 * Return: 0
 */
int main(void)
{
	int count, c, state;
	int len[SIZE];

	state = OUT;
	for (int i = 0; i < SIZE; i++)
		len[i] = 0;

	count = 0;
	while ((c = getchar()) != EOF)
	{
		if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z')) /* upper and lower */
		{
			state = IN;
			++count; /* count letters until space is encountered */
		}
		else if (c == ' ' || c == '\t' || c == '\n') /* a new word is found */
		{
			state = OUT;
			len[count] += WORD;
			count = 0; /* reset and count again */
		}
	}

	/* the histogram */
	puts("\nHistogram of length of words from input");
	for (int i = 1; i < SIZE; i++)
	{
		printf("%3d|", i);
		for (int j = 0; j < len[i]; j++)
			putchar('*');
		putchar('\n');
	}
}
