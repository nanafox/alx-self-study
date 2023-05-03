#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 10; //integer
    double b = 10.0; //double
    float c = 10.0; //float (similar to double but less precise)
    char d = 'a'; //string
    char e[] = "The easiest way to define a string";
    bool f = false; //requires stdbool.h

    /////////////   Legal Variable Names   /////////////
    //Cannot change type of variables 
    //d = "hello"; will cause an error

    d = 10; //int is directly convertable to char based on ASCII table values (type cast needed? no compiler installed)
    //http://www.asciitable.com/

    //Understand that integers truncate (crop), THEY DO NOT ROUND
    int zero = 0;
    a = zero + 1.99999999999; //a == 1 
    printf("a = %d\n", a);
    //This puts us at risk of logic errors (where it compiles but we may have unexpected results)

    /////////////   Type Casting   /////////////

    int slices = 17;
    int people = 2;
    double slicesPerPerson = slices / people;  //WRONG!
    slicesPerPerson = (double) slices / people; //CORRECT!

    // casting is a unary operator (one operand)
    //(double) slices / people == (double) (slices) / people


    //As long as one operand of arithmetic operator is double, double arithmetic is used.
    //This does not mean entire expression is done with double arithmetic
    //these will both print 24. 25 / 2 is 14 * 2 or 2.0 is 24.
    double test1 = 25 / 2 * 2; //24.0
    double test2 = 25 / 2 * 2.0; //24.0
 
    printf("test1: %f\n", test1);
    printf("test2: %f\n", test2);

    //To fix this, cast in the appropriate location:
    double test3 = 25.0 / 2 * 2; //add .0 to int to make double
    double test4 = (double) 25 / 2 * 2.0; //cast 25 to double

    printf("test3: %f\n", test3);
    printf("test4: %f\n", test4);
}