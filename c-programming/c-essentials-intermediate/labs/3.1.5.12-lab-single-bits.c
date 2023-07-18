#include <stdio.h>

/**
 * main - start here
 *
 * Breaks a number into nibbles and prints the corresponding
 * decimal value at that position.
 *
 * Return: 0
 */
int main(void)
{
	int num, low_nibble, high_nibble;

	do {
		printf("Enter a number: ");
		scanf("%d", &num);
	} while (num > 256);

	/* perform ANDing on lower nibble */
	low_nibble = num & 15; /*00001111*/
	/* shift right, then perform ANDing */
	high_nibble = (num >> 4) & 15;

	/*print nibbles*/
	printf("High nibble: %d\n", high_nibble);
	printf("Low nibble: %d\n", low_nibble);
	printf("Hex Value: %X%X\n", high_nibble, low_nibble);

	return (0);
}
