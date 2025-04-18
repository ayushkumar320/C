#include<stdio.h>

int factorial(int);

int main(void){
    int s;
    printf("Enter the number : ");
    scanf("%d", &s);
    printf("Factorial: %d\n", factorial(s));
    return 0;
}

int factorial(int n){
    if (n < 0){
        return 0;
    }
    if (n == 0){
        return 1;
    }
    n = n*factorial(n-1);
    return n;
}