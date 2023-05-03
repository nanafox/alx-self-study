#include <stdio.h>

void square(int *a)
{
    *a *= *a;
    //we can change value where pointer points to
}

//int getSizeIllustration (int data[])
//{   
    //return sizeof(data);
    //THIS IS NOT THE CORRECT WAY TO DO IT
    //ILLUSTRATION ONLY
    //SEE COMMENTS IN CALLING CODE
    //will get warning because getting size of int pointer
    //(can still execute though)
//}

void printIntArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int a = 100;
    int *b; // how to declare a pointer
    b = &a; //&a creates a pointer to a. Assigning that to B.
    //aka the address-of-operator
    printf("a   = %d\n", a);
    printf("*b  = %d\n", *b); //dereferencing the pointer 
    //aka the indirection operator
    //not same * as when declaring pointer

    //These both print the same value
    //they both refer to the same area of memory

    a = 200;
    printf("a   = %d\n", a);
    printf("*b  = %d\n", *b);

    *b = 300;
    printf("a   = %d\n", a);
    printf("*b  = %d\n", *b);

    //They always match.
    //We are touching a indirectly through b.

    //we can change the value of b (the pointer itself), as well.

    int c = 40;
    b = &c; 
    //now b is attached to C.
    //some functions take pointers

    square(b);
    printf("c   = %d\n", c); //c changed through b.
    
    //arrays decay to pointers
    int ages[] = {2, 43, 64000, 23, 05, 53}; // 6 elements

    printf("memory size of ages = %lu\n", sizeof(ages)); // can divide by sizeof(ages[0]) to get element count
    //printf("memory size in func = %d\n", getSizeIllustration(ages));
    //uncomment this and the function definition and try this!

    //This is why you need to pass size to functions:

    printIntArray(ages, 6);

    return 0;
}