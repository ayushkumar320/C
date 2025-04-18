/*
Write a program to print the address of a variable. Use this address to get the
value of the variable.
*/

#include<stdio.h>
int main(){
    
    int a = 60;
    int* k =  &a;
    printf("The address of a in binary is: %u\n", &a);
    printf("The value of k in binary is: %d\n", *k);
    return 0;
}