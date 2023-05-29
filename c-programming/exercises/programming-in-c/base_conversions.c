#include <stdio.h>

/**
 * to_base2 - Converts a number to binary. Omits leading zeros
 *
 * @num: number to convert to base 2 numeral
*/
void to_base2(unsigned int num)
{
	int binary[32];
	int index = 0;

	while (num != 0)
	{
		binary[index] = num % 2; /*record remainder*/
		index++;
		num /= 2; /*get quotient*/
	}

	/*print result in reverse order*/
	for (--index; index >= 0; --index)
	{
		printf("%d", binary[index]);
	}
	putchar('\n');
}

/*
  * Int to Binary - Algo
  * Store the modulo (remainder) of the number / 2
  * Divide the number by 2
  * Continue till the number is zero(0)

	* Example
	* 5 % 2 = 2 rem 1
	* 2 / 2 = 1 rem 0
	* 1 / 2 = 0 rem 1
*/

/**
 * to_base16 - Converts a number to hex(base 16 numeral).
 *
 * @num: number to convert to base 16 numeral
*/
void to_base16(unsigned int num)
{
	const char base16[16] = {
		'0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
	};

	int hex[32];
	int index = 0;

	while (num != 0)
	{
		hex[index] = num % 16; /*record remainder*/
		index++;
		num /= 16; /*get quotient*/
	}

	/*print result in reverse order*/
	for (--index; index >= 0; --index)
	{
		int value = hex[index];

		printf("%c", base16[value]);
	}

	putchar('\n');
}

/**
 * to_base8 - Converts a number to base 8 numeral
 *
 * @num: number to convert to base 8
*/
void to_base8(unsigned int num)
{
	int octal[32];
	int index = 0;

	while (num != 0)
	{
		octal[index] = num % 8; /*record remainder*/
		index++;
		num /= 8; /*get quotient*/
	}

	/*print result in reverse order*/
	for (--index; index >= 0; --index)
	{
		printf("%d", octal[index]);
	}
	putchar('\n');
}
