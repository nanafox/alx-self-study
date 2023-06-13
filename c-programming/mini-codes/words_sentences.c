#include <stdio.h>
#include "len.c"
#include <ctype.h>
#include "change_case.c"

int main(void)
{
    char word_or_sentence[150];
    printf("\nConvert word or sentence to upper case\n");
    printf("Message: ");

    // get word or sentence
    scanf("%[^\n]%*c", word_or_sentence);

    // convert lower case
    printf("\nOutput: ");
    for (int letter = 0, length = len(word_or_sentence); letter < length; letter++)
    {
        if (islower(word_or_sentence[letter]))
            printf("%c", to_upper(word_or_sentence[letter]));
        else
            printf("%c", word_or_sentence[letter]);
    }

    printf("\n");
    return 0;
}
