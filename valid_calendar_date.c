/*
PROGRAM: TAKE DAY AND MONTH AND CHECK IF FORMS A VALID CALENDAR DATE OR NOT(ignoring leap year)
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int day;
    int month;
    printf("Enter the day: ");
    scanf("%d", &day);
    printf("Enter the month: ");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (day >= 1 && day <= 31)
        {
            printf("VALID DATE!!");
        }
        else
        {
            printf("INVALID INPUT!!");
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day >= 1 && day <= 30)
        {
            printf("VALID DATE!!");
        }
        else
        {
            printf("INVALID INPUT!!");
        }
    }
    else if (month == 2)
    {
        if (day >= 1 && day <= 28)
        {
            printf("VALID DATE!!");
        }
        else
        {
            printf("INVALID INPUT!!");
        }
    }
    else
    {
        printf("INVALID INPUT!!");
    }
    return 0;
}