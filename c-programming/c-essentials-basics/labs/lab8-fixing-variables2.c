#include <stdio.h>

int main()
{
    // int 60seconds = 60; --> wrong identifier name
    // int 60minutes = 50; --> wrong identifier name and value

    // Correct values and variables
    int sixty_seconds = 60;
    int sixty_minutes = 60;
    printf("One hour is %d seconds\n", sixty_seconds * sixty_minutes);
    return 0;
}