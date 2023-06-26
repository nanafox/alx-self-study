#ifndef months_h
#define months_h

/**
 * enum months - months of the year
 */
enum months
{
	january = 1,
	february,
	march,
	april,
	may,
	june,
	july,
	august,
	september,
	october,
	november,
	december
};
#endif

#ifndef accumulate_month_days_h
#define accumulate_month_days_h
/**
 * enum accumulate_month_days - accumulative days of the months
 */
enum accumulate_month_days
{
	month1_days = 31,
	month2_days = month1_days + 28,
	month3_days = month2_days + 31,
	month4_days = month3_days + 30,
	month5_days = month4_days + 31,
	month6_days = month5_days + 30,
	month7_days = month6_days + 31,
	month8_days = month7_days + 31,
	month9_days = month8_days + 30,
	month10_days = month9_days + 31,
	month11_days = month10_days + 30,
	month12_days = month11_days + 31
};
#endif
