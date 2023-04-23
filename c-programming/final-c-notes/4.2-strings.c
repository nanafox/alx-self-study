#include <stdio.h>
#include <string.h>

int main()
{
    //strings are just character arrays
    //the string ends with \0 (null character)
    //not always the last possible index in the string.

    char name[20];
    scanf("%19s", name); 
    //not passing a pointer with address-of-operator
    //limiting to 19 characters

    int letter = 0;
    while (name[letter] != '\0')
    {
        printf("%c\n", name[letter]);
        letter++;
    }
    //ends on 6th character.

    //DON'T OVERWRITE THE NULL CHARACTER!!!
    //Used to find end of string like above.

    printf("Size of name is %d\n", letter); 

    /////////////   String functions   /////////////
    
    //strlen
    printf("Size of name is %lu\n", strlen(name));
   
    //strcmp - returns 0 if equal values
    if (strcmp(name, "Caleb") == 0) //make sure you remember == 0
    {
        printf("Your name is Caleb!\n");
    }

    //strcpy
    char copy[20];
    strcpy(copy, name); //destination must be first
    printf("Copy of name: %s\n", copy);

    //strcat (concatenation)
    char lastName[] = "Curry";
    strcat(copy,lastName);
    printf("Full name: %s\n", copy);

    //https://www.programiz.com/c-programming/string-handling-functions
}