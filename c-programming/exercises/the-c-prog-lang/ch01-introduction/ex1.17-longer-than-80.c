#include <stdio.h>
#define MAXLINE 1000

int _getline(char line[], int maxline);
void append(char to[], char from[], int start);

/**
 * main - Exercise 1-17
 *
 * Write a program to print all input lines that are longer than 80
 * characters.
 *
 * Return: 0
 */
int main(void)
{
	int len, start, size;
	int max;
	char line[MAXLINE];
	char over_80_chars[MAXLINE];

	max = 80;
	start = 0;
	size = 0;
	while ((len = _getline(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			append(over_80_chars, line, start);
			start += len;
			size = len;
		}
	}

	/* lines with characters greater than 80 */
	if (size > max)
	{
		puts("\n***Lines that are longer than 80 characters***\n");
		printf("%s", over_80_chars, size);
	}
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
 * append - append str from src to dest
 *
 * @to: destination str
 * @from: source str
 * @start: start point
 */
void append(char to[], char from[], int start)
{
	for (int i = 0; (to[start] = from[i]) != '\0'; ++i, ++start)
		;
}
