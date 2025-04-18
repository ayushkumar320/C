#include<stdio.h>

int sum(int, int); // This is Function Prototype

//Function Definiation
int sum(int x, int y){
    printf("The sum is: %d\n", x+y);
    return x+y;
}


int main(void){
    
    int a = 1;
    int b = 2;

    sum(a, b); // Function call

    int a1 = 3;
    int b1 = 31;
    sum(a1, b1);
    return 0;
}


