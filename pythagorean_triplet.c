/*
PROGRAM: TAKE THREE NUMBERS AND CHECK IF THEY CAN FORM PYTHAGOREAN TRIPLET
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
    if (num1 > 0 && num2 > 0 && num3 > 0)
    {
        if ((num1 * num1 == num2 * num2 + num3 * num3) || (num2 * num2 == num1 * num1 + num3 * num3) || (num3 * num3 == num1 * num1 + num2 * num2))
        {
            printf("PYTHAGOREAN TRIPLET!!");
        }
        else
        {
            printf("NOT A PYTHAGOREAN TRIPLET!!");
        }
    }
    else
    {
        printf("INVALID VALUES!");
    }

    return 0;
}