/*
PROGRAM: CHECK WHETHER A GIVEN INTEGER IS SINGLE DIGIT,DOUBLE DIGIT OR MULTI DIGIT
LANGUAGE: C
AUHTOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number < 10 && number >= 0)
    {
        printf("%d IS A SINGLE-DIGIT-NUMBER!", number);
    }
    else if (number >= 10 && number <= 99)
    {
        printf("%d IS A DOUBLE-DIGIT-NUMBER!", number);
    }
    else
    {
        printf("%d IS A MULTI-DIGIT-NUMBER!", number);
    }
    return 0;
}