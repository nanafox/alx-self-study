#include "../../../utils/strings/string_io.h"
#include <stdio.h>
#define LEN 100

void escape(char *s, char *t);
void escape_reverse(char *s, char *t);

/**
 * main - solution to exercise 3-2
 *
 * Exercise 3-2: Write a function escape(s, t) that converts characters like
 * newline and tab into visible escape sequences like \n and \t as it copies
 * the string t to s. Use a switch. Write a function for the other direction
 * as well, converting escape sequences into the real characters.
 *
 * Return: 0
 */
int main(void)
{
	char s1[LEN];
	char s2[LEN];
	char s3[LEN];

	_getline(s1, LEN);
	escape(s2, s1);
	escape_reverse(s3, s2);

	printf("\nOriginal string: %s", s1);
	printf("Show escape chars: %s\n", s2);
	printf("Hide escape chars: %s", s3);
	printf("hello\tworld\n");
}

/**
 * escape - converts newline and tab into visible escape sequences
 *
 * @s: destination string
 * @t: source string
 */
void escape(char *s, char *t)
{
	int i, j;

	for (i = j = 0; t[i] != '\0'; i++, j++)
	{
		switch (t[i])
		{
		case '\n': /* convert newline to visible characters \\n */
			s[j] = '\\';
			s[++j] = 'n';
			break;
		case '\t': /* convert tab to visible character -> \\t */
			s[j] = '\\';
			s[++j] = 't';
			break;
		default:
			s[j] = t[i];
			break;
		}
	}
	s[j] = '\0'; /* null terminate string*/
}

/**
 * escape_reverse - turns visible escape characters invisible while copying
 * from @t to @s
 *
 * @s: destination string
 * @t: source string
 */
void escape_reverse(char *s, char *t)
{
	int i, j;

	for (i = j = 0; t[i] != '\0'; i++, j++)
	{
		/* check for newline and tabs */
		int e_char = (t[i] == '\\' && t[i + 1] == 'n')	 ? 1  /* new line */
					 : (t[i] == '\\' && t[i + 1] == 't') ? 2  /* tab */
														 : 0; /* others */
		switch (e_char)
		{
		case 1: /* new line sequence found */
			s[j] = '\n';
			++i; /* skip next character */
			break;
		case 2: /* tab sequence found */
			s[j] = '\t';
			++i;
			break;
		default:
			s[j] = t[i]; /* write visible characters */
			break;
		}
	}
	s[i] = '\0';
}
