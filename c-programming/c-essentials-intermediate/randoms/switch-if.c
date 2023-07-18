#include <stdio.h>

/*A day of week checker*/
int main(void)
{
    int day_of_week_number;
    printf("Get a score range based on grade\n");

    printf("Enter a grade: ");
    scanf("%d", &day_of_week_number);

    /*using the switch statement*/
    printf("\nDay of week (using switch)%17s: ", " ");
    switch (day_of_week_number)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
    default:
        printf("***Error Occurred - Invalid Day***\n");
    }

    /*using if statements*/
    printf("Day of week (using if...else if... else...): ");
    if (day_of_week_number == 1)
    {
        printf("Monday\n");
    }
    else if (day_of_week_number == 2)
    {
        printf("Tuesday\n");
    }
    else if (day_of_week_number == 3)
    {
        printf("Wednesday\n");
    }
    else if (day_of_week_number == 4)
    {
        printf("Thursday\n");
    }
    else if (day_of_week_number == 5)
    {
        printf("Friday\n");
    }
    else if (day_of_week_number == 6)
    {
        printf("Saturday\n");;
    }
    else if (day_of_week_number == 7)
    {
        printf("Sunday\n");
    }
    else
        printf("***Error Occurred - Invalid Day***\n");
}