#include <stdio.h>
#include <string.h>

void _index(const char *s, const char *p);

/**
 * main - searching for characters using the strchr() and strrchr() function
 *
 * Return: 0
 */
int main(void)
{
	char *loc_c1;
	char *loc_c2;
	char *str = "Hello world!";
	char c = 'o';

	/* locate letter 'o' in "Hello world!" */
	loc_c1 = strchr(str, c);
	loc_c2 = strrchr(str, c);

	puts(str);
	printf("%s\n", loc_c1);
	_index(str, loc_c1);
	printf("%s\n", loc_c2);
	_index(str, loc_c2);

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
