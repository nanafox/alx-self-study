#ifndef _date_and_times_h
#define _date_and_times_h

#include <stdbool.h>

/**
 * struct date - date structure
 *
 * @day: day
 * @month: month
 * @year: year
*/
typedef struct date
{
	int day;
	int month;
	int year;
} date;

/**
 * struct time - time structure
 *
 * @hour: hour
 * @minutes: minutes
 * @seconds: seconds
*/
typedef struct time
{
	int hour;
	int minutes;
	int seconds;
} time;

extern bool is_leap_year(int year);
extern bool is_valid_day_and_month(date *date);
extern int get_day_of_year(date *day_of_year);
extern int days_left(date *day_of_year);
extern int get_interval(date *base_date);
extern int elapsed_days(date *start_date, date *end_date);
extern time elapsed_time(time start_time, time end_time);
extern void day_of_week(date day_of_year);

#endif
