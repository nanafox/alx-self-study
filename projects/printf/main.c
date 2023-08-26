#include "include/io_handlers.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - testing the _printf function
 *
 * Return: 0
 */
int main(void)
{
	char *s = "some string";
	char c = 'A';
	float money = -4532.121;
	float cash = 5003.3;
	int point = 5;
	int a = _printf("Hello world!\n");

	_printf("Length: %d\n", a);
	_printf("%s\n", s);
	_printf("%f\n", cash);
	_printf("Char: '%c'; Decimal: %d; Binary: %b; Hex: %x\n", c, c, c, c);
	_printf("Printing all together.\n%c, %s, %f, %d\n", c, s, money, point);
	_printf("I have a %s feeling, this was an %s project!\n", "strong",
			"amazing");
	_printf("This is the %% sign\n");
	_printf("Address: %p\n", s);
	return (0);
}
