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
	if (letter >= 65 && letter < 90)
		return (letter + low_upper_interval);
}

/**
 * to_upper - Coverts lower case to upper case
 * @letter: The letter you are testing
 *
 * Return: uppercase version of letter. i.e. letter - 32
 */
char to_upper(char letter)
{
	if (letter >= 97 && letter < 122)
		return (letter - low_upper_interval);
}

