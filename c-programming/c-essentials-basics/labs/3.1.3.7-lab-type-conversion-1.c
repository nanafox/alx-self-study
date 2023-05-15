#include <stdio.h>

/*
 * Task:
 *    Write a program that takes one floating-point number, converts it to an
 *    integer number, and then prints a description of the given number.
 *    Descriptions for numbers:
 *
 *        numbers greater than or equal to 1 and less than 2 - Very bad.
 *        numbers greater than or equal to 2 and less than 3 - Bad.
 *        numbers greater than or equal to 3 and less than 4 - Neutral.
 *        numbers greater than or equal to 4 and less than 5 - Good.
 *        numbers greater than or equal to 5 and less than 6 - Very good.
 *
 *    When a number is out of the given range (1<=x<6),
 *    the program should print nothing.
 *
 */

/**
 * main - Check the result for students
 * Return: 0 on success
 */
int main(void)
{
	float num;

	scanf("%f", &num);

	int convert_num = num; /*type conversion from float to int*/

	if (num == 1)
	{
		puts("Very bad.");
	}
	else if (num == 2)
	{
		puts("Bad");
	}
	else if (num == 3)
	{
		puts("Neutral");
	}
	else if (num == 4)
	{
		puts("Good");
	}
	else if (num == 5)
	{
		puts("Very good");
	}
	return (0);
}

/*
 * Algorithm
 *
 *    1. read number
 *    2. convert to integer using explicit type conversion
 *    3. use the if... else if... and else... statements for flow control
 *    3.1 Per the requirements, it's actually just testing for equality.
 *        I believe the requirement just contains fluff about it being
 *        greater than "x" * and less than "y"
 *    4. print description based on requirements.
 *
 *    Side note:
 *        Had thoughts on using the switch()... case:... for flow control.
 *        Here's why I didn't use it.
 *
 *        1. I just wanted didn't to write more lines of code.
 *        2. It makes it easier to improve the code later when requirement
 *           change and an actual range is required.
 *            - That way, you just modify the logic of your
 *              conditional statements
 */
