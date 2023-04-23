#include "5.2-libraries.h"

int square (int input)
{
    return input * input * input;
}
int cube(int input)
{
    return input * input * input;
}

int power(int input, int exponent)
{      
    int total = 1;
    for (int i = 0; i < exponent ; i++) 
    {
        total *= input;
    }
    return total;
}

int recursivePower(int input, int exponent)
{
    if (exponent < 1) //base case
    { 
        return 1;
    }
    
    return input * recursivePower(input, exponent-1);
}

void changeVal(int *a)
{
    *a *= 2;
}

//promise won't change with ages
int oldestValue( int *ages, int size)
{
    if(size < 1) 
    {
        return -1;
    }
    int oldest = ages[0];
    for (int i = 0; i < size; i++)
    {
        if (ages[0] < ages[i])
        {
            oldest = ages[i];
        }
    }
    return oldest;
}