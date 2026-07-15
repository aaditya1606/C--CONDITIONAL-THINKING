/*
PROGRAM: CHECK WHETHER A GIVEN CHARACTER IS VOWEL OR CONSONANT
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    char character;
    printf("ENTER THE CHARACTER: ");
    scanf("%c", &character);
    if ((character >= 65 && character <= 90) || (character >= 97 && character <= 122))
    {
        if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
        {
            printf("%c is a VOWEL", character);
        }
        else if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
        {
            printf("%c is a VOWEL", character);
        }
        else
        {
            printf("%c is a CONSONANT!", character);
        }
    }
    else
    {
        printf("INVALID INPUT");
    }
    return 0;
}