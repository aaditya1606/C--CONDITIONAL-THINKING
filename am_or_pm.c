/*
PROGRAM: TAKE 24 HOUR TIME AND CHECK WHETHER IT IS AM OR PM
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int thour;
    printf("Enter the hour(0-23): ");
    scanf("%d", &thour);
    if (thour >= 0 && thour <= 23)
    {
        if (thour >= 0 && thour < 12)
        {
            printf("AM!");
        }
        else
        {
            printf("PM!");
        }
    }
    else
    {
        printf("ENTER VALID TIME!!");
    }
    return 0;
}
