/*
PROGRAM: CHECK WHETHER A PERSON IS ELIGIBLE TO VOTE OR NOT
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age(in years): ");
    scanf("%d", &age);
    if (age >= 0 && age <= 17)
    {
        printf("You are NOT ELIGIBLE to VOTE!!");
    }
    else if (age >= 18)
    {
        printf("You are ELIGIBLE to VOTE!!");
    }
    else
    {
        printf("INVALID AGE!!");
    }
    return 0;
}
