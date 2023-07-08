#include "../headers/date_and_times.h"

/**
 * elapsed_days - calculate the difference between two dates
 *
 * @start_date: the base/start date
 * @end_date: end date
 *
 * Return: difference between start date and end date
*/
int elapsed_days(date start_date, date end_date)
{
	int days_d1 = days_left(start_date); /*get days left*/
	int days_d2 = get_day_of_year(end_date); /*get the current day*/

	return (days_d1 + days_d2);
}

/**
 * elapsed_time - calculate the difference between two separate time
 * periods
 *
 * @start_time: beginning
 * @end_time: end
 *
 * Return:
*/
time elapsed_time(time start_time, time end_time)
{
	/*TODO*/
}
