#include<stdio.h>
int main(){
    
    int a = 45;
    int* ptr = &a;
    printf("The address of a is: %u\n", &a);
    printf("The address of a is: %u\n", ptr);
    ptr++; // integer pointe rhai toh 4 se increment hoga!
    printf("The value of ptr is: %u\n", ptr);
    return 0;
}