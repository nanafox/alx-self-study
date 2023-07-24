#include <stdio.h>
#include <stdlib.h>

_Noreturn void end(char *text, int exit_code);

/**
 * main - using the _Noreturn function specifier
 *
 * Return: 0
 */
int main(void)
{
	puts("Before calling _Noreturn function");
	end("In the _Noreturn function", 3);
	puts("After the _Noreturn function"); /* never gets printed */
	
	return (0); /* this line is never reached */
}

_Noreturn void end(char *text, int exit_code)
{
	puts(text);
	exit(exit_code); /*handle the exits*/
}
