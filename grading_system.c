/*
PROGRAM: PROVIDING THE CORRESPONDING GRADES TO THE ENTERED MARKS
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    if (marks > 80 && marks <= 100)
    {
        printf("Grades: %c", 'A');
    }
    else if (marks > 70 && marks <= 80)
    {
        printf("Grades: %c", 'B');
    }
    else if (marks > 60 && marks <= 70)
    {
        printf("Grades: %c", 'C');
    }
    else if (marks >= 33 && marks <= 60)
    {
        printf("Grades: %c", 'D');
    }
    else if (marks < 33)
    {
        printf("Grades: %c", 'F');
    }
    return 0;
}