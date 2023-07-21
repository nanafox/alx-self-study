#include <stdio.h>

add_two(int *, int *);

main(void)
{
	puts("Hello, world!\n");

	int a = 10, *ptr_a = &a;
	int b = 20, *ptr_b = &b;
	
	int sum = add_two(ptr_a, ptr_b);

	printf("Sum of %d and %d is %d\n", a, b, sum);
	return (0);
}

add_two(int *x, int *y)
{
	return (*x + *y);
}
