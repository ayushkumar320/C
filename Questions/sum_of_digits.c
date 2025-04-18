#include<stdio.h>

int main(void){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    int sum = 0;
    int remainder;
    while(a!=0){
        remainder = a%10;
        sum += remainder;
        a = a/10;
    }
    printf("Sum of digits is: %d", sum);
    return 0;
}