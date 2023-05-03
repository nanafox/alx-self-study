#include <stdio.h>

int square (int input)
{
    return input * input;
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

int oldestValue(int ages[], int size)
{
    int largest = ages[0];
    for(int i = 1; i < size; i++)
    {
        if(ages[i] > largest)
        {
            largest = ages[i];
        }
    }
    return largest;
}

  
int main()
{
    //keywords:
    //argument - data passed
    //parameter - variable to hold argument
    //return - output from function which can be used in expression
    //return type - data type to be returned
    //void function - a function that doesn't return anything
    //recursive function - a function that calls itself
    
    printf("%d ", power(2, 4)); //keep output on calling side
    printf("%d ", recursivePower(2, 4));

    int val = 5; 
    changeVal(&val);
    printf("Val = %d\n", val);

    int const size = 7;
    int ages[size] = {1,4, 53, 23, 23, 9, 52};
    printf("Oldest age: %d\n", oldestValue(ages,size));
    return 0;
}

