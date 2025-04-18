#include<stdio.h>

int main(){
    int a;
    printf("Enter your value: ");
    scanf("%d", &a);
    // %d - Integer
    // %f - float
    // %c - char 
    /*
    ‘&’ is the “address of” operator and it means that the supplied value should be copied
    to the address which is indicated by variable a.*/
    printf("The value of a is: %d\n", a);
    return 0;
}