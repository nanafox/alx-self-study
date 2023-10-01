#include <stdio.h>

/**
 * main - dereferencing pointers
 *
 * Return: 0
 */
int main(void)
{
	int num;
	int *ptr_to_num;

	num = 67;
	ptr_to_num = &num; /* store the address of the num variable */

	/* dereferencing */
	printf("Value of num: %d\n", num);
	printf("Value of *ptr_to_num: %d\n", *ptr_to_num);

	/* modifying memory location with pointers */
	*ptr_to_num = 32;

	printf("Value of num: %d\n", num);
	printf("Value of *ptr_to_num: %d\n", *ptr_to_num);

	return (0);
}
