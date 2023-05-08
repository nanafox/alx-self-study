#include <stdio.h>

int main(void)
{
    // declare the variable
    char literal;
    // initialize it with a value
    literal = 'A';
    printf("Initial value of literal: %14c\n", literal);
    // using the space notion, set this literal to it's lower version
    literal += 32; // this causes it to become letter 'a'
    printf("Value after applying literal += 32: %4c\n", literal);
    // now let's revert it to upper case.
    literal -= ' '; // see how this uses the space character? Yeah, it's value is 32.
    printf("Value after applying literal -= ' ': %3c\n", literal);
}