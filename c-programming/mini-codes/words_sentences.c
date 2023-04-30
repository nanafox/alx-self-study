#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "change_case.c"

int main(void)
{
    char word_or_sentence[150];
    printf("\nConvert word or sentence to upper case\n");
    printf("Enter something: ");

    // get word or sentence
    scanf("%[^\n]%*c", word_or_sentence);

    // convert lower case
    printf("\nOutput: ");
    for (int letter = 0; letter < strlen(word_or_sentence); letter++)
    {
        if (islower(word_or_sentence[letter]))
            printf("%c", to_upper(word_or_sentence[letter]));
        else
            printf("%c", word_or_sentence[letter]);
    }

    printf("\n");
    return 0;
}