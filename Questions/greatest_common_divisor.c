// Implement a program to find the greatest common divisor (GCD) of two numbers.

#include<stdio.h>

int main(void){
    int n1, n2;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    int k;
    if (n1 >= n2){
        k = n2;
    }
    else{
        k = n1;
    }
    int div;
    for (int i = 1; i <= k; i++){
        if (n1%i == 0 && n2%i == 0){
            div = i;
        }
    }
    printf("Greatest common divisor is: %d\n", div);
    return 0;
}