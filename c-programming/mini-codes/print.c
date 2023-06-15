#include <stdarg.h>
#include "print.h"
#include <stdio.h>

/**
 * print - my version of printf
 *
 * Notes: This was a quick run-through. Will definitely learn more
 * and make it better.
*/
void print(char *format, ...)
{
	register char *ch;

	va_list arg;
	va_start (arg, format);

	for (ch = format; *ch != '\0'; ch++)
	{
		if (*ch != '%')
			putchar(*ch);
	}
	putchar('\n');

	va_end(arg);
}
