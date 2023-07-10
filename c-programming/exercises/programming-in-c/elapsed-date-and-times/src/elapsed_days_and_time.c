#include "../headers/date_and_times.h"

/**
 * get_interval - gets the value to be computed for difference between
 * dates
 *
 * @base_date: date in the format dd/mm/yyyy
 *
 * Return: interval
 */
int get_interval(date *base_date)
{
	int interval;

	if (is_valid_day_and_month(base_date))
	{
		if (base_date->month <= 2)
		{
			base_date->year -= 1;
			base_date->month += 13;
		}
		else
			++base_date->month; /*add one to month*/

		interval = ((1461 * base_date->year) / 4) +
				   ((153 * base_date->month) / 5) + base_date->day;
	}
	else
		return (-1);

	return (interval);
}

/**
 * elapsed_days - calculate the difference between two dates
 *
 * @start_date: the base/start date
 * @end_date: end date
 *
 * Notes: I confirmed my results with an website that provides this service.
 * Here's the site: https://www.timeanddate.com/date/weekday.html
 *
 * Return: difference between start date and end date
 */
int elapsed_days(date *start_date, date *end_date)
{
	return (get_interval(end_date) - get_interval(start_date));
}

/**
 * elapsed_time - calculate the difference between two separate time periods
 *
 * @start_time: beginning
 * @end_time: end
 *
 * Return: difference in time
 */
time elapsed_time(time start_time, time end_time)
{
	/*TODO*/
}
