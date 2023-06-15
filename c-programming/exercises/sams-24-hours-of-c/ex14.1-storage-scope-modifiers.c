#include <stdio.h>

/**
 * main - storage classes, scopes and modifiers.
 *
 * Return: 0
 */
int main(void)
{
	int age = 45; /*block scope variable with temporary storage - auto*/
	const char grade = 'B'; /*a constant character with block scope*/
	static float amount = 4500.15; /*a local variable with permanent storage*/

	register int counter = 1; /*a register int variable*/
	char *p = '\0'; /*a char pointer initialized with a null character*/

	return (0);
}

