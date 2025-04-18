// Write a program to find the largest of three numbers.
#include<stdio.h>
int largest(int, int, int);
int main(void){
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    printf("Largest number among typed number is: %d", largest(a, b, c));
    return 0;
}

int largest(int a, int b, int c){
    if (a>b && a>c){
        return a;
    }
    else if(b > a && b > c){
        return b;
    }
    else if(c > a && c > b){
        return c;
    }
}