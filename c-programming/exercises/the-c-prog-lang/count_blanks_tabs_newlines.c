// Exercise 1-8: Write a program to count blanks, tabs, and newlines.

#include <stdio.h>
#include <string.h>

int main(void)
{
    int tab_count = 0, newline_count = 0, blanks_count = 0, chars = 0;
    int c;

    while ((c = getchar()) != EOF)
    {
        (c == '\n') ? newline_count++ : // check newlines
        (c == '\t') ? tab_count++ : // check tabs
        (c == ' ')  ? blanks_count++ : // check blanks. Space
        chars++; // count characters;
    }

    printf("Characters: %d\nTabs: %d\nNewlines: %d\n", chars, tab_count, newline_count);
    printf("Blank lines: %d\n", blanks_count);
}
    // TODO: #1 Work on getting the blank lines

    //? Findings
    /*
        In C, a blank is considered any whitespace character that is not a newline character. This includes spaces, tabs, and formfeeds.
    */