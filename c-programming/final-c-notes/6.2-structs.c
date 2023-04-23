#include <stdio.h>
#include <string.h>

struct rectangle
{
    int length;
    int width;
};

typedef struct position //name here is optional
{
    int x;
    int y;
} position; //determines data type name

typedef struct buildingPlan //struct of structs
{
    //a struct to define the owner, size, and position of a house
    char owner[30];
    position position; // type being same as identifier is ok
    struct rectangle rectangle; //could remove struct keyword if used typedef
    //but will leave for demenstration
} buildingPlan;

typedef struct pointers
{
    int *a;
    int *b;
} pointers;

void logPosition(position pos)
{
    printf("Log - position: %d %d\n", pos.x, pos.y);
}

buildingPlan createPlan(char name[30], int length, int width, int x, int y)
{

    buildingPlan plan = {"", length, width, x, y};
    strcpy(plan.owner, name);
    return plan;
}
int main()
{
    struct rectangle house = {10, 20}; //non-standard initialization (compared to primitive types)
    position destination = {0,22}; // standard initialization (type identifier = value)

    house.length = 11; //can change values using dot operator
    destination.x = 20;
    printf("destination: %d %d\n", destination.x, destination.y);

    buildingPlan myHouse = {"Caleb Curry", {10, 20}, {11, 34}};
    myHouse.position.x = 30; //Now you can traverse structure using dot operator

    printf("The house at %d %d (size %d %d) is owned by %s\n", 
            myHouse.position.x, 
            myHouse.position.y,
            myHouse.rectangle.length,
            myHouse.rectangle.width,
            myHouse.owner);

    //You can make arrays of the new data types:

    static int size = 3;
    position path[] = {{0, 1}, {1, 2}, {3, 4}};

    for (int i = 0; i < size; i++)
    {   
        if(i == 0)
        {
            printf("From ");
        } else
        {
            printf(" to ");
        }
        printf("(%d %d)", path[i].x, path[i].y);
    }
    printf(".\n");

    //You can pass structs to functions
    logPosition(destination);

    //You can return structs from functions
    buildingPlan myPlan = createPlan("Caleb", 10, 10, 30, 30);

    printf("The house at %d %d (size %d %d) is owned by %s\n", 
            myPlan.position.x, 
            myPlan.position.y,
            myPlan.rectangle.length,
            myPlan.rectangle.width,
            myPlan.owner);

    //You can have structs that contain pointers
    int a = 10;
    int b = 10;
    pointers myPointers = { &a, &b };

    
    *myPointers.a = 9001;
    
    printf("value at destination of myPointers.a: %d\n", *myPointers.a);

    //And you can make pointers to structs

    buildingPlan *pointerToStruct = &myPlan;
    printf("The owner is %s\n", pointerToStruct->owner); //arrow operator to navigate struct pointer

    return 0;
}