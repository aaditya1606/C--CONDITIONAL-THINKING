/*
PROGRAM: CHECK WHETHER THE NUMBER LIES WITHIN THE RANGE[100,999]
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number >= 100 && number <= 999)
    {
        printf("Number LIES within the range!!");
    }
    else
    {
        printf("Number does NOT LIES within the range!!");
    }
    return 0;
}