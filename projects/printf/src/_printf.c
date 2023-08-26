#include "../include/io_handlers.h"
#include "../include/type_conversion.h"
#include <stdarg.h>
#define BIN 2
#define OCT 8
#define DEC 10
#define HEX 16
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
	char s[32], ch, *str;
	long long n;
	double f;
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
				ch = va_arg(args, int);
				len += _putchar(ch);
				break;
			case 's':
				str = va_arg(args, char *);
				len += _putstr(str);
				break;
			case 'd': case 'i':
				n = va_arg(args, long long);
				_itob(n, s, DEC);
				len += _putstr(s);
				break;
			case 'x': case 'X':
				n = va_arg(args, long long);
				_itob(n, s, HEX);
				len += _putstr(s);
				break;
			case 'o': case 'O':
				n = va_arg(args, long long);
				_itob(n, s, OCT);
				len += _putstr(s);
				break;
			case 'b': /* binary format mark */
				n = va_arg(args, long long);
				_itob(n, s, BIN);
				len += _putstr(s);
				break;
			case 'f':
				f = va_arg(args, double);
				_ftoa(f, s);
				len += _putstr(s);
				break;
			case 'p': /* address */
				n = va_arg(args, long long);
				_itob(n, s, HEX);
				len += _putstr(s);
			}
		}
		else
			len += _putchar(*c);
	}
	va_end(args);
	return (len);
}
