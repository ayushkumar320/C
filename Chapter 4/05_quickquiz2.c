// Write a program to print first ‘n’ natural number using do-while loop

#include<stdio.h>

int main(){
    int n;
    printf("Enter the nth natural numbers you want to print: ");
    scanf("%d", &n);
    int k = 0;
    do{
        printf("%d\n", k);
        k++;
    } while (k<=n);
    return 0;
}