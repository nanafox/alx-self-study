#include <stdio.h>

/// @author theLazyProgrammer^_^
/// @brief Letter case checker. What case is this?
/// @param letter A single letter to test case of
/// @note Prints out the correspoding case.
void check_case(char letter)
{
    int casing;

    // upper case letter ASCII range
    if (letter >= 65 && letter < 90)
        printf("%c is Upper case\n", letter);
    // check for lower case
    else if (letter >= 97 && letter < 122)
        printf("%c is lower case\n", letter);
    // check everything else
    else
        printf("%c is not a recognized alphabetic.\n", letter);
}

int main(void)
{
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);
    // check case
    check_case(letter);
}