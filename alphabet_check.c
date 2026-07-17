/*
PROGRAM: CHECK WHETHER AN ALPHABET CHARACTER LIES BETWEEN 'A' & 'M' OR BETWEEN 'N' & 'Z'
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    char character;
    printf("Enter the Character: ");
    scanf(" %c", &character);
    if (character >= 'a' && character <= 'm' || character >= 'A' && character <= 'M')
    {
        printf("%c lies between 'A' & 'M'", character);
    }
    else if (character >= 'n' && character <= 'z' || character >= 'N' && character <= 'Z')
    {
        printf("%c lies between 'N' & 'Z'", character);
    }
    else
    {
        printf("INVALID CHARACTER!!");
    }
    return 0;
}