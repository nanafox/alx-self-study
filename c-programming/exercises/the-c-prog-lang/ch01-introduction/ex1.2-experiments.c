#include <stdio.h>

/**
 * main - experimenting with unknown escape sequence
 *
 * Return: 0
 */
int main(void)
{
	printf("hello, world\c"); /* an error occurs here because \c is unknown */

	return (0);
}
