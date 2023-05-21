#include <stdio.h>

/**
 * main - accepts user input until it's divisible by 2 and 3
 * Return: 0
*/
int main(void)
{
	int num;

	printf("Enter a number that can be divided\nby both 2 and 3:\n");
	for (num = 1; (num % 2 != 0) || (num % 3 != 0); )
		scanf("%d", &num);
	printf("You got such a number: %d\n", num);
	return (0);
}
