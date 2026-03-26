#include<stdio.h>

int main(){

    char name[20];
    int age;
    float height;
    char grade;

    printf("enter your name: ");
    scanf("%s",name);

    printf("enter your age: ");
    scanf("%d",&age);

    printf("enter your height: ");
    scanf("%f",&height);

    printf("enter your grade(a single letter): ");
    scanf(" %c",&grade);


    printf("\nNAME: %s\nAGE: %d\nHEIGHT: %.2f\nGRADE: %c\n",name,age,height,grade);
}