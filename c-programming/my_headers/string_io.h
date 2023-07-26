#ifndef __STRING_IO_H__
#define __STRING_IO_H__

#include <string.h>
#include <stdio.h>

/**
 * _fgets - fgets wrapper to remove newline character
 * @str: string
 * @len: size of string
 *
 * Return: void. Exits on error.
 */
void _fgets(char *str, int len)
{
	if (fgets(str, len, stdin) == NULL)
		return;
	str[strcspn(str, "\n")] = '\0';
}

#endif
