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
	if (letter >= 'A' && letter < 'Z')
		return (letter + low_upper_interval);
}

/**
 * is_lower - my version of ctype()'s islower() function.
 *
 * @string: string to check
 *
 * Return: 1 if lower case, else 0.
 */
int is_lower(char *string)
{
	/*TODO*/
}

/**
 * to_upper - Coverts lower case to upper case
 * @letter: The letter you are testing
 *
 * Return: uppercase version of letter. i.e. letter - 32
 */
char to_upper(char letter)
{
	if (letter >= 'a' && letter < 'z')
		return (letter - low_upper_interval);
}

/**
 * to_title - Convert string to Title Case
 *
 * @string: text to convert
 *
 * Note: It modifies the original string's value.
 *
 * Return: title case string.
*/
char *to_title(char *string)
{
	char *dup_str = strdup(string);

	for (int i = 0; dup_str[i] != '\0'; i++)
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

int add(int x, int y)
{
	return (x + y);
}
