/*
PRODUCT: TAKE A THREE DIGIT NUMBER AND CHECK IF THE SUM OF THE FIRST AND THE LAST DIGIT OF NUMBER EQUALS THE MIDDLE DIGIT OR NOT
LANGUAGE: C
AUTHOR-AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("ENTER A THREE-DIGIT-NUMBER: ");
    scanf("%d", &number);
    int ones, tens, hundred;
    if (number >= 100 && number < 1000)
    {
        ones = number % 10;
        tens = (number / 10) % 10;
        hundred = number / 100;
        if (ones + hundred == tens)
        {
            printf("TRUE!!");
        }
        else
        {
            printf("FALSE!!");
        }
    }
    else
    {
        printf("INVALID!!");
    }
    return 0;
}