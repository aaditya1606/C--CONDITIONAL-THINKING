/*
PROGRAM: COMPUTING THE THIRD ANGLE OF A TRIANGLE IF THE OTHER TWO ARE GIVEN
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    float angle1, angle2, angle3;
    printf("Enter the first angle: ");
    scanf("%f", &angle1);
    printf("Enter the second angle: ");
    scanf("%f", &angle2);
    if ((angle1 > 0 && angle2 > 0) && (angle1 + angle2 < 180))
    {
        angle3 = 180 - (angle1 + angle2);
        printf("Third angle of the triangle: %.1f", angle3);
    }
    else
    {
        printf("INVALID TRIANGLE!!");
    }
    return 0;
}