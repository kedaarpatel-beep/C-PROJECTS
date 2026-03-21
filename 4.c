#include<stdio.h>

int main(){

    int width;
    int height;
    int area;
    printf("enter the width: ");
    scanf("%d", &width);
    printf("enter the height: ");
    scanf("%d", &height);

    area = width * height;

    printf("the area is %d", area);

}