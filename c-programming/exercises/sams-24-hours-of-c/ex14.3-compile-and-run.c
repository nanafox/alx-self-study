#include <stdio.h>

/**
 * main - walking through storage classes
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		int x = 0; /*always sets value to zero on every iteration*/
		static int y; /*previous value is retained - has a default value of 0*/

		printf("x=%d, y=%d\n", x++, y++);
		/*
		 * y will go from 0 to 5, while x will be 0 throughout
		 * this is because we use the post-increment operator.
		 * if it was `++x` and `++y`, `x` would have been 1
		 * after every iteration, while `y` will go from 1 to 5.
		 *
		 * this is because of the storage class of the variables.
		 * `y` is a static (permanent storage) while `x` is temporal.
		 */
	}

	return (0);
}
