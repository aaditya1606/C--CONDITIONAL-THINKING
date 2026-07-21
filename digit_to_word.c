/*
PROGRAM: TAKE A DIGIT FROM 0-9 AND PRINT ITS WORD FROM 'ZERO' TO 'NINE'
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &number);
    if (number >= 0 && number <= 9)
    {
        switch (number)
        {
        case 0:
            printf("ZERO!");
            break;
        case 1:
            printf("ONE!");
            break;
        case 2:
            printf("TWO!");
            break;
        case 3:
            printf("THREE!");
            break;
        case 4:
            printf("FOUR!");
            break;
        case 5:
            printf("FIVE!");
            break;
        case 6:
            printf("SIX!");
            break;
        case 7:
            printf("SEVEN!");
            break;
        case 8:
            printf("EIGHT!");
            break;
        case 9:
            printf("NINE!");
            break;
        }
    }
    else
    {
        printf("ENTER A SINGLE DIGIT NUMBER!");
    }
    return 0;
}