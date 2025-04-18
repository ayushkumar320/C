#include<stdio.h>

int main(){
    int p, t;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the time in years: ");
    scanf("%d", &t);
    float rate = 7.20;
    printf("The rate of the bank is: 7.20%% per annum\n");
    float simple;
    simple = (p*t*rate)/100;
    printf("The Simple Interest is: %f", simple);
    return 0;
}