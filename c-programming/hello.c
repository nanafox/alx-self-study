#include <stdio.h> /*preprocessor*/
/*
 * The Preprocessor#include -> direvative. Causes the C preprocessor to find
 * and include extra files here stdio.h -> library (Standard Input Output) < >
 * (Angle brackets) -> asks the preprocessor to look for header files other
 * than the current directory " " (Double Quotes) -> Tells the preprocessor
 * to look in the current directory first before checking elsewhere.
 * E.g. #include "myOwnLibrary.h"
 */

/**
 * main - testing assembly
 *
 * Return: 0
 */
int main(void)
{
	/*prints Hello World to the console*/
	printf("Hello Everyone!\n");

	/*terminates the code returns the values of zero (Success)*/
	return (0);
}
