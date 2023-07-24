%:include <stdio.h>
%:include <stdlib.h>

void multiples_of_2(int n);

/**
 * main - using digraphs
 *
 * Return: 0
 *
 * Symbol 	meanings
 *   <%			{
 *   %>			}
 *   %:			#
 *   <:			[
 *   :>			]
 */
int main(void) <%
	printf("Hello world!\n");
	
	/* get multiples of 2 */
	multiples_of_2(10);

	return (0);
%>

/**
 * mutiples_of_2 - exactly what the name says
 *
 * @n: number of elements to print
 */
void multiples_of_2(int n) <%
	int *nums = malloc(sizeof(int) * n);

	for (int i = 0; i < 10; i++)
		nums<:i:> = (i + 1) * 2;
	
	for (int i = 0; i < 10; i++)
		printf("%d ", nums<:i:>);
	putchar('\n');

	free(nums);
%>
