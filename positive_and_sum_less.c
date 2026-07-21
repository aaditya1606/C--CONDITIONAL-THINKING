/*
PROGRAM:TAKE TWO NUMBERS AND CHECK IF BOTH OF THEM ARE POSITIVE AND THIER SUM IS LESS THAN 100
IF YES , PRINT 'TRUE'
ELSE , PRINT 'FALSE'
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
    int sum = num1 + num2;
    if(num1>0 && num2>0 && sum<100)
    {
        printf("TRUE!!");
    }
    else
    {
        printf("FALSE!!");
    }
    return 0;
}