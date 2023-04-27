/*A program to count the number of lines*/

#include <stdio.h>

int main(void)
{
    int line = 0, c;

    while ((c = getchar()) != EOF)
        if (c == '\n') // check newlines
            ++line;    // account for them

    printf("\nWrote %d lines\n", line);
}