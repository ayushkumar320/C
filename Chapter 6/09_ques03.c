// Write a program to change the value of a variable to ten times of its current
//value

#include<stdio.h>

int increase(int*);

int main(){
    int n = 4;
    printf("Value: %d\n", increase(&n));
    return 0;
}

int increase(int* a){
    return 10*(*a);
}