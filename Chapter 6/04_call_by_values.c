#include<stdio.h>

int sum(int, int);
int main(){
    
    printf("The sum of 1 and 6 is: %d", sum(1,6));
    return 0;
}
int sum(int a, int b){
    return a+b;
}