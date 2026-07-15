/*
PROGRAM: FIND THE LARGEST NUMBER IN THE GIVEN THREE NUMBERS
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number1, number2, number3;
    printf("ENTER THE FIRST NUMBER: ");
    scanf("%d", &number1);
    printf("ENTER THE SECOND NUMBER: ");
    scanf("%d", &number2);
    printf("ENTER THE THIRD NUMBER:");
    scanf("%d", &number3);
    int max;
    if (number1 > number2 && number1 > number3)
    {
        max = number1;
    }
    else if (number2 > number1 && number2 > number3)
    {
        max = number2;
    }
    else
    {
        max = number3;
    }
    printf("LARGEST NUMBER IN THE GIVEN 3 NUMBERS IS: %d",max);
    return 0;
}