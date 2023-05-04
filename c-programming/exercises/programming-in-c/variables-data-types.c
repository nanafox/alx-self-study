#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    /*
        using the %g for floating point number makes things easier
        if the exponent is less than -4 or greater than 5, %e is used for printing
        otherwise, %f is used.
    */
    float a = 2.25e4; // this will use the %f format specifier
    float b = 2.25e-3; // this will use the %f format specifier
    float c = 2.25e-8; // this will use the %e format specifier
    float d = 2.25e7; // this will use the %e format specifier as well

    printf("%g\n", a);
    printf("%g\n", b);
    printf("%g\n", c);
    printf("%g\n", d);

    // the normal _Bool data type
    printf("Using the _Bool data type\n");
    _Bool yes = 1;
    _Bool no = 0;
    printf("%d\n", yes);
    printf("%d\n", no);

    // using the <stdbool.h> definition
    printf("Using the bool(<stdbool.h>) data type\n");
    bool yes_again = true;
    bool no_again = false;
    printf("%d\n", yes_again);
    printf("%d\n", no_again);

    // short int
    printf("Using short and unsigned\n");
    unsigned short int m = 45;
    printf("%hu\n", m);

    // omitting the other data type with unsigned
    unsigned age = 56;
    printf("Age is: %hu\n", age);

    // longs
    printf("Using longs\n");
    long long int big = 0xffeeULL;
    printf("Using long long int and %%lli: %llu\n", big);
    unsigned big_1 = 0xffeeULL;
    printf("Using unsigned and %%u: %u\n", big_1);

    // unsigned
    unsigned int i = 4000000000; // positive numbers only
    // ! This data type can not hold this much data. It balances between positive and
    // ! negative numbers. Hence, we wouldn't get the exact figure (4 billion)
    int j = 4000000000; // normal integer
    /*
        ! kd
        ! in the same way, using negative numbers with the unsigned type raises the
        ! integer overflow error if it bigger than the space of the type, or
        ! you basically won't get the right result you expected. See example below

        ! this is equivalent to doing 2^32 - 96
        ! the integer overflow error is thrown only when the value is bigger than what
        ! the space provides.
    */
    unsigned k = -96;

    printf("Unsigned int: %u\n", i);
    printf("Regular int: %i\n", j);
    printf("Regular int: %u\n", k);
    printf("%lu\n", sizeof(k));

    return 0;
}