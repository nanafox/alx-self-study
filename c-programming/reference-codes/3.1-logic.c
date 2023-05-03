/*

Everything inside of if is ultimately evaluated to true or false

*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    if (true)
    {
        printf("True\n");
    }
    else
    {
        printf("false\n");
    }

    if (!true)
    {
        printf("True\n");
    }
    else
    {
        printf("false\n");
    }

    //comparison operators resolve to true or false

    int age = 17;
    if (age > 18)
    {
        printf("You are an adult\n");
    } else
    {
        printf("You are not an adult\n");
    }

    //logical operators used to make compound comparisons

    double money = 30000; //no comma

    if(age > 17 && money > 25000)
    {
        printf("Welcome with &&\n");
    }

    if(age > 17 || money > 25000)
    {
        printf("Welcome with || \n");
    }

    bool isGraduated  = true;

    
    //if(age > 17 && money > 25000 || isGraduated)
    //{
        //THIS WILL BE HIT!  //WILL GIVE WARNING
        //printf("You are a graduated 18+ yr old with $25k\n");
    //}

    //default precedence
    if((age > 17 && money > 25000) || isGraduated) 
    {
        printf("1\n");
    } 
    if(age > 17 && (money > 25000 || isGraduated))
    {
        printf("2\n");
    } 

    /////////////   if, else if, else   /////////////

    if(age < 13)
    {
        printf("You're a youngling\n");
    }
    else if(age > 12 && age < 20) //NOT  12 < age < 20
    {
        printf("You're a teenager\n");
    } else 
    {
        printf("You're an old man\n");
    }
    /////////////   single line if  /////////////
    //only for one statement
    if (age < 150) printf("You're possibly alive\n"); printf("This always executes\n");
    
    /////////////   switch   /////////////
    // Good for few options for numeric or char data
   
    int menuChoice = 2;

    switch(menuChoice)
    {
        case 0:
            printf("Case 0\n");
            break;
        case 1:
            printf("Case 1\n");
            break;
        case 2:
            printf("Case 2\n");
            break;
        case 3:
            printf("Case 3\n");
            break;
        default:
            printf("Case default\n");
            break;
    }

    switch(menuChoice)
    {
        case 0:
        case 1:
        case 2:
            printf("Case 0, 1, or 2\n");
            break;
        case 3:
            printf("Case 3\n");
            break;
        default:
            printf("Case default\n");
            break;
    }

    //DON'T FORGET THE BREAK!::
    menuChoice = 0;

    printf("WITHOUT BREAK (Don't do this):\n");
    switch(menuChoice)
    {
        case 0:
            printf("Case 0\n"); //DON'T DO THIS!
        case 1:
            printf("Case 1\n");
        case 2:
            printf("Case 2\n");
        case 3:
            printf("Case 3\n");
        default:
            printf("Case default\n\n");
    }
   
    /////////////   Conditional Operator (ternary operator)  /////////////
   
    double balance = -5000;
    
    balance > 0 ? printf("You has money\n") : printf("You has no money\n");

    //can also use ternary operator for more general things (like assignment) 
    //Basically returns one value if true. other if false.
    bool hasMoney;
    hasMoney = balance > 0 ? 1 : 0;

    printf("HasMoney? 1 is yes 0 is no: %d\n", hasMoney);

    //all of this branching is pointless if you do not get data from outside of hardcoded values
    //Usually from Db, file, or input.

    printf("Input your age yo:\n");
    scanf("%d", &age);
    if (age < 13) 
    {
        printf("get outa here son\n");
    }
    return 0;
}