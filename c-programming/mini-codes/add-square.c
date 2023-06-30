#include <stdio.h>

int add_squares(int num);
int add_squares_iterative(int num);

int main(void)
{
	int n = 5;

	puts("Recursive");
	printf("Total: %d\n", add_squares(n));

	// puts("\nIterative");
	// printf("Total: %d\n", add_squares_iterative(n));
}

int add_squares(int num)
{
	int total = 1;

	if (num == 1)
	{
		printf("square of %2d is %3d\n", num, total);
		return (total);
	}
	total = num * num;
	printf("square of %2d is %3d\n", num, total);

	return (total + add_squares(--num));
}

int add_squares_iterative(int num)
{
	int total = 0, i;

	for (i = 1; i <= num; i++)
	{
		total += i * i;
		printf("square of %2d is %3d\n", i, (i * i));
	}

	return (total);
}
