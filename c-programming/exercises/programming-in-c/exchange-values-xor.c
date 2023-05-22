#include <stdio.h>

/**
 * main - using the bitwise XOR operator to exchange values in without the need
 * for extra memory location
 *
 * Return: 0
*/
int main(void)
{
	unsigned short i1 = 057;
	unsigned short i2 = 077;

	printf("Original values: i1 = 0%o, i2 = 0%o\n", i1, i2);
	/*create mask or sort-of temporary value*/
	i1 ^= i2;
	/**
	 * Here's what will happen in the code above
	 *     000 101 111
	 * XOR 000 111 111
	 *     ------------
	 *     000 010 000 -> 020
	*/
	printf("Temp Value: i1 is 0%o, i2 is 0%o\n", i1, i2);

	/*exchange i2 with the initial value of i1, i.e. 057*/
	i2 ^= i1; /*Note: the current value of i1 is 020*/
	/**
	 * i2 = 077, i1 = 020
	 *     000 111 111
	 * XOR 000 010 000
	 *     -----------
	 *     000 101 111 -> 057 (initial value of i1)
	 *
	 * Now i2 has exchanged it value for the initial value of i1
	*/
	printf("Exchange i2 for i1's initial value: i1 is 0%o, i2 is 0%o\n", i1, i2);

	/*exchange i1 with the initial value of i2, i.e. 077*/
	i1 ^= i2; /*Note: the current value of i2 is 057 and i1 is still 020*/
	/**
	 * i1 = 020, i2 = 057
	 *     000 010 000
	 * XOR 000 101 111
	 *     -----------
	 *     000 111 111 -> 077 (initial value of i2)
	*/
	printf("Exchange i1 for i2's initial value: i1 is 0%o, i2 is 0%o\n", i1, i2);

	return (0);
}
