/*
PROGRAM: CHECK WHETHER THE FIRST AND THE LAST DIGITS OF A FOUR-DIGIT-NUMBER ARE SAME OR NOT
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int last_digit = number % 10;
    int first_digit = number / 1000;
    if (number >= 1000 && number <= 9999)
    {
        if (last_digit == first_digit)
        {
            printf("FIRST AND THE LAST DIGITS OF %d ARE EQUAL!!", number);
        }
        else
        {
            printf("FIRST AND THE LAST DIGIT OF %d ARE NOT EQUAL!", number);
        }
    }
    else
    {
        printf("INVALID NUMBER! ENTER A FOUR-DIGIT-NUMBER!");
    }
    return 0;
}