#include <stdio.h>

short reset_a(void)
{
    return 10;
}

int main(void)
{
    float a = 10, b = 3;

    // using the arithmetic assignment operator

    printf("Values: a is %.1f, b is %.1f\n\n", a, b);
    printf("Result of a += b (a = a + b): %.1f\n", a += b);

    // ! reset to original value
    a = reset_a();
    printf("Result of a *= b (a = a * b): %.1f\n", a *= b);

    // ! reset to original value
    a = reset_a();
    printf("Result of a /= b (a = a / b): %.1f\n", a /= b);

    // ! reset to original value
    a = reset_a();
    printf("Result of a -= b (a = a - b): %.1f\n", a -= b);

    // ! reset to original value - the modulus operator works only on integer values
    // ! Using ints and different variables to accomodate % rule
    int c = reset_a(), d = 3;

    // ! print statement still uses a and b though...
    printf("Result of a %%= b (a = a %% b): %d\n", c %= d);

    // The decrement (--) and increment (++) operator
    c = reset_a(), d = 3; // ! reset to original value

    int pre_result = ++c;
    printf("\nBefore ++a: %i. After: %d\n", pre_result, c);
    pre_result = --c;
    printf("Before --a: %i. After: %d\n", pre_result, c);
    int post_result = d++;
    printf("Before b++: %i. After: %d\n", post_result, d);
    post_result = d--;
    printf("Before b--: %i. After: %d\n", post_result, d);

    /*
        ? Observations
        * the pre-increment and pre-decrement operators add 1 before yielding the value
        * the post-increment and post-decrement assigns the value before adding 1
        * hence the reason why the start and finish values of the pre-'s are always the same
        * the same is not true for the post-'s.
    */

    // Relational Operators
    int x = 10, y = 5;
    printf("\nRelational operators: x = %i, y = %i\n", x, y);
    // which is greater?
    printf("Q1. Is 10 > 5?\nResult: ");
    (x > y) ? printf("Yes, %i is greater\n", x) : printf("No, %i is greater\n", y);
    // which is lesser?
    printf("\nQ2. Is 10 < 5?\nResult: ");
    (x < y) ? printf("Yes, %i is lesser\n", x) : printf("No, %i is lesser\n", y);
    // are they equal?
    printf("\nQ3. Is 10 == 5?\nResult: ");
    (x == y) ? printf("Yes, %i and %i are equal\n", x, y) : printf("No, %i and %i are not equal\n", x, y);

    printf("%d\n", 25 % 13);
}