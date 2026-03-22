#include<stdio.h>

int main( ){


    float principal;
    float rate;
    float time;
    float intrest;

    printf("enter your principal: ");
    scanf("%f",&principal);
    printf("enter your rate: ");
    scanf("%f",&rate);
    printf("enter your time: ");
    scanf("%f",&time);

    intrest = principal * rate * time / 100;

    printf("intrest is %.2f\n ", intrest);

}