#include<stdio.h>

int sum(int*, int*);
int main(){
    int x = 1;
    int y = 6;
    printf("The sum of 1 and 6 is: %d\n", sum(&x, &y));
    printf("The value of x is: %d", x);
    return 0;
}
int sum(int* a, int* b){
    *a = 11;
    return (*a + *b);
}