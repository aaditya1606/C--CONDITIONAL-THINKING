/*
PROGRAM: CHECK WHETHER ANY OF THE TWO NUMBERS IS MULTIPLE OF OTHER OR NOT
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 % num2 == 0 || num2 % num1 == 0)
    {
        printf("Multiple exists!!");
    }
    else
    {
        printf("Multiple does not exists!!");
    }
    return 0;
}