#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    /*Using the break statement*/
    printf("What's the magic letter?\nWe'll let you know when you find it.\n");
    printf("Keep searching\n");

    while (true)
    {
        int c = getchar();
        if (c == 'z')
            break; // exit loop if magic letter is found.
    }
    // after the break statement is encountered, this line is next.
    printf("Great, you found it.\n");
}