/**
 * len - check the number of characters in a string
 *
 * Description: Counts the number of characters in a
  * given string and returns the value.
  * Similar to the strlen() function in C, but better.
 *
 * @string: the string to check length of.
 *
 * Return: the length of string
*/
unsigned long long len(const char *string)
{
	unsigned long long size = 0;

	for (int i = 0; string[i] != '\0'; i++)
		size++;

	return (size);
}

