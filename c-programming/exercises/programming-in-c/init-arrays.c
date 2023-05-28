#include <stdio.h>

/**
 * main - Hanging out with arrays
 *
 * Return: 0;
*/
int main(void)
{
	/*assigning values at array initialization*/
	int grades[] = {45, 23, 12};

	/*a different way to assign values in arrays at initialization*/
	int assign_values[4] = {[3] = 54, [1] = 12, [3] = 4, [2] = 89};

	/*
	  * End result
	  *
	  * assign_value = [12, 89, 54, 4]
	*/

	printf("Result: %d\n", assign_values[3]); /*result: 4*/

	return (0);
}