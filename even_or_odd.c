/*
PROGRAM: CHECK WHETHER A NUMBER IS EVEN OR ODD
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
#include<stdlib.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if(number%2==0){
        printf("%d is EVEN!!",number);
    }
    else{
        printf("%d is ODD!!",number);
    }
    return 0;
}