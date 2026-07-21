/*
PROGRAM: TAKE THE ELECTRICITY UNITS CONSUMED AND CALCULATE THE BILL AS PER THE SLABS
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    float units;
    float total = 0;
    printf("ENTER THE NUMBER OF UNITS CONSUMED: ");
    scanf("%f", &units);
    if (units >= 1 && units <= 100)
    {
        total = units * 2;
        printf("YOUR ELECTRICITY BILL: %.2f", total);
    }
    else if (units >= 101 && units <= 200)
    {
        total = units * 4;
        printf("YOUR ELECTRICITY BILL: %.2f", total);
    }
    else if (units >= 201 && units <= 500)
    {
        total = units * 6;
        printf("YOUR ELECTRICITY BILL: %.2f", total);
    }
    else if (units >= 501)
    {
        total = units * 8;
        printf("YOUR ELECTRICITY BILL: %.2f", total);
    }
    else
    {
        printf("INVALID UNITS!!");
    }
    return 0;
}