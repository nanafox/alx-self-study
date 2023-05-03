//loops. 3 main kinds

#include <stdio.h>

int main()
{ 
    //Each loop has three pieces and it happens at distinct times
    //initialization (once at beginning)
    //comparison (before each iteration)
    //update (at the end of each iteration)
    
    //you may need to declare i above the for and remove int from if: 
    //int i;
    printf("standard:  ");
    for(int i = 0; i < 10; i++)
    {
        //standard format for loop.

        printf("%d ", i);
    }

    printf("\nDecrement: ");
    //you can do what ever you want.
    for(int i = 9; i >= 0; i--)
    {
        printf("%d ", i);
    }

    printf("\nIterate through an array\n");
    int size = 10;
    int ages[] = {12, 54, 34, 76, 34, 65, 99, 11, 34, 49};

    //iterate through an array:

    for(int i = 0; i < size; i++)
    {
        printf("ages[%d] = %d\n", i, ages[i]);
    }    

    printf("\nNested for: \n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\nWhile loops do the same thing\n");

    int i = 0; //initialization
    while (i < 10) //comparison
    {
        printf("%d ", i);
        i++; //increment
    }

    printf("\nDo while loops execute atleast once\n");
    //good for menus to show up atleast once
    printf("Choose a number 0-9: ");
    int input;
    do
    {
       scanf("%d", &input); 
    } 
    while(input < 0 || input > 9); //remember semicolon

    return 0;

}