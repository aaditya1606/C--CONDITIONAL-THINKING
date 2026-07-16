/*
PROGRAM: CHECK WHETHER A VALID TRIANGLE IS EQUILATERAL,ISOCELES OR SCALENE
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter the first side of the triangle: ");
    scanf("%d", &side1);
    printf("Enter the second side of the triangle: ");
    scanf("%d", &side2);
    printf("Enter the third side of the triangle: ");
    scanf("%d", &side3);
    if (((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2))
    {
        if ((side1 == side2) && (side2 == side3))
        {
            printf("The given triangle is EQUILATERAL TRIANGLE!!");
        }
        else if ((side1 == side2) || (side2 == side3) || (side3 == side1))
        {
            printf("The given triangle is ISOCELES TRIANGLE!!");
        }
        else
        {
            printf("The given triangle is SCALENE TRIANGLE!!");
        }
    }
    else
    {
        printf("THIS IS NOT A VALID TRIANGLE!!");
    }
    return 0;
}