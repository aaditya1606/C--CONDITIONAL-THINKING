/*
PROGRAM: TO CHECK WHETHER BOTH THE NUMBERS ARE EVEN OR ODD OR ONE IS EVEN AND ONE IS ODD
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
    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        printf("Both are EVEN!!");
    }
    else if (num1 % 2 == 1 && num2 % 2 == 1)
    {
        printf("Both are ODD!!");
    }
    else
    {
        printf("ONE IS EVEN & ONE IS ODD!");
    }
    return 0;
}