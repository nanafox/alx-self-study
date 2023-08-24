#include <unistd.h>

/**
 * _putchar - my version of putchar
 *
 * @c: character
 *
 * Return: 1
 */
int _putchar(char c)
{
	write(1, &c, 1);

	return (1);
}

