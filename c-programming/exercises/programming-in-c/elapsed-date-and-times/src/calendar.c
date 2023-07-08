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
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		return (1);
	return (0);
}

/**
 * get_day_of_year - day of year checker, takes into account leap years.
 *
 * @day: day
 * @month: month
 * @year: year
 *
 * Return: day of year, -1 if error
 */
int get_day_of_year(date day_of_year)
{
	int month_days[] = {0,			 month1_days, month2_days,	month3_days,
						month4_days, month5_days, month6_days,	month7_days,
						month8_days, month9_days, month10_days, month11_days,
						month12_days};

	/*check the day of year and return result*/
	if ((day_of_year.month >= january) && (day_of_year.month <= december) &&
		day_of_year.day <=
			(month_days[day_of_year.month] - month_days[day_of_year.month - 1]))
	{
		/*account for extra day in February*/
		if (is_leap_year(day_of_year.year))
			return (month_days[day_of_year.month - 1] + day_of_year.day + 1);
		/*day of year = previous month's days + day checked for*/
		return (month_days[day_of_year.month - 1] + day_of_year.day);
	}

	return (-1); /*error occurred*/
}

/**
 * days_left - check the number of days left
 *
 * @day: day
 * @month: month
 * @year: year
 *
 * Return: remaining days in the year specified, else -1 on error
 */
int days_left(date day_of_year)
{
	int total_days;
	int day = get_day_of_year(day_of_year);

	if (day >= 1)
		if (is_leap_year(day_of_year.year))
			return (366 - day);
		else
			return (365 - day);
	return (-1);
}
