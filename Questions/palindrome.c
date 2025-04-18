// Write a program to check if a number is a palindrome.

#include<stdio.h>

int reverse(int);
int main(void){
    int num;
    printf("Enter the number to check: ");
    scanf("%d", &num);
    int rev = reverse(num);
    if (num == rev){
        printf("It is a palindrome!\n");
    }
    else{
        printf("It is not a palindrome!\b");
    }
    return 0;
}

int reverse(int a){
    int remainder;
    int reverse = 0;
    do{
        remainder = a%10;
        reverse = 10*reverse + remainder;
        a = a/10;
    } while(a != 0);
    return reverse;
}