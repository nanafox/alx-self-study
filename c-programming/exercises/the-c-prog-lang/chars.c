#include <stdio.h>


int main(void)
{
    /*Using chars*/
    int c;
    do
    {
        c = getchar();
        putchar(c);
        printf("%d\n", c == EOF); // check the value of EOF.

    } while (c != EOF);

    printf("EOF: %d\n", EOF);
}