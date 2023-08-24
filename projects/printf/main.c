#include "include/io_handlers.h"

int main(void)
{
	char *s = "some string";
	char c = 'A';
	float money = -4532.121;
	float cash = 5003.3;
	int point = 5;
	int a = _printf("Hello world!\n");

	_printf("%s\n", s);	
	_printf("%f\n", cash);
	_printf("%d\n", a);
	_printf("'%c'[%d] in binary: %b\n", c, c, c);
	_printf("Printing all together.\n%c, %s, %f, %d\n", c, s, money, point);
	_printf("I have a %s feeling, this is was an %s project!\n", "strong", "amazing");

	return (0);
}
