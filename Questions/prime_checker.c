// Write a program to check whether a given number is prime.

#include<stdio.h>

int main(void){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int prime = 1; // prime = 1 means non prime

    // checking the condition
    for (int i = 2; i < num; i++){
        if (num%i == 0){
            prime = 0;
        }
    }

    if (prime == 1){
        printf("Prime\n");
    }
    else{
        printf("Non prime\n");
    }
    return 0;
}