/*
PROGRAM: TAKE THREE NUMBERS AND CHECK WHETHER THEY ARE IN AP OR NOT
LANGUAGE: C
AUTHOR- AADITYA SHAYKA
*/
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    if ((num2 - num1) == (num3 - num2))
    {
        printf("NUMBERS ARE IN AP!");
    }
    else
    {
        printf("NUMBERS ARE NOT IN AP!");
    }
    return 0;
}