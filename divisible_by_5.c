/*
PROGRAM: CHECK WHETHER A NUMBER IS DIVISIBLE BY 5 OR NOT
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if(number%5==0){
        printf("%d is DIVISIBLE BY 5!!",number);
    }
    else{
        printf("%d is NOT DIVISIBLE BY 5!!",number);
    }
    return 0;
}