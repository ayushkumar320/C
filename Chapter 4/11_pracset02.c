// Write a program to print multiplication table of 10 in reversed order

#include<stdio.h>

int main(void){
    for (int i = 10; i; i--){
        printf("10 x %d = %d\n", i, i*10);
    }
    return 0;
}