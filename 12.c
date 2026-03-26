#include <stdio.h>

int main(){

    int year;
    printf("give any year: ");
    scanf("%d", &year);

    if(year % 4 == 0) {
        if(year % 100 == 0){
            if(year % 400 == 0 ){
                printf("leap year");
            }
            else{
                ("common year");
            }
        }
        else{
            printf("leap year");
        }
    }
    else{
        printf("common year");
    }

}