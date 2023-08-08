#include <stdio.h>

void count(void);
int up_to_5;

/**
 * main - indirect recursion
 *
 * Return: 0
 */
int main(void)
{
	if (up_to_5 == 5)
	{
		putchar('\n');
		return (0);
	}
	count();
}

/**
 * count - count to n
 */
void count(void)
{
	up_to_5++;
	printf("%d ", up_to_5);
	main();
}

