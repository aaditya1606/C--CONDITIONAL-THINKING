/*
PROGRAM: PRINTING THE MEDIAN VALUE FROM THE GIVEN THREE NUMBERS
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number1, number2, number3;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    printf("Enter the third number: ");
    scanf("%d", &number3);

    if ((number1 >= number2 && number1 <= number3) || (number1 >= number3 && number1 <= number2))
    {
        printf("MEDIAN NUMBER: %d", number1);
    }
    else if ((number2 >= number1 && number2 <= number3) || (number2 >= number3 && number2 <= number1))
    {
        printf("MEDIAN NUMBER: %d", number2);
    }
    else if ((number3 >= number2 && number3 <= number1) || (number3 >= number1 && number3 <= number2))
    {
        printf("MEDIAN NUMBER: %d", number3);
    }
}