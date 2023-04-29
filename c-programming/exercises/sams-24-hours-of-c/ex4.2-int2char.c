/*
 Given two numeric values, 72 and 104, write a program to print out the corresponding two characters.
*/

#include <stdio.h>

int main(void)
{
    int a = 72;
    int b = 104;

    printf("Corresponding character for %i: %c\n", a, a); // happens to 'H'
    printf("Corresponding character for %i: %c\n", b, b); // 'h'

    return 0;
}