#include <stdio.h>
#define MAXLINE 1000

int _getline(char line[], int maxline);
void copy(char to[], char from[]);

/**
 * main - Exercise 1-16
 *
 * Revise the main routine of the longest-line program so it will
 * correctly print the length of arbitrarily long input lines, and
 * as much as possible of the text.
 *
 * Return: 0
 */
int main(void)
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = _getline(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
    /* length of text and text */
	if (max > 0)
		printf("\nText Length: %d\nText: %s", max, longest);
}

/**
 * _getline - gets a line from stdin
 *
 * @line: line
 * @maxline: length of line
 *
 * Return: length of line
 */
int _getline(char line[], int maxline)
{
	int c, i;

	for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';

	return (i);
}

/**
 * copy - copies str from src to dest
 *
 * @to: destination str
 * @from: source str
 */
void copy(char to[], char from[])
{
	for (int i = 0; (to[i] = from[i]) != '\0'; ++i)
		;
}
