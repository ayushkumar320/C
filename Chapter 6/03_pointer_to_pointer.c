#include<stdio.h>
int main(){
    
    int a = 32;
    int* j = &a;
    int** k = &j;

    printf("The address of a is: %u\n", j);
    printf("The address of j is: %u\n", k);

    printf("The value of k is: %u\n", *k);
    return 0;
}