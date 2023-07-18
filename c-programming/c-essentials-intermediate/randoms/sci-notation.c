/*Using scientific notation and the %e or %E format specifier*/

#include <math.h>
#include <stdio.h>

int main(void)
{
    double base_num = 50; // base number
    double exponent = 2; // power

    double result = pow(base_num, exponent); // similar to doing mantissaEexponent

    printf("Result: %.2f\n", result);
    printf("Scientific representation: %.2e\n", result);
}

/*
NB: The linker had issues linking the math library.

Kept receiving the undefined reference to pow error till I add the -lm while compilin
*/