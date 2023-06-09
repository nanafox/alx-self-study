#include <stdio.h>

/**
 * main - pointers and arrays: manipulating arrays with pointers
 *
 * Description: This exercise was to test the ability to understand pointers
 * and arrays. The file starts with wrong logic and errors and required
 * careful manual code  analysis to fix the errors.
 *
 * I added the comments to guide me through the process as I understood them.
 * In the end, it is basically using pointers to manipulate arrays.
 *
 * It then prints the results from mid-points to the start and end of the
 * array.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	float numbers[10] = {3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2};
	float biggerNumbers[10];

	/*pointers to arrays*/
	float *source = numbers;
	float *copy = biggerNumbers;

	for (i = 0; i < 10; i++)
	{
		/*
		 * make a duplicate of the numbers array and store it in
		 * the biggerNumbers array
		 */
		*copy = *source;
		copy++; /*get the next value - memory address*/
		source++;
	}

	float *biggerStart = biggerNumbers; /*1st element in duplicate array (copy)*/
	float *middle1 = biggerNumbers + 4; /*5th element in array*/
	float *middle2 = middle1 + 1;		/*6th element in array*/

	/*print the elements of the biggerNumbers array in style*/
	for (; middle1 >= biggerStart; middle1--, middle2++)
	{
		printf("%.1f\n", *middle1); /*from mid-point (5th element) to start*/
		printf("%.1f\n", *middle2); /*from mid-point (6th element) to end*/
	}

	return (0);
}
