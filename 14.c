#include <stdio.h>

int main(){

    char op;
    float num1, num2;

    printf("enter an operator(+,-,*,/): ");
    scanf("%c", &op);
    printf("enter 1 num: ");
    scanf("%f", &num1);
    printf("enter 1 num: ");
    scanf("%f", &num2);



    switch(op) {

        case '+':
        printf("result: %.2f\n ", num1 + num2);
        break;

        case '-':
        printf("result: %.2f\n ", num1 - num2);
        break;

        case '/':
        printf("result: %.2f\n ", num1 / num2);
        break;

        case '*':
        printf("result: %.2f\n ", num1 *num2);
        break;


        


    }
}