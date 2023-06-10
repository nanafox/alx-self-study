#include <stdio.h>
#include <stdlib.h>

/**
 * main - simple multiplication table generator
 * @argc: Contains the number of CLI arguments
 * @argv: And array of integers. Receives up to three arguments.
 *
 * Description: The first argument is the base, the left-most part of
 * the multiplication table.
 * The second argument, which optional, modifies the length each row of
 * the table. Dfault is 10.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/*ensure at least two arguments are received, maximum is 3.*/
	if (!(argc >= 2 || argc == 3))
	{
		printf("Usage: ./multiplication-table base_num [row_len]\n");
		return (1);
	}

	int num, len;

	num = atoi(argv[1]); /*base numbers (columns)*/

	/*receive the length of each row for the multiplication table*/
	if (argv[2])
		len = atoi(argv[2]);
	else
		len = 10; /*default value*/

	/*set the multiplier value and increment as you go*/
	int multiplier = 1;

	/*Takes care of the individual numbers. (what I call base numbers)*/
	for (int i = 0; i < num; i++)
	{
		/*uses the multiplier to get the product -> base_number * multiplier*/
		for (int j = 1; j <= len; j++)
			printf("%5d ", j * multiplier); /*print with widths*/
		multiplier++;
		/*add a newline after every table row*/
		printf("\n");
	}

	return (0);
}
