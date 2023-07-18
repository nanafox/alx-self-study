#include <stdio.h>
#include <math.h>

/* 2.1.2.17 Lab Operators: Part 6
Expected output:
result : 38
big result: 54872

*/
int main(void)
{
    int xValue = 5;
    int yValue = 9;
    int result;
    int bigResult;

    // increment xValue by 3
    xValue += 3;
    // decrement yValue by xValue
    yValue -= xValue;
    // multiply xValue times yValue giving result
    result = xValue * yValue;
    // increment result by result
    result += result;
    // decrement result by 1
    result--;
    // assign result modulo result to yValue
    yValue = result % result;
    // increment result by result added to xValue
    result += result + xValue;
    // assign result times result times result to bigResult
    bigResult = result * result * result;
    // increment result by xValue times yValue
    result += xValue * yValue;

    printf("result: %d\n", result);
    printf("big result: %d\n", bigResult);

    return 0;
}