/*
PROGRAM: TELL WHETHER THE GIVEN TEMPERATURE IS COLD , HOT OR WARM
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main(){
    int temperature;
    printf("INSERT THE TEMPERATURE: ");
    scanf("%d", &temperature);
    if(temperature<=20){
        printf("%d is COLD",temperature);
    }
    else if(temperature>20 && temperature<30){
        printf("%d is WARM",temperature);
    }
    else{
        printf("%d is HOT",temperature);
    }
    return 0;
}