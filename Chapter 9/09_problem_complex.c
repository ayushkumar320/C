// Write a program with a structure representing a complex number
#include<stdio.h>

typedef struct complexNum {
    int real;
    int img;
} com;

int main(){
    com o1;
    o1.real = 7;
    o1.img = 11;
    printf("The complex number is: %d + %di", o1.real, o1.img);
    return 0;
}