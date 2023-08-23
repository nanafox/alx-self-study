#include <unistd.h>
#include "nums_lib.h"
#include "../strings/string_io.h"
/**
 * _itob - convert integer @n to the specified base in @b and stores the result
 * as a string in @s
 *
 * @n: number
 * @s: where to store result (string)
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

		if (sign)
			s[i++] = '-';

		_reverse(s, i); /* get the correct representation */
		s[i] = '\0';
		break;

	default:
		write(2, "Invalid base number!\n", 22);
		return;
	}
}
