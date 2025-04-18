/*
Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?
*/

#include<stdio.h>
int main(){
    
    int i = 44;
    int* k = &i;

    printf("The address of i is: %u\n", k);
    printf("The address of i is: %u\n", &i);
    printf("The value at address of i is: %d\n", *k);
    return 0;
}