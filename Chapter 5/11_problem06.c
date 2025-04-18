// Write a recursive function to calculate the sum of first ‘n’ natural numbers

#include<stdio.h>

int sum(int);

int main(){
    printf("Enter the nth term you want to sum in natural number: ");
    int a;
    scanf("%d", &a);
    printf("The sum till %d is: %d", a, sum(a));
    return 0;
}

int sum(int a){
    if (a==0){
        return 0;
    }
    else{
        return a + sum(a-1);
    }
}