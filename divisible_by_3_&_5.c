/*
PROGRAM: CHECK WHETHER A NUMBER IS DIVISIBLE BY BOTH 3 & 5
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main(){
    int number;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &number);
    if(number%3==0 && number%5==0){
        printf("%d is DIVISIBLE by BOTH 3 & 5",number);
    }
    else{
        printf("%d is NOT DIVISIBLE by BOTH 3 & 5",number);
    }
    return 0;
}