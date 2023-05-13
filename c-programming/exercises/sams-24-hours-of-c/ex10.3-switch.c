#include <stdio.h>

/*
Write a program to read characters from the standard I/O. If the characters are A, B,
and C, display their numeric values on the screen. (The switch statement is
required.)
*/

int main(void)
{
    char c = getchar();

    switch (c)
    {
        case 'A':
        case 'B':
        case 'C':
            printf("Numeric value of %c is %d\n", c, c);
            break;
        default:
            printf("Must be A, B or C\n");
        }
}