#include <stdio.h>
#include <stdlib.h>

int dynamic_fibonacci(int n, int *memo);

/**
 * main - dynamic programming and memoization
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
		fprintf(stderr, "Memory allocation failed!\n");
		return (1);
	}
	
	/* generate number range: O(n) */
	for (int i = 0; i < size; i++)
		nums[i] = i + 1;

	int *memo = malloc(sizeof(nums) + 1);

	if (memo == NULL)
	{
		fprintf(stderr, "Memory allocation failed!\n");
		return (1);
		free(nums);
	}
	
	/* initial value for memeoization: O(n) */
	for (int i = 0; i <= size; i++)
		memo[i] = -1;
	for (int i = 0; i < size; i++)
		printf("Fibonacci of %d = %d\n", nums[i], dynamic_fibonacci(nums[i], memo));

	free(nums);
	free(memo);

	return (0);
}

/**
 * dynamic_fibonacci - uses memoization for efficiency while generating the
 * fibonacci series.
 *
 * Time Complexity: O(n). Better than the usual version without memoization.
 *
 * Return: fibonacc of n
 */
int dynamic_fibonacci(int n, int *memo)
{
	if (n <= 1)
		return (n);
	if (memo[n] != -1)
		return (memo[n]);
	
	/* O(n) */
	memo[n] = dynamic_fibonacci(n - 1, memo) + dynamic_fibonacci(n - 2, memo);
	
	return (memo[n]);
}
