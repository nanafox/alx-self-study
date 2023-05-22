#include <stdio.h>

/**
 * main - Even and odd number checker, using bitwise operators
 *
 * Return: 0
*/
int main(void)
{
	int num;

	scanf("%d", &num);

	/**
	  * Odd numbers have their rightmost bit set, while even number don't
	  *
	  * for example, when num = 3, it's binary representation is
	  * 0011. -> the rightmost bit is set.
	  *
	  * But when num 4, binary is 0100. The rightmost bit is not set.
	  *
	  * More examples:
		* num = 7  ->  0111
		* num = 6  ->  0110
		* num = 9  ->  1001
		* num = 10 ->  1010
	*/
	(num & 1) ? printf("%d is odd\n", num) : printf("%d is even\n", num);

	return (0);
}
