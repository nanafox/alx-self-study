#include "main.h"

/*The lower and upper case letters are 32 numbers apart.*/
#define low_upper_interval 32

/**
 * to_lower - Converts upper case to lower case
 * @letter: The letter you are testing
 *
 * Note: The lower and upper case letters are 32 numbers apart.
 * Author: theLazyProgrammer^_^
 *
 * Return: lowercase version of letter. i.e. letter + 32
 */
char to_lower(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return (letter + low_upper_interval);

	return (letter);
}

/**
 * is_lower - my version of ctype()'s islower() function.
 *
 * @string: string to check
 *
 * Return: 1 if lower case, else 0. On error (empty string or NULL),
 * -1 is return
 */
int is_lower(char *string)
{
	int i;

	if (string == NULL || *string == '\0')
		return (-1);

	for (i = 0; string[i] != '\0'; i++)
	{
		if ((string[i] >= 'a' && string[i] <= 'z') || string[i] == ' ')
			continue;
		else
			return (0);
	}
	return (1);
}

/**
 * to_upper - Coverts lower case to upper case
 * @letter: The letter you are testing
 *
 * Return: uppercase version of letter. i.e. letter - 32
 */
char to_upper(char letter)
{
	if (letter >= 'a' && letter <= 'z')
		return (letter - low_upper_interval);

	return (letter);
}

/**
 * to_title - Convert string to Title Case
 * @string: text to convert
 *
 * Return: title case string.
*/
char *to_title(char *string)
{
	char *dup_str = strdup(string);
	int i;

	for (i = 0; dup_str[i] != '\0'; i++)
	{
		if (i == 0)
			/*capitalize the first letter in the string*/
			dup_str[i] = to_upper(dup_str[i]);

		else if (dup_str[i - 1] == ' ')
			/*change letter to upper case after each space*/
			dup_str[i] = to_upper(dup_str[i]);

		else
			/*lower all other characters*/
			dup_str[i] = to_lower(dup_str[i]);
	}

	return (dup_str);
}

/**
 * add - returns the sum of two numbers
 * @x: first number
 * @y: second number
 *
 * Return: the sum of x and y
 */
int add(int x, int y)
{
	return (x + y);
}
