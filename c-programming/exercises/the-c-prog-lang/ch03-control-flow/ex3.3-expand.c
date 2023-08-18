#include <stdio.h>

char *expand(const char *s1, char *s2);

/**
 * main - solution to Exercise 3-3
 *
 * Exercise 3-3. Write a function expand(s1, s2) that expands shorthand
 * notations like a-z in the string s1 into the equivalent complete list
 * abc...xyz in s2. Allow for letters of either case and digits, and be
 * prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a
 * leading or trailing - is taken literally
 *
 * @argc: args count...
 * @argv: requires a range
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <range [example: a-z]>\n", argv[0]);
		return (1);
	}
	char str[100];
	char *s = expand(argv[1], str);

	if (s != NULL)
		puts(str);
	else
	{
		fprintf(stderr, "The range given is not implemented. Try the following\n");
		fprintf(stderr, "a-z, b-q, 0-4, g-u\n");
		fprintf(stderr, "Something in this area...\n");

		return (2);
	}
}

/**
 * expand - expands a range into full length. Currently it only works
 * with two ranges. It can do reverse ranges as well.
 *
 * Examples:
 *		a-z, b-j, k-b
 *		0-4, 9-3, 0-0
 *
 * It may produce funny results if the range pattern is not followed...
 * Use only low letters or upper case letters, don't mix them.
 *
 * @s1: string containing shorthand notation
 * @s2: the string to expand to, ensure it is large enough.
 *
 * Return: the expanded range string
 */
char *expand(const char *s1, char *s2)
{
	int c, i, j, k;

	for (i = 0; *s1 != '\0'; i++, s1++)
	{
		if (*s1 == '-' && (i == 0 || *(s1 + 1) == '\0'))
			continue; /* take leading dashes litrerally */
		else if ((*s1 >= 'a' && *s1 <= 'z') || (*s1 >= 'A' && *s1 <= 'Z'))
		{
			if (*(s1 + 1) == '-')
			{
				/* reverse range */
				if (*s1 > *(s1 + 2))
				{
					for (j = 0, c = *s1; c >= *(s1 + 2); c--, j++)
						*(s2 + j) = c;
					return (s2);
				}
				/* ascending - default */
				for (j = 0, c = *s1; c <= *(s1 + 2); c++, j++)
					*(s2 + j) = c; /* expand alphabets */
				return (s2);
			}
		}

		/* check for digits */
		else if (*s1 >= '0' && *s1 <= '9')
		{
			if (*(s1 + 1) == '-') /* check for dash after first digit */
			{
				if (*s1 > *(s1 + 2))
				{
					/* handle reversed range */
					for (k = 0, j = *s1; j >= *(s1 + 2); j--, k++)
						*(s2 + k) = j;
					return (s2);
				}
				for (k = 0, j = *s1; j <= *(s1 + 2); j++, k++)
					*(s2 + k) = j;
				return (s2);
			}
		}
		else
			return (NULL); /* not implemented */
	}
}
