#include <stdio.h>
#include "ex18.2-size-of-typedefs.h"

/**
 * main - solution to exercise 2.
 * Checking the size of typedef'd data types
 *
 * Return: 0
*/
int main(void)
{
	printf("size of WORD: %3lu\n", sizeof(WORD));
	printf("size of SHORT: %2lu\n", sizeof(SHORT));
	printf("size of LONG: %3lu\n", sizeof(LONG));
	printf("size of FLOAT: %2lu\n", sizeof(FLOAT));
	printf("size of DFLOAT: %lu\n", sizeof(DFLOAT));

	return (0);
}
