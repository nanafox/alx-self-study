#include <stdio.h>
#define DEL 127

void squeeze(char *s1, const char *s2);

/**
 * main - Exercise 2-4
 *
 * Task: Write an alternate version of squeeze ( s 1, s2) that deletes
 * each character in s 1 that matches any character in the string s2.
 *
 * Return: 0
 */
int main(void)
{
	char str1[][20] = {"I am coming!", "Hello", "Be", "Run"};
	char str2[] = "He will be coming";

	for (int i = 0; i < 4; i++)
	{
		printf("(s1) Before squeeze: %s\n", str1[i]);
		printf("(s2) Before squeeze: %s\n", str2);
		squeeze(str1[i], str2);
		printf("(s1) After squeeze: %s\n", str1[i]);
		printf("(s2) After squeeze: %s\n\n", str2);
	}
	return (0);
}

/**
 * squeeze - remove matching characters in two strings
 *
 * @s1: string to replace
 * @s2: string to compare s1 with
 */
void squeeze(char *s1, const char *s2)
{
	for (int i = 0; s1[i] != '\0'; i++) /* traverse s1 characters */
		for (int j = 0; s2[j] != '\0'; j++) /* traverse all characters in s2 */
			if (s1[i] == s2[j])
				s1[i] = DEL; /* delete match if found */
}
