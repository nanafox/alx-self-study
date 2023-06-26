#include "months.h"
#include <stdio.h>

int day_of_year(int month, int day);

/**
 * main - using the enum data type
 *
 * Return: 0
 */
int main(void)
{
	int day, month, check_day;

	puts("Check the day of the year.");
	printf("Month: ");
	scanf("%d", &month);
	printf("Day: ");
	scanf("%d", &day);

	check_day = day_of_year(month, day);

	(check_day >= 1) ? printf("\nDay of year: %d\n", check_day)
					 : puts("Invalid day received!");

	return (0);
}

/**
 * day_of_year - a simple day of year checker.
 * It doesn't account for leap years
 *
 * @month: month
 * @day: day of month
 *
 * Return: day of year on success, or zero on error.
 */
int day_of_year(int month, int day)
{
	int month_days[] = {0,			 month1_days, month2_days,	month3_days,
						month4_days, month5_days, month6_days,	month7_days,
						month8_days, month9_days, month10_days, month11_days,
						month12_days};

	/*check the day of year and return result*/
	if (month >= january && month <= december &&
		day <= (month_days[month] - month_days[month - 1]))
	{
		/*day of year = previous month's days + day checked for*/
		return (month_days[month - 1] + day);
	}

	else
		return (0);
}
