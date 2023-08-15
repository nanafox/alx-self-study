#include <stdio.h>
#include <string.h>

void _index(const char *s, const char *p);
void find_all(char *s, int c);

/**
 * main - more strchr tasks
 *
 * Return: 0
 */
int main(void)
{
	char *str = "I am coming home now";
	char o = 'o';

	find_all(str, o); /* find the index of all occurence of letter 'o' */
	return (0);
}

/**
 * _index - calculates the offset between pointer @p in pointer @s
 * essentially, getting the index of position of letter.
 *
 * Or at least, that's what I'm using it for
 *
 * @s: string
 * @p: value
 */
void _index(const char *s, const char *p)
{
	if (p == NULL)
		printf("Not found\n");
	else
		printf("index: %ld\n", p - s);
}

/**
 * find_all - prints the index where letter @c occurs in string @s
 *
 * @s: string
 * @c: letter to search for
 */
void find_all(char *s, int c)
{
	char *loc_o = strchr(s, c);

	while (loc_o)
	{
		_index(s, loc_o);
		loc_o = strchr(loc_o + 1, c);
	}
}
