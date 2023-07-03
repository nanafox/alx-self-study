#include <stdio.h>

/// @brief A simple multiplication function. Answers question 4 of Hour 3's exercise
/// @param x base number
/// @param y multiplier
/// @return product
int multiply(int x, int y)
{
    int product = x * y;
    return product;
}

/// @brief Answers the question 5 of Hour 3's Exercise
/// @param void basically nothing.
/// @return 0. On success
int main(void)
{
    int a = 13;
    int b = 5;
    // invoke multiplier function
    int product = multiply(a, b);

    printf("%i x %i equals %i.\n", a, b, product);

    return 0;
}
