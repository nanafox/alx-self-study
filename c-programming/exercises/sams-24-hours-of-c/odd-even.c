#include <stdio.h>

int main(void)
{
    printf("Even number  Odd number\n");
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            printf("%d", i);
        else
            printf("%14d\n", i);
    }
}