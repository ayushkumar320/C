/*
Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().
*/

#include<stdio.h>

int sum(int, int);
float average(int, int);
int main(){
    int a = 40;
    int b = 50;
    int* a1 = &a;
    int* b1 = &b;

    printf("Sum: %d\n", sum(*a1, *b1));
    printf("average: %f\n", average(*a1, *b1));
    return 0;
}
int sum(int a, int b){
    return a+b;
}
float average(int a, int b){
    return (a+b)/2.0;
}
