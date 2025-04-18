// Write a program to sum first ten natural numbers using while loop.

#include<stdio.h>
int main(void){
    int i = 0;
    int k = 0;
    while(i<=10){
        k = k+i;
        i++;
    }
    printf("The sum of first 10 natural number is: %d", k);
    return 0;
}