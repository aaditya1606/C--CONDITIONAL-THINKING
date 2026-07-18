/*
PROGRAM: CHECK WHETHER ALL THE DIGITS OF A THREE-DIGIT-NUMBER ARE DISTINCT OR NOT
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
    if (number >= 100 & number <= 999)
    {
        if ((ones != tens) && (tens != hundred) && (hundred!=ones))
        {
            printf("All the digits of %d are DISTINCT!!", number);
        }
        else
        {
            printf("All the digits of %d are NOT DISTINCT!!", number);
        }
    }
    else
    {
        printf("INVALID NUMBER!! ENTER A THREE-DIGIT-NUMBER!!");
    }
    return 0;
}