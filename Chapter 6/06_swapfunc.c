#include<stdio.h>
void swap(int*, int*);

int main(){
    int a = 4;
    int b = 5;
    printf("%d %d\n", a, b);   
    swap(&a, &b);
    printf("%d %d", a, b);   
    return 0;
}

void swap(int*a , int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}