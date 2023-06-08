#include <stdio.h>

/**
 * main - printing characters until null character
 *
 * Return: 0
*/
int main(void)
{
	char message[] = {'I', ' ',
		'l', 'i', 'k', 'e', ' ',
		'C', '!', '\0'
	};

	for (int i = 0; message[i]; i++)
		putchar(message[i]);
	putchar('\n');

	return (0);
}

