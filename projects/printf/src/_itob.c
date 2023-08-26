#include "../include/io_handlers.h"
#include <unistd.h>

/**
 * _itob - convert integer @n to the specified base in @b and stores the result
 * as a string in @s
 *
 * @n: number
 * @s: where to store result (string)
 * @b: base to convert @n to
 */
void _itob(long long n, char *s, int b)
{
	int i = 0;
	long long sign = n;

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
			s[i++] = (n % b > 9) ? 'a' + (n % b - 10) : (n % b + '0');
		} while ((n /= b) > 0);

		if (b == 16)
		{
			s[i++] = 'x';
			s[i++] = '0';
		}
		if (sign < 0)
			s[i++] = '-';
		_reverse(s, i); /* get the correct representation */
		s[i] = '\0';
		break;

	default:
		write(2, "Invalid base number!\n", 22);
		return;
	}
}
