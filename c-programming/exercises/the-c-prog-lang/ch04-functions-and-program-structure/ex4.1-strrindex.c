#include <string.h>

/**
 * strrindex - return the position from right
 *
 * @s: source string
 * @t: pattern to match
 *
 * Return: rightmost index, -1 if none
 *
 * Exercise 4-1: Write the function strrindex (s, t), which returns the
 * position of the rightmost occurrence of t in s, or -1 if there is none.
 */
int strrindex(char *s, char *t)
{
	int i, j, k, len;

	for (i = strlen(s) - 1; i >= 0; i--) /* start searching from end of string */
	{
		for (j = i, k = strlen(t) - 1; k >= 0 && s[j] == t[k]; j--, k--)
			; /* perform string matching from end */
		if (k <= 0)
			return (i);
	}
	return (-1);
}
