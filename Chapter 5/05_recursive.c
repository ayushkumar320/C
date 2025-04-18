// Use function recusrion to calculate the factorial

#include<stdio.h>

int factorial(int);

int main(){
    int a;
    printf("Enter the number of which factorial is to be calculated: ");
    scanf("%d", &a);
    int c = factorial(a);
    printf("The factorial of %d is: %d", a, c);
    return 0;
}

int factorial(int a){
    if (a == 0 || a == 1){
        return 1;
    }
    return factorial(a-1)*a;
}