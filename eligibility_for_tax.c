/*
PROGRAM: CHECK WHETHER A PERSON IS ELIGIBLE FOR TAX OR NOT
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    float income;
    int age;
    printf("Enter your age (in yrs): ");
    scanf("%d", &age);
    printf("Enter your Income (in LPA): ");
    scanf("%f", &income);
    if (age > 0 && income > 0)
    {
        if (age >= 18 && income >= 5)
        {
            printf("YOU ARE ELIGIBLE FOR TAX!!");
        }
        else
        {
            printf("YOU ARE NOT ELIGIBLE FOR TAX!!");
        }
    }
    else
    {
        printf("INVALID!!");
    }
    return 0;
}