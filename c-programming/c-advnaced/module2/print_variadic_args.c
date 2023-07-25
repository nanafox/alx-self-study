#include <stdio.h>
#include <stdarg.h>

void print_args(int arg_num, ...);

/**
 * main - using variadic functions
 *
 * Return: 0
 */
int main(void)
{
	print_args(4, 1, 2, 3, 4);

	return (0);
}

/**
 * print_args - print variadic function's arguments
 *
 * @arg_num: num of elements
 */
void print_args(int arg_num, ...)
{
	va_list ap;

	va_start(ap, arg_num);

	while (arg_num--)
		printf("%d -> %d\n", arg_num, va_arg(ap, int));
	va_end(ap);

	putchar('\n');

}
