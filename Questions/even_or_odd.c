// WAP to check whether a number is even or odd

#include<stdio.h>

void main(void){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n%2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}