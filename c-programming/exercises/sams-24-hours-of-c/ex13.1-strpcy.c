#include <stdio.h>

char str_cpy(char const *src, char *copied_str);

/**
 * main - copy a string. Solution to Excercise 1 (Hour 13)
 *
 * Return: 0
*/
int main(void)
{
	char str1[] = "This is Exercise 1.";
	char str2[50];

	/*invoke string copying function*/
	str_cpy(str1, str2);

	printf("Original string: %s\nAddress: %p\n\n", str1, &str1);
	printf("Duplicate string: %s\nAddress: %p\n", str2, &str2);
}

/**
 * str_cpy - string copy
 *
 * @src_str: string to copy
 * @copied_str: where to copy the string
 *
 * Description: Copies the contents of a string (source)
 * to another location (destination)
 *
 * Return: copied_str.
*/
char str_cpy(char const *src_str, char *copied_str)
{
	int i;

	for (i = 0; src_str[i]; i++)
		copied_str[i] = src_str[i];
	copied_str[i] = '\0';

	return (*copied_str);
}

