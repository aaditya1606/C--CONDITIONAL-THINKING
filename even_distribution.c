/*
PROGRAM: CHECK WHETHER AN AMOUNT CAN BE EVENLY DISTRIBUTED INTO 2000 AND 500 AND 100 RUPPEE NOTES
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int amount;
    int even_distribution_flag = 0;
    printf("Enter the Amount: ");
    scanf("%d", &amount);
    if (amount > 0)
    {
        if (((amount % 2000) % 500) % 100 == 0)
        {
            even_distribution_flag = 1;
        }
        if (even_distribution_flag == 1)
        {
            printf("EVEN DISTRIBUTION IS POSSIBLE!!");
        }
        else
        {
            printf("EVEN DISTRIBUTION IS NOT POSSIBLE!!");
        }
    }
    else
    {
        printf("Enter the amount POSITIVE!!");
    }
    return 0;
}