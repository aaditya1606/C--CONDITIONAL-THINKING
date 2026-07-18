/*
PROGRAM: CHECK WHETHER A NUMBER IS A MULTIPLE OF 7 OR ENDS WITH 7
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &number);
    int last_digit;
    last_digit = number % 10;
    if (number % 7 == 0 && last_digit == 7)
    {
        printf("%d IS A MULTIPLE OF 7 AND ENDS WITH 7 AS WELL!!", number);
    }
    else if (number % 7 == 0)
    {
        printf("%d is a MULTIPLE OF 7!!", number);
    }
    else if (last_digit == 7)
    {
        printf("%d ENDS WITH 7!!", number);
    }
    else
    {
        printf("%d IS NEITHER A MULTIPLE OF 7 NOR IT ENDS WITH 7", number);
    }
    return 0;
}