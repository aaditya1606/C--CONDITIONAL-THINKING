/*
PROGRAM: TAKE COORDINATES(X,Y) AND CHECK IF POINT LIES ON X-AXIS,Y-AXIS OR AT THE ORIGIN
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the X-coordinate of the point: ");
    scanf("%d", &x);
    printf("Enter the Y-coordinate of the point: ");
    scanf("%d", &y);
    if ((x > 0 && y == 0) || (x < 0 && y == 0))
    {
        printf("(%d,%d) lies on the X-Axis!!", x, y);
    }
    else if ((x == 0 && y > 0) || (x == 0 && y < 0))
    {
        printf("(%d,%d) lies on the Y-Axis!!", x, y);
    }
    else if (x == 0 && y == 0)
    {
        printf("(%d,%d) lies at the Origin!!", x, y);
    }
    else
    {
        printf("(%d,%d) neither lies on any Axis nor at the Origin!!", x, y);
    }
    return 0;
}