#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

/**
 * main - Ex1 - Write a program to compute the nth number of fibonacci series.
 *
 * Return: 0
 */
int main(void)
{
	int size;

	printf("Range of numbers: ");
	scanf("%d", &size);

	int *nums = malloc(sizeof(int) * size);

	if (nums == NULL)
	{
		fprintf(stderr, "Memory allocation failed!");
		return (-1);
	}
	/*generate numbers*/
    for (int i = 0; i < size; i++)
		nums[i] = i + 1;
    /*get fibonacci series*/
    for (int i = 0; i < size; i++)
		printf("Fibonacci of %d = %d\n", nums[i], fibonacci(nums[i]));

	free(nums);
	return (0);
}

/**
 * fibonacci - generate fibonacci series for nth number
 *
 * @n: nth number
 *
 * Return: fibonacci of n
 */
int fibonacci(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (fibonacci(n - 1) + fibonacci(n - 2));
}
