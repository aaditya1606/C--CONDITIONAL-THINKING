/*
PROGRAM: PRINTS DAY'S NAME FROM DAY'S NUMBER OF THE WEEK
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int day;
    printf("Enter the day number(1-7): ");
    scanf("%d", &day);
    if (day > 0 && day <= 7)
    {
        switch (day)
        {
        case 1:
            printf("DAY: MONDAY");
            break;
        case 2:
            printf("DAY: TUESDAY");
            break;
        case 3:
            printf("DAY: WEDNESDAY");
            break;
        case 4:
            printf("DAY: THURSDAY");
            break;
        case 5:
            printf("DAY: FRIDAY");
            break;
        case 6:
            printf("DAY: SATURDAY");
            break;
        case 7:
            printf("DAY: SUNDAY");
            break;
        }
    }
    else
    {
        printf("INVALID DAY!!");
    }
    return 0;
}