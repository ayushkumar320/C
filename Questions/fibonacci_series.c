// WAP to print fibonacci series
#include<stdio.h>

int fibb(int);
void print_fibb(int);

int main(void){
    int a;
    printf("Enter the nth term of fibonacci series: ");
    scanf("%d", &a);
    print_fibb(a);
    return 0;
}

int fibb(int n){
    if(n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else {
        return fibb(n-1) + fibb(n-2);
    }
}

void print_fibb(int n){
    for (int i = 0; i < n+1; i++){
        printf("%d ", fibb(i));
    }
    printf("\n");
}