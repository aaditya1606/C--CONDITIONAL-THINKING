/*
PROGRAM: CHECK WHETHER THE MIDDLE DIGIT OF A THREE-DIGIT-NUMBER IS SMALLEST/LARGEST/NEITHER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int ones = number % 10;
    int tens = (number / 10) % 10;
    int hundred = number / 100;
    if (number >= 100 && number <= 999)
    {
        if (tens > ones && tens > hundred)
        {
            printf("MIDDLE DIGIT IS LARGEST!");
        }
        else if (tens < ones && tens < hundred)
        {
            printf("MIDDLE DIGIT IS SMALLEST!");
        }
        else
        {
            printf("MIDDLE DIGIT IS NEITHER LARGEST NOR SMALLEST!");
        }
    }
    else
    {
        printf("INVALID NUMBER!! ENTER A THREE-DIGIT-NUMBER!");
    }
    return 0;
}