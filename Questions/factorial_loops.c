#include<stdio.h>

int main(void){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int k = 1;
    for (int i = n; i > 0; i--){
        k = k*i;
    }
    printf("Factorial :%d", k);
    return 0;
}