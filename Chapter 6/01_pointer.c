#include<stdio.h>
int main(){
    
    int i = 72;
    int* j = &i; // j is a pointer pointing to i
    // int* - used to create variable storing pointer
    int k = 67;
    printf("The address of i is: %p\n", &i);
    printf("The address of i is: %p\n", j);
    printf("The address of i is: %p\n", &k);

    printf("The value at address j is: %d\n", *j);
    printf("The value at address j is: %d\n", *(&i));
    // * - kya value h address pe, & - kya address h

    printf("The address of j is: %p\n", &j);
    return 0;
}