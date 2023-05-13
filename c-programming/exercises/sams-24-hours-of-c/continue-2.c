#include <stdio.h>
#include <math.h>

int main(void)
{
    int x = 1;

    for (int i = 2; i < 10; i++)
    {
        if (i % 3 == 0)
            continue;
        x += i; // add only non-multiples of 3 (2, 4, 5, 7, 8)
    }
    // print the value of x -> expect 27
    printf("%d\n", x);
}
