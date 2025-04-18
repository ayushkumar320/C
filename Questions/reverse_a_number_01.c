// WAP to reverse the digits of a number

#include<stdio.h>
int reverse(int n);
int main(void){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int k = reverse(n);
    printf("%d", k);
    return 0;
}

int reverse(int n){
    int reverse = 0; 
    int remainder;
    while(n!=0){
        remainder = n % 10;
        reverse = reverse*10 + remainder;
        n = n/10; // makes n shorter and shorter
    }
    return reverse;
}