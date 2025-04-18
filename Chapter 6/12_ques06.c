// Write a program to print the value of a variable i by using “pointer to pointer” type
//of variable.

#include<stdio.h>
int main(){
    int a = 45;
    int*a1 = &a;
    int**a2 = &a1; // Pointer to Pointer so double **

    printf("The value of a is: %d\n", **a2);
    return 0;
}