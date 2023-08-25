#include "../include/io_handlers.h"
#include "../include/type_conversion.h"
#include <stdarg.h>

/**
 * _printf - my minimalistic implementation of the printf() function
 *
 * @format: string format
 *
 * Return: number of printed characters
 */
int _printf(char *format, ...)
{
	char register *c;
	va_list args;
	int len = 0;

	va_start(args, format);
	for (c = format; *c != '\0'; c++)
	{
		if (*c == '%')
		{
			++c;
			switch (*c)
			{
			case '%':
				len += _putchar('%');
				break;
			case 'c':
				char ch = va_arg(args, long long);

				len += _putchar(ch);
				break;
			case 's':
				char *str = va_arg(args, char *);

				len += _putstr(str);
				break;
			case 'd':
			case 'i':
				long long d = va_arg(args, long long);
				char s[32];

				_itob(d, s, 10);
				len += _putstr(s);
				break;
			case 'x':
			case 'X':
				long long x = va_arg(args, long long);
				char hex[32];

				_itob(x, hex, 16);
				len += _putstr(hex);
				break;
			case 'b': /* binary format mark */
				long long bin = va_arg(args, long long);
				char binary[32];

				_itob(bin, binary, 2);
				len += _putstr(binary);
				break;
			case 'f':
				double n = va_arg(args, double);
				char f[32];

				_ftoa(n, f);
				len += _putstr(f);
				break;
			}
		}
		else
			len += _putchar(*c);

		va_end(args);
	}

	return (len);
}
