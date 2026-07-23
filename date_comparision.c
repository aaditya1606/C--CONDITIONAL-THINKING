/*
PROGRAM: TAKE TWO DATES(DAY AND MONTH) AND DETERMINE WHICH ONE COMES FIRST
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int day1, day2, month1, month2;
    int valid1 = 0, valid2 = 0;
    printf("Enter the day1: ");
    scanf("%d", &day1);
    printf("Enter the month1: ");
    scanf("%d", &month1);
    printf("Enter the day2: ");
    scanf("%d", &day2);
    printf("Enter the month2: ");
    scanf("%d", &month2);
    if (month1 >= 1 && month1 <= 12)
    {
        if (month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12)
        {
            if (day1 >= 1 && day1 <= 31)
            {
                valid1 = 1;
            }
        }
        else if (month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11)
        {
            if (day1 >= 1 && day1 <= 30)
            {
                valid1 = 1;
            }
        }
        else
        {
            if (day1 >= 1 && day1 <= 28)
            {
                valid1 = 1;
            }
        }
    }
    if (month2 >= 1 && month2 <= 12)
    {
        if (month2 == 1 || month2 == 3 || month2 == 5 || month2 == 7 || month2 == 8 || month2 == 10 || month2 == 12)
        {
            if (day2 >= 1 && day2 <= 31)
            {
                valid2 = 1;
            }
        }
        else if (month2 == 4 || month2 == 6 || month2 == 9 || month2 == 11)
        {
            if (day2 >= 1 && day2 <= 30)
            {
                valid2 = 1;
            }
        }
        else
        {
            if (day2 >= 1 && day2 <= 28)
            {
                valid2 = 1;
            }
        }
    }
    if (valid1 == 1 && valid2 == 1)
    {
        if (month1 < month2)
        {
            printf("DATE THAT COMES FIRST: %02d/%02d", day1, month1);
        }
        else if (month1 > month2)
        {
            printf("DATE THAT COMES FIRST: %02d/%02d", day2, month2);
        }
        else
        {
            if (day1 < day2)
            {
                printf("DATE THAT COMES FIRST: %02d/%02d", day1, month1);
            }
            else if (day1 > day2)
            {
                printf("DATE THAT COMES FIRST: %02d/%02d", day1, month1);
            }
            else
            {
                printf("DATES ARE EQUAL!");
            }
        }
    }
    else
    {
        if (valid1 == 0)
        {
            printf("first date is invalid!\n");
        }
        if (valid2 == 0)
        {
            printf("second date is invalid!\n");
        }
    }
}