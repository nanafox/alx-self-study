#include <stdio.h>

int day_of_year(int month, int day);

/**
 * main - using the enum data type
 *
 * Return: 0
 */
int main(void)
{
	int day, month;

	puts("Check the day of the year.");
	printf("Month: ");
	scanf("%d", &month);
	printf("Day: ");
	scanf("%d", &day);

	printf("\nDay of year: %d\n", day_of_year(month, day));

	return (0);
}

/**
 * day_of_year - a simple day of year checker.
 * It doesn't account for leap years
 *
 * @month: month
 * @day: day of month
 *
 * Return: day of month, or -1 if failure
 */
int day_of_year(int month, int day)
{
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

	enum days_in_month
	{
		month1 = 31,
		month2 = month1 + 28,
		month3 = month2 + 31,
		month4 = month3 + 30,
		month5 = month4 + 31,
		month6 = month5 + 30,
		month7 = month6 + 31,
		month8 = month7 + 31,
		month9 = month8 + 30,
		month10 = month9 + 31,
		month11 = month10 + 30,
		month12 = month11 + 31
	};

	switch (month)
	{
	case january:
		day = day;
		break;
	case february:
		day = month1 + day;
		break;
	case march:
		day = month2 + day;
		break;
	case april:
		day = month3 + day;
		break;
	case may:
		day = month4 + day;
		break;
	case june:
		day = month5 + day;
		break;
	case july:
		day = month6 + day;
		break;
	case august:
		day = month7 + day;
		break;
	case september:
		day = month8 + day;
		break;
	case october:
		day = month9 + day;
		break;
	case november:
		day = month10 + day;
		break;
	case december:
		day = month11 + day;
		break;
	default:
		puts("Invalid month!");
		break;
	}

	if (day >= 1 && day <= 365)
		return (day);
	else
		return (-1);
}
