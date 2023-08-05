#include <stdio.h>

/**
 * main - Exercise 2-2
 *
 * The for loop:
 * for (i=O; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
 *     s(i] = c;
 *
 * Exercise 2-2. Write a loop equivalent to the for loop above without
 * using && or ||
 *
 * Return: 0
 */
int main(void)
{
	int i, c, lim = 100;
	int s[lim];

	for (i = 0; i < lim - 1; i++)
	{
		c = getchar();
		if (c == '\n')
			break;
		if (c == EOF)
			break;

		s[i] = c; /* append text */
	}
	s[i] = '\0';

	printf("%ls\n", s);

	return (0);
}
