//First thing - Get a compiler
//#Type 'gcc' in terminal
//   -   gcc
 
/*
compile:
    -   gcc hello.c

Execute
   -   ./a.out
*/


#include <stdio.h>

int main() //Everything wrapped within main function
{
    printf("Hello World\n"); //hello world
    int x = 50; //How to create a variable
    int y; //Declaration
    y = 10; //Initialization using assignment operator

    /////////////   Output   /////////////

    //Operators work on values and in the context these values are known as operands.
    //Expressions evaluate to a single value. 
    //In this case, evaluated to a value and then assigned to y:
    y = x/2; //use of operators. 

    printf("%s there\n", "Hello"); //hello there
    //Argument - Each value passed in is known as an argument. Here we are passing 2.
    //Argument 1 - format string 
    //Argument 2 - value to replace %s
    //We are essnetially "parameterizing" our string
    //Newline character (\n) - Evaluated as new line 
    
    printf("The value of x is %d.\n", x); //Can use variables
    printf("X: %d\nY: %d\n", x, y); //multiple values can be printed

    /////////////   Input   /////////////

    int radius; //Make sure the variable is declared
    scanf("%i", &radius); //Use address-of-operator
    printf("The given radius was: %i\n", radius); //Verify value was stored

    //Address-of-operator (&) is used because we will change the value of the variable
    //This is how we pass a pointer (what the function needs to change the value)
    
    //The reason printf() does not need the address-of operator is because it doesn’t change the value
    //It just displays it on the screen, so it’s okay to have a copy of the value given to the function.

    //Getting strings is a little different
    char name[20]; //max size 19. Reserve one for '\0' (null character)
    scanf("%19s", name); //NO address-of-operator required
    //Arrays and strings decay to pointers when passed as arugments
    //A pointer is what scanf needs so no changes needed. Just variable name

    /*/////////////   Conversion Characters   /////////////

        %c	Single character
        %d	Signed decimal integer (int)
        %e	Signed floating-point value in E notation
        %f	Signed floating-point value (float)
        %g	Signed value in %e or %f format, whichever is shorter
        %i	Signed decimal integer (int)
        %o	Unsigned octal (base 8) integer (int)
        %s	String of text
        %u	Unsigned decimal integer (int)
        %x	Unsigned hexadecimal (base 16) integer (int)

    src - http://www.java2s.com/Tutorial/C/0080__printf-scanf/TheprintfConversionCharactersandflags.htm*/

    //scanf has it's limitations - https://stackoverflow.com/questions/9278226/which-is-the-best-way-to-get-input-from-user-in-c
    //consider learning the multitude of input/output functions in C

    /*/////////////   Escape Sequences   /////////////
        \b	Backspace
        \f	Form feed
        \n	Newline
        \r	Return
        \t	Horizontal tab
        \v	Vertical tab
        \\	Backslash
        \'	Single quotation mark
        \"	Double quotation mark
        \?	Question mark
        \0	Null character

source -https://www.programiz.com/c-programming/c-variables-constants 

        %% One percent sign
        */
   return 0;
}



