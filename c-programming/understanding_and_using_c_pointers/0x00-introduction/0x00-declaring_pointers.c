#include <stdio.h>

/**
 * main - declaring pointers
 *
 * Return: 0
 */
int main(void)
{
	int *i; /* a pointer variable to an integer */
	char *s; /* a pointer variable to a char */
	double *f; /* a pointer variable to a doulbe */

	/* const modifier */
	const int *pi; /* a pointer variable to a constant integer */

	/**
	 * The breakdown of `const int *pi`
	 *
	 * 1. pi is variable.
	 * 2. *pi is a pointer variable.
	 * 3. int *pi is a pointer variable to a integer.
	 * 4. const int *pi is a pointer variable to a contant integer.
	 */


	const char *s;

	return (0);
}
