#include <stdio.h>

/**
 * enum con - numbers
 *
 * @MIN_NUM: minimum number
 * @MAX_NUM: maximum number
*/
enum con
{
	MIN_NUM = 0,
	MAX_NUM = 100
};

int add_recursive(int n);

/**
 * main - solution to exercise 3. (Hour 18)
 *
 * Return: 0
*/
int main(void)
{
	int i, sum_iter, sum_recursive;

	sum_iter = sum_recursive = 0;

	/*iterative sum*/
	for (i = MAX_NUM; i != MIN_NUM; i--)
		sum_iter += i;
	printf("The value of sum_iter is %d\n", sum_iter);

	/*get recursive sum*/
	sum_recursive = add_recursive(MIN_NUM);
	printf("The value of sum_recursive is %d\n", sum_recursive);

	return (0);
}

/**
 * add_recursive - recursive sum
 *
 * @n: number
 * Return: recursive sum
*/
int add_recursive(int n)
{
	if (n == MAX_NUM)
		return (MAX_NUM);
	return (add_recursive(n + 1) + n);
}
