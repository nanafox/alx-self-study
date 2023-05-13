#include <stdio.h>

int main(void)
{
    /*Using the continue statement to skip to the beginning of the loop*/
    printf("Multiples of 3: ");

    for (int i = 1; i <= 30; i++)
    {
        if (i % 3 != 0)
            continue; // skip any number that's not a multiple of 3

        printf("%d ", i); // print multiples of 3
    }
    printf("\n");
}