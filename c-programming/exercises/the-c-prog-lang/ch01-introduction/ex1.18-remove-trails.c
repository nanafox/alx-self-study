#include <stdio.h>
#define MAXLINE 1000

int _getline(char line[], int maxline);
int rstrip(char str[]);

/**
 * main - Exercise 1-18
 *
 * Write a program to remove trailing blanks and tabs from each
 * line of input, and to delete entirely blank lines.
 *
 * Return: 0
 */
int main(void)
{
	int len, size;
	int max;
	char line[MAXLINE];

	len = _getline(line, MAXLINE) - 1; /* don't count newline */
	puts("Before strip");
	printf("\nSize: %d\nText: %s", len, line);

	size = rstrip(line);
	if (size > 0)
		printf("\nSize after strip: %d\nText: %s\n", size, line);
	else
		puts("\nBlank line removed.. no other text to show.");
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
 * rstrip - remove trailing spaces and tabs
 *
 * @str: string to operate
 *
 * Return: length of text after strip.
 */
int rstrip(char str[])
{
	int i, n;

	for (i = 0; str[i] != '\0'; ++i) /* get string length */
		;
	n = i - 1; /* minus 1 for the newline character */
	/*
	 * start from the end of the line and strip until a letter is
	 * encountered. newline is not counted.
	 */
	for (--i; i > 0; --i)
	{
		if (str[i] == '\n')
			continue;
		else if (str[i] != ' ' && str[i] != '\t')
			break;
		/* remove trailing blanks */
		str[i] = '\0';
		--n;
	}
	return (n);
}
