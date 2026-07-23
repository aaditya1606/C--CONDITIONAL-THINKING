/*
PROGRAM: TAKE AN INTEGER(1-9999) AND CHECK IF SUM OF ITS DIGITS IS GREATER THAN THE PRODUCT OF ITS DIGITS
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    int ones, tens, hundred, thousand;
    int sum = 0, product = 1;
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number > 0 && number < 10)
    {
        sum = number;
        product = number;
    }
    else if (number >= 10 && number < 100)
    {
        ones = number % 10;
        tens = number / 10;
        sum = ones + tens;
        product = ones * tens;
    }
    else if (number >= 100 && number < 1000)
    {
        ones = number % 10;
        tens = (number / 10) % 10;
        hundred = number / 100;
        sum = ones + tens + hundred;
        product = ones * tens * hundred;
    }
    else if (number >= 1000 && number < 10000)
    {
        ones = number % 10;
        tens = (number / 10) % 10;
        hundred = ((number / 10) / 10) % 10;
        thousand = number / 1000;
        sum = ones + tens + hundred + thousand;
        product = ones * tens * hundred * thousand;
    }
    else
    {
        printf("NUMBER SHOULD BE IN BETWEEN 1-9999");
    }
    if (number > 0 && number < 10000)
    {

        if (sum > product)
        {
            printf("SUM IS GREATER THAN PRODUCT!");
        }
        else if (sum == product)
        {
            printf("SUM AND PRODUCT ARE EQUAL!");
        }
        else
        {
            printf("SUM IS NOT GREATER THAN PRODUCT!");
        }
    }
    return 0;
}