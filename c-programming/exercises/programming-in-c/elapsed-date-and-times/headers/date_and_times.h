#ifndef _date_and_times_h
#define _date_and_times_h

#include <stdbool.h>

typedef struct date
{
	int day;
	int month;
	int year;
} date;

typedef struct time
{
	int hour;
	int minutes;
	int seconds;
} time;

extern bool is_leap_year(int year);
extern int get_day_of_year(date day_of_year);
extern int days_left(date day_of_year);
extern int elapsed_days(date start_date, date end_date);
extern time elapsed_time(time start_time, time end_time);

#endif
