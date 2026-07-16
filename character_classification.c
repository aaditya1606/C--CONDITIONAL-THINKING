/*
PROGRAM: CLASSIFY THE GIVEN CHARACTER AS UPPERCASE/LOWERCASE/DIGIT/SPECIAL CHARACTER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    char character;
    printf("Enter the character: ");
    scanf(" %c", &character);
    if (character >= 'a' && character <= 'z')
    {
        printf("Lower Case");
    }
    else if (character >= 'A' && character <= 'Z')
    {
        printf("Upper Case");
    }
    else if (character >= 48 && character <= 57)
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}