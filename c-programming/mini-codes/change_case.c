#include <stdio.h>

/// @author theLazyProgrammer^_^
/// @brief My version of C's tolower() function
/// @param letter
/// @return lowercase version of letter. i.e. letter + 32
/// @note The lower and upper case letters are 32 numbers apart.
int to_lower(char letter)
{
    if (letter >= 65 && letter < 90)
        return letter + 32;
}

/// @brief My version of C's toupper() function
/// @param letter
/// @return uppercase version of letter. i.e. letter - 32
/// @note The lower and upper case letters are 32 numbers apart.
int to_upper(char letter)
{
    if (letter >= 97 && letter < 122)
        return letter - 32;
}


int main(void)
{
    char name[] = "Maxwell";

    printf("%c\n", to_upper(name[1]));
}