#include <stdio.h>

int main(void)
{
    int i, j;

    // for loop with body
    for (i = 0, j = 1; i < 8; i++, j++)
        printf("%d + %d = %d\n", i, j, i + j);

    // for loop without body -> null statement
    for (i = 0, j = 1; i < 8; i++, j++)
        ;
    printf("%d + %d = %d\n", i, j, i + j);

    return 0;
}