// experimenting with "hello, world" - The C Programming Language


#include <stdio.h>


/// @brief The start of execution for the program
/// @param void Receives no arguments
/// @returns 0. If no errors were encountered
int main(void)
{
    // the printf function does not add newline automatically, by default.
    printf("hello, world");

    // to add a newline, the \n escape sequence can be used
    printf("\n");

    // or a better way would be to combine both actions
    printf("hello, world\n");

    return 0;
}