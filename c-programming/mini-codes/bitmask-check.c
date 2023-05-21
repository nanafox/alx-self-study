#include <stdio.h>

int main(void)
{
	int the_mask, flag_register;

	the_mask = 8; 		/*00001000*/
	flag_register = 12; /*00001100*/
	printf("Original bit set: %d\n", flag_register);

	/*reset the bit*/
	flag_register &= ~the_mask; /*00000100*/
	printf("Bit unset: %8d\n", flag_register);

	/*set the bit*/
	flag_register |= the_mask; /*00001100*/
	printf("Bit set again: %5d\n", flag_register);

	/*negate the bit*/
	flag_register ^= the_mask; /*00001000*/
	printf("Negate bit: %7d\n", flag_register);
	// if (flag_register & the_mask) {
	// 	/* my bit is set */
	// }
	// else {
	// 	/* my bit is reset */

	// }
	return (0);
}