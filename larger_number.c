/*
PROGRAM: CHECK WHICH OF THE TWO IS A LARGER NUMBER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number1, number2;
    printf("ENTER THE FIRST NUMBER: ");
    scanf("%d", &number1);
    printf("ENTER THE SECOND NUMBER: ");
    scanf("%d", &number2);
    if (number1 > number2)
    {
        printf("%d is LARGER NUMBER", number1);
    }
    else if (number2 > number1)
    {
        printf("%d is LARGER NUMBER", number2);
    }
    else
    {
        printf("BOTH are EQUAL NUMBERS", number1, number2);
    }
    return 0;
}