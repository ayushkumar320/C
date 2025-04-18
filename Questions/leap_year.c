#include<stdio.h>

int main(void){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year % 4 == 0){
        printf("It's a leap year!\n");
    }
    else{
        printf("Not a leap year!\n");
    }
    return 0;
}