#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < i; j++)
        {
            // inner loop prints hash
            printf("#");
        }
        // outer loop adds newline
        printf("\n");
    }

    return 0;
}