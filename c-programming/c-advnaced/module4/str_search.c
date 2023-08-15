#include <stdio.h>
#include <string.h>

void _index(const char *s, const char *p);
void find_all(const char *haystack, const char *needle);

/**
 * main - more string stuff
 *
 * Return: 0
*/
int main(void)
{
	char *long_str =
		"I have this long string and I am looking to find "
		"occurrences of some strings. Of course, it could be another "
		"anything. So let's see how the strstr function works";
	char *sub_str = "in";

	find_all(long_str, sub_str);

	return (0);
}

/**
 * _index - calculate the offset between two pointers, yielding
 * the index positions for my purposes
 *
 * @s: pointer to first string
 * @p: pointer to second string
*/
void _index(const char *s, const char *p)
{
	static int i; /* keep track of occurrences */

	if (p == NULL)
		puts("Not found");
	else
		printf("occurrence no.: %i, index: %ld\n", i++, p - s);
}

/**
 * find_all - find all occurrences of a sub string in a string
 *
 * @haystack: string
 * @needle: sub string
*/
void find_all(const char *haystack, const char *needle)
{
	printf("Searching for: '%s'\n", needle);
	char *loc_str = strstr(haystack, needle);

	while (loc_str)
	{
		_index(haystack, loc_str);
		loc_str = strstr(loc_str + 1, needle);
	}
}
