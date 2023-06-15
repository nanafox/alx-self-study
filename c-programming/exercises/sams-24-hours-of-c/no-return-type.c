#include <stdio.h>

/*function prototype (declaration) without a return type*/
add_two(int *x, int *y);

/**
 * main - using functions without specifying a data type
 *
 * Return: 0
 *
 * Observation: At compile time, the compiler issues a warning and
 * defaults to using `int` as the default data type.
 *
 * And yes, the program runs just fine as well.
 */
main(void)
{
	puts("Hello world!\n");

	int a = 10;
	int b = 20;

	/*pointers*/
	int *ptr_a = &a;
	int *ptr_b = &b;

	printf("Sum of %d and %d: %d\n", *ptr_a, ptr_b,
		   add_two(ptr_a, ptr_b));

	return (0);
}

/**
 * add_two - adds two numbers
 *
 * @x: number 1
 * @y: number 2
 *
 * Return: sum of x and y
 *
 * Observation: I couldn't return the value because it required that the
 * return type is an integral value. Since the data type wasn't given, I
 * kept getting errors.
 * But I thought `int` was implicitly added?
 *
 * Okay, I asked ChatGPT and it turns out that the trick is obsolete (pre-C99).
 * In modern C (C99 and later), explicit return type is required. So I changed
 * the function prototype to `int add_two(int *x, int *y)`
 *
 * Extra update: I had a chat with Google's Bard AI and turns out it would
 * still work. All I needed to do was to change the return line.
 *
 * Previously it was `return (*x + *y)`, and that was causing errors.
 * But now that it is `return ((*x) + (*y))`, it works just fine
 *
 * Final Findings: I was wrong. After all the findings, I realized it
 * would just fine. I'm just not sure what the error was but it looks to be
 * gone now. I will try and recreate the error and see what happens.
 */
add_two(int *x, int *y)
{
	return ((*x) + (*y));
}
