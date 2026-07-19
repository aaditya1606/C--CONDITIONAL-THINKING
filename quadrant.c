/*
PROGRAM: FIND THE QUADRANT OF THE GIVEN POINT
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter the X-coordinate of the point: ");
    scanf("%f", &x);
    printf("Enter the Y-coordinate of the point: ");
    scanf("%f", &y);
    if (x > 0 && y > 0)
    {
        printf("Point(%.1f,%.1f) lies in FIRST QUADRANT!!", x, y);
    }
    if (x < 0 && y > 0)
    {
        printf("Point(%.1f,%.1f) lies in SECOND QUADRANT!!", x, y);
    }
    if (x < 0 && y < 0)
    {
        printf("Point(%.1f,%.1f) lies in THIRD QUADRANT!!", x, y);
    }
    if (x > 0 && y < 0)
    {
        printf("Point(%.1f,%.1f) lies in FOURTH QUADRANT!!", x, y);
    }
    if (x == 0 && y == 0)
    {
        printf("Point(%.1f,%.1f) lies on the ORIGIN!!", x, y);
    }
    return 0;
}