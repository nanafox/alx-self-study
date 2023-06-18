#include <stdio.h>
#include <stdarg.h>

void calc_triangular_num(int seq, ...);

/**
 * main - variadic functions
 *
 * Return: 0
 */
int main(void)
{
	int count = 5;

	calc_triangular_num(count, 10, 20, 50, 30, 6);

	return (0);
}

/**
 * calc_triangular_num - Calculate Triangular Numbers
 *
 * @seq: sequence
 */
void calc_triangular_num(int seq, ...)
{
	int values[seq];
	int totals[seq];

	register int i, j;
	va_list nums;

	/*
	 * this might not be the best use case but I just
	 * wanted to use variadic functions to store the
	 * values received inside an array which will later
	 * be used to do the calculation. I tried to do the
	 * calculation right from the variadic side but it
	 * wouldn't work so I had to use a different method for
	 * the actual calculation. Now I am concerned about if
	 * the program would scale well when more arguments are
	 * passed to it. But for now, this is okay.
	 */
	va_start(nums, seq);
	for (i = 0; i < seq; i++)
		values[i] = va_arg(nums, int);
	va_end(nums);

	/*perform calculation for triangular numbers*/
	for (i = 0; i <= seq; i++)
		for (j = 1; j <= values[i]; j++)
			totals[i] += j;

	/*print the results for each value*/
	for (i = 0; i < seq; i++)
		printf("The triangular number of %d is %d.\n", values[i], totals[i]);
}
