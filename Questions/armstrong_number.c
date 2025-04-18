// Write a program to check if a number is an Armstrong number.
#include<stdio.h>
#include<math.h>
int check(int);
int power(int, int);
int main(void){
    int a;
    printf("Enter the number to check: ");
    scanf("%d", &a);
    int q = check(a);
    if (a == q){
        printf("%d is an Armstrong number!\n", a);
    }
    else{
        printf("%d is not an Armstrong number!\n", a);
    }
    return 0;
}

int check(int a){
    int original = a;
    int remainder;
    int sum = 0, digits = 0;
    while(a!=0){
        a = a/10;
        digits++;
    }
    while(original!=0){
        remainder = original%10;
        sum = sum + power(remainder, digits); // pow deals with double, so create our own power function
        original = original/10;
    }
    return sum;
}

int power(int base, int exponent){
    int result = 1;
    for (int i = 0; i < exponent; i++){
        result = base*result;
    }
    return result;
}
