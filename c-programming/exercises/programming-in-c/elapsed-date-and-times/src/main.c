#include "../headers/date_and_times.h"
#include <stdio.h>

/**
 * main - solution to Exercise 2 of Chapter 9: Working with Structures
 *
 * Notes: I used my own calculation slash/formula. The one used in the book
 * didn't result in the right answer. This goes a long way to show that
 * you should always check your results and compare them manually.
 *
 * In the elapsed_days() function, I did something nifty. I used the days left
 * in the current date (start_date) I received and the current day of the next
 * date (end_date). I then added both to the get the interval between the two
 * dates. It worked perfectly and I confirmed it manually as well, also I used
 * an online resource to confirm my answer.
 * Here's the site: https://www.timeanddate.com/date/weekday.html
 *
 * Return: 0
 */
int main(void)
{
	date n[] = {{8, 8, 2004}, {22, 2, 2005}, {34, 2, 2020}};
	for (int i = 0; i < 3; i++)
		printf("Day of year: %d. Days remaining: %d\n", get_day_of_year(n[i]),
			   days_left(n[i]));

	printf("Day elapsed between %02d-%02d-%d and %02d-%02d-%d: %d\n", n[0].day,
		   n[0].month, n[0].year, n[1].day, n[1].month, n[1].year,
		   elapsed_days(n[0], n[1]));

	return (0);
}
