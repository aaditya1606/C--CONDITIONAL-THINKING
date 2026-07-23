/*
PROGRAM: TAKE THREE NUMBERS AND CHECK WHETHER THEY ARE IN GP OR NOT
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
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
    if (num2 * num2 == num1 * num3)
    {
        printf("NUMBERS ARE IN GP!");
    }
    else
    {
        printf("NUMBERS ARE NOT IN GP!");
    }
    return 0;
}