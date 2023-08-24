#include "../include/io_handlers.h"

/**
 * _putstr - print string, but without a newline
 *
 * @s: string
 *
 * Return: length of string
 */
int _putstr(char *s)
{
	int len = 0;

	for (; *s; s++)
		len += _putchar(*s);

	return (len);
}
