#include <stdio.h>

int main()
{
    //arrays are pretty simple.
    //It's a collection of items all of same data type

    int ages[] = {1, 3, 4, 54, 34, 2};
    int size = 6;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", ages[i]);
    }
    printf("\n");
    
    //That is the ideal way to initialize an array when hard coded.
    //often these values come from the user or a file
    //Then, you must hardcode the size like int ages[6];.
    //Either way it is statically sized. 
    //First just gets sized by compiler.

    size = 20;
    int grades[size];
    
    //get from user input or assign manually.
    grades[0] = 10;
    grades[1] = 30;
    grades[2] = 40;
    //...

    //value inside [] is known as index
    //each item in the array is known as an element
    //You can fill all 20 spots (no need to reserve 1 like strings)
    //You can also change data:

    grades[0] = 100; //changed from 10 to 100;

    //grades is an int array
    //grades[0] is an int

    //Anywhere an int is expected, an array element will do
    // You cannot dynamically size an array
    //scanf("%d", &size);
    //int test[size]; //BAD
    //This is because we are using static memory (look it up if unknown)
    //We'll touch on dynamic memory later

    /////////////   Multidimensional Arrays   /////////////

    int rows = 3;
    int const columns = 4;
    int studentGrades[][columns] = {
                            {1, 3, 4, 6},
                            {3, 2, 4, 5},
                            {32, 2, 4, 9}
                            };  //atleast columns is required
                                //in declaration

    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < columns; k++)
        {
            printf("%d\t", studentGrades[i][k]);
        }
        printf("\n");
    }
    
    //Arrays don't have to contain ints, just easiest to start with
    //All data does need to be same type, though

    return 0;
}