#include <stdio.h>

/**
 * main - displays pointer values
 *
 * Return: 0
 */
int main(void)
{
	int num;
	int *ptr_to_num;

	num = 67;
	ptr_to_num = &num; /* store the address of the num variable */

	printf("num:\n\tAddress: %p\n\tValue: %d\n", &num, num);
	printf("ptr_to_num:\n\tAddress: %p\n\tValue: %p\n",
			&ptr_to_num, ptr_to_num);

	return (0);
}
