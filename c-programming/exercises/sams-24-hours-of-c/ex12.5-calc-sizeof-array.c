#include <stdio.h>

/**
 * main - calculating the size of array (2 methods)
 *
 * Return: 0
*/
int main(void)
{
	double list_data[6] = {
		1.12345,
		2.12345,
		3.12345,
		4.12345,
		5.12345};

	/*method 1 - data type multiplied by the size of array*/
	int method_1 = sizeof(double) * 6;

	/*method 2 - using the sizeof function on the array name*/
	int method_2 = sizeof(list_data);

	printf("The size of list_data is (method 1): %d bytes\n", method_1);
	printf("The size of list_data is (method 2): %d bytes\n", method_2);

	return (0);
}
