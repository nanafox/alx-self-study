// Exercise 1-8: Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main(void)
{
    int tab_count, newline_count, blanks_count, chars, c;
    tab_count = 0;
    newline_count = 0;
    blanks_count = 0;
    chars = 0;

    while ((c = getchar()) != EOF)
    {
        ++chars; // count characters
        if (c == '\n')
            ++newline_count;
        if (c == '\t')
            ++tab_count;
        if (c == ' ' && c != '\n' && c != '\t')
            ++blanks_count;
    }

    printf("Characters: %d\nTabs: %d\nNewlines: %d\n", chars, tab_count, newline_count);
    printf("Blank lines: %d\n", blanks_count);

    // TODO: #1 Work on getting the blank lines
}