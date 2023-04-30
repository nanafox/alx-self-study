#include <stdio.h>

/*The lower and upper case letters are 32 numbers apart.*/
const int low_upper_interval = 32;

/// @author theLazyProgrammer^_^
/// @brief Converts upper case to lower case
/// @param letter The letter you are testing
/// @return lowercase version of letter. i.e. letter + 32
/// @note The lower and upper case letters are 32 numbers apart.
char to_lower(char letter)
{
    if (letter >= 65 && letter < 90)
        return letter + low_upper_interval;
}

/// @brief Coverts lower case to upper case
/// @param letter The letter you are testing
/// @return uppercase version of letter. i.e. letter - 32
char to_upper(char letter)
{
    if (letter >= 97 && letter < 122)
        return letter - low_upper_interval;
}
