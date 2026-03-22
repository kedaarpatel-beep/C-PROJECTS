#include<stdio.h>

int main(){

    int value1 = 1,value2 = 2, temp;

    printf("before, value1 = %d value 2 = %d",value1, value2);


    temp = value1;
    value1 = value2;
    value2 = temp;

    printf("after, value1 = %d, value2 = %d", value1, value2);

    //i can use comments now, gahhhhhhhhhhhhh


}