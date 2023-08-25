#include "_reverse.c"
#include <stdio.h>
#include <stdlib.h>

void _itob(int n, char *s, int b);

/**
 * main - integer to any base
 *
 * @argc: arg count
 * @argv: requires a number and the base
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3) /* requires a integer and the base to convert to */
	{
		fprintf(stderr, "Usage: %s number to_base\n", argv[0]);
		return (1);
	}
	char s[10];

	_itob(atoi(argv[1]), s, atoi(argv[2]));
	printf("Base 10: %d\n", atoi(argv[1]));
	printf("Base %d: %s\n", atoi(argv[2]), s);

	return (0);
}

/**
 * _itob - convert integer @n to the specified base in @b and stores the result
 * as a string in @s
 *
 * @n: number
 * @s: string to hold representation
 * @b: base to convert @n to
 */
void _itob(int n, char *s, int b)
{
	int i = 0, sign = n;

	if (n < 0)
		n = -n;

	switch (b) /* check base number */
	{
	/* accepted base */
	case 2:
	case 8:
	case 10:
	case 16:
		do {
			s[i++] = (n % b > 9) ? 'A' + (n % b - 10) : (n % b + '0');
		} while ((n /= b) > 0);

		if (sign < 0)
		{
			s[i++] = '-';
		}
		s[i] = '\0';
		_reverse(s); /* get the correct representation */
		break;

	default:
		fprintf(stderr, "Invalid base number!\n");
		return;
	}
}
