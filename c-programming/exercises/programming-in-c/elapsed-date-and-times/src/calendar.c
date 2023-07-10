#include "../headers/date_and_times.h"
#include "../headers/months.h"
#include <stdio.h>

/**
 * is_leap_year - leap year checker
 *
 * @year: year
 *
 * Return: true if leap year, false otherwise
 */
bool is_leap_year(int year)
{
	return ((true) ? ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
				   : false);
}

/**
 * is_valid_day_and_month - Validates day of month and month in years.
 * Ensures that they fall within calendar days and months.
 *
 * @date: date in the format dd/mm/yyyy
 *
 * Return: true or false, based on outcome.
 */
bool is_valid_day_and_month(date *date)
{
	int days_in_months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (is_leap_year(date->year))
		days_in_months[february] = 29;

	if ((date->month < january) || (date->month > december))
	{
		printf("Month is incorrect!\n");
		return (false);
	}

	if (date->day > days_in_months[date->month])
	{
		printf("Day of month is invalid!\n");
		return (false);
	}

	return (true);
}

/**
 * get_day_of_year - day of year checker, takes into account leap years.
 *
 * @day_of_year: date in the format dd/mm/yyyy
 *
 * Return: day of year, -1 if error
 */
int get_day_of_year(date *day_of_year)
{
	int month_days[] = {0,			 month1_days, month2_days,	month3_days,
						month4_days, month5_days, month6_days,	month7_days,
						month8_days, month9_days, month10_days, month11_days,
						month12_days};

	if (is_valid_day_and_month(day_of_year))
	{
		/*check the day of year and return result*/
		if ((day_of_year->month >= january) &&
			(day_of_year->month <= december) &&
			day_of_year->day <= (month_days[day_of_year->month] -
								 month_days[day_of_year->month - 1]))
		{
			/*account for extra day in February*/
			if (is_leap_year(day_of_year->year))
				return (month_days[day_of_year->month - 1] + day_of_year->day +
						1);
			/*day of year = previous month's days + day checked for*/
			return (month_days[day_of_year->month - 1] + day_of_year->day);
		}
	}
	return (-1); /*error occurred*/
}

/**
 * days_left - check the number of days left
 *
 * @day_of_year: date in the format dd/mm/yyyy
 *
 * Return: remaining days in the year specified, else -1 on error
 */
int days_left(date *day_of_year)
{
	int day = get_day_of_year(day_of_year);

	if (day >= 1)
		if (is_leap_year(day_of_year->year))
			return (366 - day);
		else
			return (365 - day);
	return (-1);
}

/**
 * day_of_week - prints the day of week of the specified date
 *
 * @day_of_year: date
 */
void day_of_week(date day_of_year)
{
	int day_of_week = (get_interval(&day_of_year) - 621049) % 7;

	switch (day_of_week)
	{
		case 0:
			puts("Sunday");
			break;
		case 1:
			puts("Monday");
			break;
		case 2:
			puts("Tuesday");
			break;
		case 3:
			puts("Wednesday");
			break;
		case 4:
			puts("Thursday");
			break;
		case 5:
			puts("Friday");
			break;
		case 6:
			puts("Saturday");
			break;
		default:
			break;
	}
}
