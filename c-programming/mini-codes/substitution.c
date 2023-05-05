#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool is_valid_key(char key[]);

int main(void)
{
    char key[] = "vchprzgjntlskfbdqwaxeuymoi";

    char plaintext[] = "Hello, World";
    if (is_valid_key(key))
    {
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            // position -> 65 - letter
            if (isalpha(plaintext[i]) && (islower(plaintext[i])))
                printf("%c", tolower(key[(plaintext[i]) - 97]));

            else if (isalpha(plaintext[i]) && (toupper(plaintext[i])))
                printf("%c", toupper(key[plaintext[i] - 65]));

            else
                printf("%c", plaintext[i]);
        }
        printf("\n");
    }
}

bool is_valid_key(char key[])
{
    bool result = false;
    if (strlen(key) == 26)
    {
        result = true;
    }
    else
    {
        printf("Key must contain 26 characters.\n");
    }

    return result;
}