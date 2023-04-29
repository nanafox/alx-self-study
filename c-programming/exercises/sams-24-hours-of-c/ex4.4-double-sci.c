/*
Given the declaration double dbl_num = 123.456;, write a program that prints
out the value of dbl_num in both floating-point and scientific notation formats.
*/


#include <stdio.h>

int main(void)
{
    double dbl_num = 123.456;

    // I will add a precision of 3 digits
    printf("Floating point of %.3f: %-.3f\n", dbl_num, dbl_num); // floating point format
    printf("Scientific notation of %.3f: %-.3fe\n", dbl_num, dbl_num); // floating point format

    return 0;
}