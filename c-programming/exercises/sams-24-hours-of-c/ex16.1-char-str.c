#include <stdio.h>

void print(char *str);

/**
 * main - character arrays
 *
 * Return: 0
 */
int main(void)
{
	char message[] = "I like C!";

	print(message);

	/*update - solution exercise 2*/
	char *ptr_msg = message;
	*(ptr_msg + 3) = 'o'; /*change `i` to `o`*/
	*(ptr_msg + 4) = 'v'; /*change `k` to `v`*/

	print(message); /*updated message*/
}

/**
 * print - write output to stdout
 *
 * @str: text to print
 */
void print(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');
}
