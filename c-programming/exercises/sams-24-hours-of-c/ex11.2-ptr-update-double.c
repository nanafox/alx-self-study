#include <stdio.h>

/**
 * main - a program to update the value of a double using a pointer.
 *
 * Return: 0
*/
int main(void)
{
	double flt_num = 123.45;
	double *ptr_flt_num = &flt_num;

	printf("Inital value of flt_num: %.2f\n", flt_num);
	/*update initial value through pointer*/
	*ptr_flt_num = 543.21;

	printf("Updated through ptr_flt_num: %.2f\n", *ptr_flt_num);

	return (0);
}

