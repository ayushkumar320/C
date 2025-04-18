// Write a function and pass the value by reference.

#include<stdio.h>

int main(){
    int a = 44;
    int* k = &a;
    printf("The value of a by reference is: %d", *k);
    return 0;
}