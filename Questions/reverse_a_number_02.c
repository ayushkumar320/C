#include<stdio.h>
int reverse(int);

int main(void){
    int n;
    printf("Enter the number to reverse: ");
    scanf("%d", &n);
    printf("Reversed Number: %d", reverse(n));
    return 0;
}

int reverse(int a){
    int reverse = 0;
    int remainder;
    do{
        remainder = a%10;
        reverse = 10*reverse + remainder;
        a = a/10;
    } while(a != 0);
    return reverse;
}