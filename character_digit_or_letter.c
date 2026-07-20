/*
PROGRAM: CHECK WHETHER A GIVEN CHARACTER IS DIGIT/LETTER/NEITHER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    char character;
    printf("Enter the character: ");
    scanf(" %c", &character);
    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
    {
        printf("IT'S A LETTER!!");
    }
    else if (character >= '0' && character <= '9')
    {
        printf("IT'S A DIGIT!!");
    }
    else
    {
        printf("IT'S NEITHER LETTER NOT DIGIT!!");
    }
}