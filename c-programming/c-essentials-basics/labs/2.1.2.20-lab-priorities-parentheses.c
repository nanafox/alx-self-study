#include <stdio.h>

/* 2.1.2.20 LAB Priorities and Parentheses

Original code Code

#include <stdio.h>

! You are not allowed to change the numbers

int main()
{
    int xValue = 5;
    int yValue = 3;
    int result = (xValue % yValue * 14 % yValue;
    int smallResult = xValue + 10 % 4 % xValue;
    printf("the result is: %d\n", result);
    printf("the small result is: %d\n", small Result);
    return 0;
}
! Expected Output

?
the result is: 4
?
the small result is: 7

*/

// the answer
int main()
{
    int xValue = 5;
    int yValue = 3;
    int result = (xValue % yValue) * (14 % yValue);
    int smallResult = xValue + (10 % 4 % xValue);
    printf("the result is: %d\n", result);
    printf("the small result is: %d\n", smallResult);
    return 0;
}