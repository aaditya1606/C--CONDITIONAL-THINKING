/*
PROGRAM: CHECK WHETHER THE GIVEN THREE SIDES FORMS A VALID TRIANGLE OR NOT
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int side1, side2, side3;
    int valid_flag = 0;
    printf("Enter the first side of triangle: ");
    scanf("%d", &side1);
    printf("Enter the second side of triangle: ");
    scanf("%d", &side2);
    printf("Enter the third side of triangle: ");
    scanf("%d", &side3);
    if (((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2))
    {
        valid_flag = 1;
    }
    if (valid_flag == 1)
    {
        printf("The given dimensions forms a VALID TRIANGLE!!");
    }
    else
    {
        printf("The given dimensions do NOT form a VALID TRIANGLE!!");
    }
    return 0;
}