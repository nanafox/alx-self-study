#include <stdio.h>

/**
 * main - ratings counter. Limited to 20 ratings.
 *
 * Return: 0
*/

int main(void)
{
	int ratings_counter[11];
	int rating,total_ratings = 20;

	/*initialize all ratings to zero by default*/
	for (int i = 1; i <= 10; ++i)
		ratings_counter[i] = 0;

	/*receive ratings. simple checks are implemented*/
	puts("How would you rate: Zack Snyder's Justice League?");
	for (int i = 0, pos = 0; i < total_ratings; ++i)
	{
		scanf("%d", &rating);
		/*ensure rating is within accepted value*/
		if (rating < 0 || rating > 10)
			puts("Error: Unaccepted rating");
		else
			++ratings_counter[rating]; /*increment the rating value*/
	}

	/*printing the ratings received so far*/
	printf("\nRating\tCount\n");
	printf("------\t-------\n");
	for (int i = 1; i <= 10; i++)
		printf("%4d%7d\n", i, ratings_counter[i]);

	return (0);
}
