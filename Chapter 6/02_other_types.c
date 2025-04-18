#include<stdio.h>
int main(){
    char i = 'A';
    char* j = &i; // j is a char pointer
    printf("The address of i is: %p\n", j);
    printf("The address of i is: %p\n", &i);
    printf("The value of j is: %c\n", *j);
    float k = 2.72;
    float* l = &k;
    printf("The address of k is: %p\n", l);
    printf("The address of k is: %p\n", &k);
    printf("The value of l is: %f\n", *l);
    return 0;
}