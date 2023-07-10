#include "../headers/date_and_times.h"
#include <stdio.h>
#include <stdlib.h>

void print_date_diff(void);
void print_remaining_days(void);
date get_date(date *date);

/**
 * main - solution to Exercise 2 of Chapter 9: Working with Structures
 *
 * Return: 0 on success, -1 on failure
 */
int main(void)
{
	int option;

	puts("1. Check remaining days");
	puts("2. Get difference between two dates");
	printf("\nChoice: ");
	scanf("%d", &option);

	switch (option)
	{
		case 1:
			print_remaining_days();
			break;
		case 2:
			print_date_diff();
			break;
		default:
			puts("Invalid Option!");
			return (-1);
	}

	return (0);
}

/**
 * get_date - gets date
 *
 * @date: pointer to date structure
 *
 * Return: pointer to date structure
 */
date get_date(date *date)
{
	printf("Date (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &date->day, &date->month, &date->year);

	return (*date);
}

/**
 * print_date_diff - prints the interval between two days
 */
void print_date_diff(void)
{
	printf("Start ");
	date start_date = get_date(&start_date);

	printf("End ");
	date end_date = get_date(&end_date);

	int diff = elapsed_days(&start_date, &end_date);

	if (diff >= 0)
	{
		printf("\nDays elapsed between %02d-%02d-%d and %02d-%02d-%d: %d\n",
			   start_date.day, start_date.month, start_date.year, end_date.day,
			   end_date.month, end_date.year, diff);
	}
	else
	{
		puts("An error occurred");
		exit(-1);
	}
}

/**
 * print_remaining_days - prints the current day of the date received and the
 * number of days left in the calendar of that year.
 */
void print_remaining_days(void)
{
	date date = get_date(&date);

	printf("Day of week: ");
	day_of_week(date);
	printf("Day of year: %d\n", get_day_of_year(&date));
	printf("Days remaining: %d\n", days_left(&date));
}
