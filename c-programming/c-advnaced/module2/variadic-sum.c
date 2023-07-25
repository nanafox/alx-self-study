#include <stdio.h>
#include <stdarg.h>

void print_triang_sum(int n, ...);

int main(void)
{
	print_triang_sum(4, 1, 2, 3, 4);
	print_triang_sum(10, 1, 1, 1, 1, 1, 1, 1, 1, 1);

	return (0);
}

void print_triang_sum(int n, ...)
{
	va_list nums;
	va_start(nums, n);
	
	int triang_sum = 0;

	while (n--)
		triang_sum += va_arg(nums, int);
	va_end(nums);

	printf("Triangular sum: %d\n", triang_sum);
}
