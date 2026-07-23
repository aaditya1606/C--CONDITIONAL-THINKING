/*
PROGRAM: TAKE TIME(IN HOURS AND MINUTES) AND PRINT THE SMALLER ANGLE BETWEEN THE HOUR AND MINUTE HAND
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int hour;
    int minute;
    float minuteangle, hourangle;
    float angle;
    printf("Enter the hours: ");
    scanf("%d", &hour);
    printf("Enter the minutes: ");
    scanf("%d", &minute);
    if (hour >= 0 && hour <= 23 && minute >= 0 && minute <= 59)
    {
        if (hour >= 12)
        {
            hour = hour - 12;
        }
        minuteangle = 6 * minute;
        hourangle = 30 * hour + minute * 0.5;
        if (hourangle > minuteangle)
        {
            angle = hourangle - minuteangle;
        }
        else
        {
            angle = minuteangle - hourangle;
        }
        if (angle > 180)
        {
            angle = 360 - angle;
        }
        printf("SMALLER ANGLE: %.1f degrees", angle);
    }
    else
    {
        printf("INVALID!!");
    }
    return 0;
}