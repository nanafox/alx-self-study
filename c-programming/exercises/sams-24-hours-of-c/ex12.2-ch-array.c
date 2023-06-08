#include <stdio.h>

/**
 * main - initializing character arrays through for loop
 *
 * Return: 0
*/
int main(void)
{
	int i, l;
	char array_ch[5];

	for (i = 0, l = 'a'; l <= 'e'; i++, l++)
		array_ch[i] = l;

	for (i = 0; array_ch[i]; i++)
		printf("array_ch[%d]: %c\n", i, array_ch[i]);

	return (0);
}

