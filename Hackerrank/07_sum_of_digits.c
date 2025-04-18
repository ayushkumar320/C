#include<stdio.h>

int main(){
    int n, sum;
    printf("Enter the 5 digit number: ");
    scanf("%d", &n);
    sum = (n/10000) + (n/1000)%10 + (n/100)%10 + (n/10)%10 + (n%10); 
    printf("%d", sum);
    return 0;
}