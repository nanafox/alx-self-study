#include <stdio.h>

int any(const char *s1, const char *s2);

/**
 * main - Exercise 2-5
 *
 * Task: Write the function any(s1, s2), which returns the first location
 * in the string s1 where any character from the string s2 occurs, or -1 if s1
 * contains no characters from s2. (The standard library function strpbrk does
 * the same job but returns a pointer to the location.)
 *
 * Return: 0
 */
int main(void)
{
	char s1[][10] = {"Hello", "Hey", "Cloud"};
	char s2[][10] = {"World", "World", "Could"};

	for (int i = 0; i < 3; i++)
	{
		int loc = any(s1[i], s2[i]);

		printf("(s1): %s\n", s1[i]);
		printf("(s2): %s\n", s2[i]);
		if (loc >= 0)
			printf("The first occurrence is index: %d. Letter: %c\n",
					loc, s1[i][loc]);
		else
			puts("s1 and s2 share no similar characters");
	}
	return (0);
}

/**
 * any - returns the index of the first occurrence of a character from one
 * string compared to the other.
 *
 * @s1: string to compare - sort of the needle
 * @s2: the compared string - haystack
 *
 * Return: index where s1 occurs in s2, else -1
 */
int any(const char *s1, const char *s2)
{
	for (int i = 0; s1[i] != '\0'; i++)
		for (int j = 0; s2[j] != '\0'; j++)
			if (s1[i] == s2[j]) /* is there a match? */
				return (i);
	return (-1);
}
