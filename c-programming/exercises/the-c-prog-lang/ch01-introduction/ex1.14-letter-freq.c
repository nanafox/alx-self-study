#include <stdio.h>
#define SIZE 26
void print_histogram(int *data, int c);

/**
 * main - exercise 1-14
 *
 * Write a program to print a histogram of the frequencies of different
 * characters in its input.
 *
 * Notes: Currently, only the histogram for upper case and lower case letters
 * are printed but all others are accounted for, just not printed.
 *
 * This version distinguishes between upper and lower case letters.
 * So you'd see a much longer output. I just wanted to be verbose
 * with the task. It was pretty cool and fun.
 *
 * Return: 0
 */
int main(void)
{
	int i, j, c, space, other;
	int upper_letters[SIZE];
	int lower_letters[SIZE];
	int nums[SIZE];
	other = space = 0;

	for (i = 0; i < SIZE; i++)
	{
		lower_letters[i] = 0;
		upper_letters[i] = 0;
		nums[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if (c >= 'A' && c <= 'Z')
			++upper_letters[c - 'A']; /* count each upper case letters */
		else if (c >= 'a' && c <= 'z')
			++lower_letters[c - 'a']; /* do same for lower letters */
		else if (c >= '0' && c <= '9')
			++nums[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++space; /* whitespaces */
		else
			++other; /* all other characters - a final catch all */
	}
    print_histogram(lower_letters, 0);
    print_histogram(upper_letters, 1);
}

/**
 * print_histogram - takes care of printing the histograms
 *
 * @data: an array of data points
 * @c: case of letter.
 *
 * Note: This currently works for letters alone.
*/
void print_histogram(int *data, int c)
{
	int i, j;
	putchar('\n');
	switch (c)
	{
		case 0:
			/* lower case letters histogram */
			for (i = 0; i < SIZE; i++)
			{
				printf("%3c|", 'a' + i);
				for (j = 0; j < data[i]; j++)
					putchar('*');
				putchar('\n');
			}
			break;
		case 1:
			/* upper case letters histogram */
			for (i = 0; i < SIZE; i++)
			{
				printf("%3c|", 'A' + i);
				for (j = 0; j < data[i]; j++)
					putchar('*');
				putchar('\n');
			}
			break;
	}
}
