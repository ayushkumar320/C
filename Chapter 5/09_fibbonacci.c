// Write a program using recursion to calculate nth element of Fibonacci series.

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

// F(n)=F(n−1)+F(n−2)

#include<stdio.h>

int fibb(int);

int main(){
    int k;
    printf("Enter the nth position of fibbonacci series you want to know: ");
    scanf("%d", &k);
    printf("The %dth element of fibbonacci series is: %d", k, fibb(k));
    return 0;
}

int fibb(int a){
    if (a==1 || a==2){
        return a-1;
    }
    else{
        return  fibb(a-1) + fibb(a - 2);
    }
}