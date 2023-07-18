#include <stdio.h>

/**
 * main - bitwise operations
 * Return: 0
*/

int main(void)
{
	int x = 10; /*00001010*/
	int y = 8;  /*00001000*/
	int z = 0;  /*00000000*/

	/*using the & operator*/
	z = x & y; /*00001000 -> Expecting 8*/
	printf("ANDing: x & y = %d\n", z);

	z = x | y; /*00001010 -> Expecting 10*/
	printf("OR: x | y = %d\n", z);
	
    return (0);
}
