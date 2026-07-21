/*
PROGRAM: TAKE THE DAY NUMBER OF A WEEK TO DETERMINE IF IT IS WEEKDAY OR WEEKEND
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int day_number;
    printf("Enter the day number(1-7): ");
    scanf("%d", &day_number);
    if (day_number >= 1 && day_number <= 7)
    {
        switch (day_number)
        {
        case 1:
            printf("WEEKDAY!");
            break;
        case 2:
            printf("WEEKDAY!");
            break;
        case 3:
            printf("WEEKDAY!");
            break;
        case 4:
            printf("WEEKDAY!");
            break;
        case 5:
            printf("WEEKDAY!");
            break;
        case 6:
            printf("WEEKEND!");
            break;
        case 7:
            printf("WEEKEND!");
            break;
        }
    }
    else
    {
        printf("INVALID DAY NUMBER!!");
    }
}