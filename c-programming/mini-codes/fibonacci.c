#include <stdio.h>

/**
 * main - a program that generates fibonnaci numbers
 *
 * Return: 0
*/
int main(void)
{
	int n = 15; /*size of the array*/
	int fibonnaci[n]; /*an array to hold the elements*/

	/*f0 and f1 elements - required*/
	fibonnaci[0] = 0;
	fibonnaci[1] = 1;

	for (int i = 2; i < n; ++i)
		/*
		* each element is obtained by adding the two preceding
		* elements in the sequence.
		*/
		fibonnaci[i] = fibonnaci[i - 1] + fibonnaci[i - 2];

	/*print the values on the same line*/
	for (int i = 0; i < n; ++i)
		printf("%d ", fibonnaci[i]);

	putchar('\n');

	return (0);
}

/*
 * Observations
 *
 * You can't initialize an array with a size stored in another variable
 * at runtime. It must be done at compile-time.
 * You have to first declare the array, then manually add the elements.
 *
 * The code below is invalid
 *		int n = 3;
 *		int my_grades[n] = {10, 16, 24};
 *
 * If this behavior is what you want to achieve, the you'd have to use
 * a fixed maximum number. e.g. #define MAX_SIZE 15
 * Or you could just use a constant if you want to be able to initialize
 * the array with a size on the same line.
 *
 * There are other methods to go around this such as,
 * 		- allocating memory dynamically using pointers or
 * 		- choose a fixed maximum size for the array
*/
