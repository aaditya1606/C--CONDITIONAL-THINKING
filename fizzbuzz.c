/*
PROGRAM: PRINT 'FIZZ' IF THE NUMBER IS DIVISIBLE BY 3 AND 'BUZZ' IF IT IS DIVISIBLE BY 5 AND 'FIZZBUZZ' IF DIVISIBLE BY BOTH 3 AND 5
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number % 3 == 0 && number % 5 == 0)
    {
        printf("FIZZBUZZ");
    }
    else if (number % 3 == 0)
    {
        printf("FIZZ");
    }
    else if (number % 5 == 0)
    {
        printf("BUZZ");
    }
    else
    {
        printf("%d IS NEITHER DIVISIBLE BY 3 NOR BY 5", number);
    }
    return 0;
}