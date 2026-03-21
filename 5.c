#include<stdio.h>

int main(){
    float celcius;
    float farenheit;

    printf("enter the celcius: ");
    scanf("%f",&celcius);
    
    farenheit = celcius * (9.0/5) + 32;

    printf("farenheit is %f\n", farenheit);
}