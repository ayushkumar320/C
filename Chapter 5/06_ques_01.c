// Write a program using function to find average of three numbers.
#include<stdio.h>

float average(int, int, int);
int main(){
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    
    printf("The average of above numbers is: %f", average(a, b, c));
    return 0;
}

float average(int a, int b, int c){
    return (a+b+c)/3.0;
}