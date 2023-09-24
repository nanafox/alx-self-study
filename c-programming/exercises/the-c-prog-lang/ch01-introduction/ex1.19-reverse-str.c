#include <stdio.h>
#define MAXLINE 1000

int _getline(char line[], int maxline);
void reverse(char str[]);

/**
 * main - Exercise 1-19
 *
 * Write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reverses its input a line at a time.
 *
 * Return: 0
 */
int main(void)
{
	int len, size;
	int max;
	char line[MAXLINE];

	_getline(line, MAXLINE);
	printf("\nOriginal text: %s", line);
	reverse(line);
	printf("Reversed text: %s", line);
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
 * reverse - reverses a string
 *
 * @str: string to operate
 *
 */
void reverse(char *str)
{
	int len, i, mid, temp;

	i = len = 0;
	/* get string length */
	while (str[i] && str[i++] != '\n')
		len++;

	mid = len / 2;

	/* reverse string */
	for (i = 0; i < mid; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
