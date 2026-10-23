// 5 – Identify Character Type
// Problem Statement: Accept a single character and determine whether it is an uppercase alphabet,
// lowercase alphabet, digit, or special character. Use character comparisons without using library character-classification functions.

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    if (cValue >= 65 && cValue <= 90)
    {
        printf("Uppercase Character");
    }
    else if (cValue >= 97 && cValue <= 122)
    {
        printf("Lowercase Character");
    }
    else if (cValue >= 48 && cValue <= 57)
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
}
// void CheckCharacterType(char cValue)
// {
//     if (cValue >= 'A' && cValue <= 'Z')
//     {
//         printf("Uppercase Alphabet");
//     }
//     else if (cValue >= 'a' && cValue <= 'z')
//     {
//         printf("Lowercase Alphabet");
//     }
//     else if (cValue >= '0' && cValue <= '9')
//     {
//         printf("Digit");
//     }
//     else
//     {
//         printf("Special Character");
//     }
// }

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}