#include <stdio.h>
#include <string.h>

char *reverse(char *s);

/**
 * main - driver code to test string reversal
 *
 * Return: 0
 */
int main(void)
{
	char s[] = "!skrow edoc eht nehw yoj syawla si tI";

	printf("%s\n", rev_str(s));
	return (0);
}

/**
 * reverse - reverse a string in place
 * @s: string
 *
 * Write a recursive version of the function reverse(s),
 * which reverses the string @s in place.
 *
 * Return: pointer to reversed string @s
 */
char *reverse(char *s)
{
	int len = strlen(s);
	char tmp1, tmp2;

	if (len <= 1)
		return (s);

	tmp1 = s[0];
	tmp2 = s[len - 1];
	s[len - 1] = '\0';
	rev_str(s + 1);
	/* swap values */
	s[0] = tmp2;
	s[len - 1] = tmp1;

	return (s);
}
