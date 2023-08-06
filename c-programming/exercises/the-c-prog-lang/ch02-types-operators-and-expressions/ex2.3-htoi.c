#include <stdio.h>

int htoi(const char *s);

/**
 * main - hex to int conversion
 *
 * @argc: args counter
 * @argv: expects 1 argument... hex num.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s hex-num\n", argv[0]);
		return (1);
	}

	printf("Hex:     %s\n", argv[1]);
	printf("Decimal: %d\n", htoi(argv[1]));

	return (0);
}
/**
 * htoi - converts a string of hexadecimal into its equivalent integer
 *
 * @s: string of hex
 *
 * Return: intger version s
 */
int htoi(const char *s)
{
	int n = 0, byte;

	/* check if 0x or 0X is present */
	if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
		s += 2; /* set starting point to first actual hex digit */

	while (*s)
	{
		byte = *s++; /* get next hex digit (nibble) */
		if (byte >= 'A' && byte <= 'F')
			byte = byte - 'A' + 10;
		else if (byte >= 'a' && byte <= 'f')
			byte = byte - 'a' + 10;
		else if (byte >= '0' && byte <= '9')
			byte = byte - '0';
		n = (n << 4) | (byte & 15); /* shift 4 bits (nibble) for next digit */
	}
	return (n);
}
