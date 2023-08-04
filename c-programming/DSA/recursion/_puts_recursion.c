#include <unistd.h>

void _putchar(char c);
void _puts_recursion(char *s);

/**
 * main - recursive character printing
 *
 * Return: 0
 */
int main(void)
{
	char message[] = "Hello, world!";

	_puts_recursion(message);

	return (0);
}

/**
 * _putchar - write a character to the standard output
 *
 * @c: char
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * _puts_recursion - print string
 *
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s); /* get next character */
	}
}
