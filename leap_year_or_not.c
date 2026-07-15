/*
PROGRAM: CHECK WHETHER THE GIVEN YEAR IS LEAP YEAR OR NOT
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main(){
    int year;
    printf("ENTER THE YEAR: ");
    scanf("%d", &year);
    if((year%4==0 && year%100!=0)||year%400==0){
        printf("%d is a LEAP YEAR",year);
    }
    else{
        printf("%d is NOT A LEAP YEAR",year);
    }
    return 0;
}