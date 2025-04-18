// Write a program to create an array of 10 integers and store multiplication table of
//5 in it.

#include<stdio.h>

int main(){
    int table [10];
    int a;
    printf("Enter the table you want to print: ");
    scanf("%d", &a);
    for (int i = 0, k = 1; i<10 && k<=10; i++, k++){
        
        table[i] = a*k;
        printf("%d x %d = %d\n",a, k, table[i]);
    } 
    return 0;
}