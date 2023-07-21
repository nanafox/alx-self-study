#include <stdio.h>

#define START 0 // start
#define END 10  // stop

int main(void)
{
    int even_numbers = 0; // just a counter.

    // check for even numbers in a given range
    for (int i = START; i <= END; ++i)
        if (i % 2 == 0 && i > 0)
            ++even_numbers;

    printf("Found %i even numbers in range %i through %i.\n", even_numbers, START, END);
}