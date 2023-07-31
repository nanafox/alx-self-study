#include <stdio.h>
#define MAXLINE 1000

int _getline(char line[], int maxline);
void copy(char to[], char from[]);

/*
 * while (there's another line)
 *		if (it's longer than the previous longest)
 *		save it
 *		save its length
 * print longest line
 */

/**
 * main - check longest line in given lines
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

	if (max > 0)
		printf("\nLongest line: %s", longest);
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
