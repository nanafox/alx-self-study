#include <stdio.h>

void say_hello(char *to);

/**
 * main - Code starts here
 * Return: 0 on success
 */
int main(void)
{
	say_hello("Maxwell!");

	return (0);
}

/**
 * say_hello - Want to say to someone? Here's your one stop
 *
 * @to: The name of the person to shout out to
 */
void say_hello(char *to)
{
	printf("Hello, %s!\n", to);
}
