/*
PROGRAM: PRINTS THE GREETINGS AS PER THE HOUR OF THE DAY ENTERED
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int hour;
    printf("Enter the hour(0-23): ");
    scanf("%d", &hour);
    if (hour >= 5 && hour <= 11)
    {
        printf("Good Morning!!");
    }
    else if (hour >= 12 && hour <= 16)
    {
        printf("Good Afternoon!!");
    }
    else if (hour >= 17 && hour <= 20)
    {
        printf("Good Evening!!");
    }
    else if ((hour >= 0 && hour <= 4) || (hour >= 21 && hour <= 23))
    {
        printf("Good Night!!");
    }
    else
    {
        printf("INVALID HOUR!!");
    }
    return 0;
}