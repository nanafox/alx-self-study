#include <stdio.h>

int main(void)
{
	char c[] = "Hello!";
	const char x[] = "Hello?";

	puts(c);
	puts(x);

	c[5] = '?';
	x[5] = '!';

	puts(c);
	puts(x);
}
