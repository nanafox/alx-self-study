#include <stdio.h>

/**
 * main - print characters until null character is encountered
 *
 * Return: 0
*/
int main(void)
{
	char message[20] = {'H', 'e', 'l', 'l', 'o', '\0',
		'W', 'o', 'r', 'l', 'd', '!', '\0'};

	printf("%s\n", message); /*print only Hello*/

	return (0);
}
