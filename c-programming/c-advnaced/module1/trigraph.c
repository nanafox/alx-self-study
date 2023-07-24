??= include <stdio.h>

/**
 * main - using trigraphs
 *
 * Return: 0
 *
 * Symbol 	meanings
 *   ??<		{
 *   ??>		}
 *   ??=		#
 *   ??/		\
 */
int main(void) ??<
	printf("Hello world!??/n");

	return (0);
??>
