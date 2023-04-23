/*
gcc -c 5.2-libraries.c
cc -c 5.2-libraries-main.c
gcc 5.2-libraries.o 5.2-libraries-main.o
./a.out

You can also get a custom name like this:
gcc -o main 5.2-libraries.o 5.2-libraries-main.o

//research makefile to make life easier

*/

#include "5.2-libraries.h"
#include <stdio.h>

int main()
{
    printf("%d ", power(2, 4)); //keep output on calling side
    printf("%d ", recursivePower(2, 4));

    int val = 5; 
    changeVal(&val);
    printf("Val = %d\n", val);

    int const size = 7;
    int ages[size] = {1,4, 53, 23, 23, 9, 52};
    printf("Oldest age: %d\n", oldestValue(ages,size));
    return 0;
}