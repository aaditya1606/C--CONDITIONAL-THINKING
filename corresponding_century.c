/*
PROGRAM: TAKE A YEAR AND PRINT CORRESPONDING CENTURY
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year > 0)
    {
        if (year >= 1 && year <= 100)
        {
            printf("FIRST CENTURY!");
        }
        else if (year >= 101 && year <= 200)
        {
            printf("SECOND CENTURY!");
        }
        else if (year >= 201 && year <= 300)
        {
            printf("THIRD CENTURY!");
        }
        else if (year >= 301 && year <= 400)
        {
            printf("FOURTH CENTURY!");
        }
        else if (year >= 401 && year <= 500)
        {
            printf("FIFTH CENTURY!");
        }
        else if (year >= 501 && year <= 600)
        {
            printf("SIXTH CENTURY!");
        }
        else if (year >= 601 && year <= 700)
        {
            printf("SEVENTH CENTURY!");
        }
        else if (year >= 701 && year <= 800)
        {
            printf("EIGHT CENTURY!");
        }
        else if (year >= 801 && year <= 900)
        {
            printf("NINETH CENTURY!");
        }
        else if (year >= 901 && year <= 1000)
        {
            printf("TENTH CENTURY!");
        }
        else if (year >= 1001 && year <= 1100)
        {
            printf("ELEVENTH CENTURY!");
        }
        else if (year >= 1101 && year <= 1200)
        {
            printf("TWELWETH CENTURY!");
        }
        else if (year >= 1201 && year <= 1300)
        {
            printf("THIRTEENTH CENTURY!");
        }
        else if (year >= 1301 && year <= 1400)
        {
            printf("FOURTEENTH CENTURY!");
        }
        else if (year >= 1401 && year <= 1500)
        {
            printf("FIFTEENTH CENTURY!");
        }
        else if (year >= 1501 && year <= 1600)
        {
            printf("SIXTEENTH CENTURY!");
        }
        else if (year >= 1601 && year <= 1700)
        {
            printf("SEVENTEENTH CENTURY!");
        }
        else if (year >= 1701 && year <= 1800)
        {
            printf("EIGHTEENTH CENTURY!");
        }
        else if (year >= 1801 && year <= 1900)
        {
            printf("NINETEENTH CENTURY!");
        }
        else if (year >= 1901 && year <= 2000)
        {
            printf("TWENTIETH CENTURY!");
        }
        else if (year >= 2001 && year <= 2100)
        {
            printf("TWENTYFIRST CENTURY!");
        }
    }
    else
    {
        printf("INVALID!!");
    }
    return 0;
}