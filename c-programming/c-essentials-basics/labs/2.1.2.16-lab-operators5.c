#include <stdio.h>

int main()
{
    int xValue = 4 * 6 % 5; // this will result in 4
    /* Here's the process
     * approach one
     * 4 * 6 % 5 -> uses the left to right operation because of same priority
     * = 20 % 5
     * =   4
     *
     * approach two... (grouping -> doesn't make a difference but a good angle)
     * 4 * (6 % 5)
     * = 4 * 1
     * =   4
     */
    int eightValue = 4 + xValue;
    printf("The value of eight is: %d\n", eightValue);
    return 0;
}