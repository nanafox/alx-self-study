#include <stdio.h>

/// @author theLazyProgrammer^_^
/// @brief Letter case checker.
/// @param letter A single letter to check case.
/// @note This function prints out the correspoding case.
/// @returns void(nothing)
void check_case(char letter)
{
    // upper case letter ASCII range
    if (letter >= 65 && letter < 90)
        printf("%c is UPPER CASE\n", letter);
    // check for lower case
    else if (letter >= 97 && letter < 122)
        printf("%c is lower case\n", letter);
    // check everything else
    else
        printf("%c is not a recognized alphabet.\n", letter);
}

