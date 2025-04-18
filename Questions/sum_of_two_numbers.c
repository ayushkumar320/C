// WAP to calculate sum of two numbers

#include<stdio.h>

int sum(int, int);
int main(void){
    int a, b;
    printf("Enter two numbers a and b respectively\n");
    scanf("%d %d", &a, &b);
    printf("Sum is: %d", sum(a, b));
    return 0;
}

int sum(int a, int b){
    return a+b;
}