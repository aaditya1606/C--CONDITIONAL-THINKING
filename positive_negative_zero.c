/*
PROGRAM: WHETHER A NUMBER IS POSITVE,NEGATIVE OR ZERO
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int number;
    printf("INSERT THE NUMBER: ");
    scanf("%d", &number);
    if(number>0){
        printf("%d is POSITIVE!!",number);
    }
    else if(number<0){
        printf("%d is NEGATIVE!!",number);
    }
    else{
        printf("%d is NEITHER POSITIVE NOR NEGATIVE!!",number);
    }
    return 0;
}