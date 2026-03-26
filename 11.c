#include <stdio.h>

int main(){
    float remainder;
    int input;

    printf("enter your number: ");
    scanf("%d", &input);

    remainder = input % 2;

    if(remainder == 0){
        printf("even\n");
    } else {

        printf("odd\n");
    }

}