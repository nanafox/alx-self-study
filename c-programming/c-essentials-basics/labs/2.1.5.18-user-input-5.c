#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_leap_year(int year);
int day_of_year(int day, int month, int year);
void validate_day_and_month(int day, int month);

int days_in_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int year, day, month, days;
    printf("Day: ");
    scanf("%d", &day);
    printf("Month: ");
    scanf("%d", &month);
    printf("Year: ");
    scanf("%d", &year);

    days = day_of_year(day, month, year);
    if (days)
        printf("The day of the year: %d\n", days);

    return 0;
}

/*!
 * @brief Leap year checker
 * @param year
 * @return true if leap year, else false
 */
bool is_leap_year(int year)
{
    // check if leap year
    if ((year % 4 == 0) &&
        (year % 100 != 0))
        return true;
    else if ((year % 400 == 0))
        return true;

    // assume non-leap year by default
    return false;
}

/*!
 * @brief Day of Year Checker. Accepts only integer values
 * @param day Day of the current month or day of month to check for
 * @param month The month of the year to check
 * @param year The specific year
 * @return The number of days so far based on the info received.

 */
int day_of_year(int day, int month, int year)
{
    int day_of_the_year = 0;
    
    // validate day and month values
    validate_day_and_month(day, month);

    // count the number of days for leap years
    if (is_leap_year(year))
    {
        days_in_months[1] = 29; // set february leap year day count

        for (int the_day; the_day < (month - 1); the_day++)
        {
            day_of_the_year += days_in_months[the_day];
        }
    }

    // count the number of days for non-leap years
    else if (!(is_leap_year(year)))
    {
        for (int the_day; the_day < (month - 1); the_day++)
        {
            day_of_the_year += days_in_months[the_day];
        }
    }

    // return the cumulative number of days
    return day_of_the_year + day;
}

/*!
 * @brief Validates day of month and month in years. Ensures that they fall within calendar days and months.
 * @param day The day of month to check
 * @param month The month
 */
void validate_day_and_month(int day, int month)
{
    if ((month < 1) || (month > 12))
    {
        printf("\nMonth is incorrect!\a\n");
        exit(1);
    }

    if (day > days_in_months[month - 1])
    {
        printf("\nDay of month is invalid!\a\n");
        exit(1);
    }
}