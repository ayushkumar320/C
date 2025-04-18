#include<stdio.h>

int quarters(int);
int dimes(int);
int nickel(int);
int penny(int);

int main(void){
    int cents;
    do{
        printf("Enter cents owed: ");
        scanf("%d", &cents);
    } while(cents<1);
    int q = quarters(cents);
    cents = cents - q*25;
    int d = dimes(cents);
    cents = cents - d*10;
    int n = nickel(cents);
    cents = cents - n*5;
    int p = penny(cents);
    cents = cents - p*1;
    int coins = q+n+d+p;
    printf("Minimum number of coins to be given: %d\n", coins);
    printf("Minimum number of quarter to be given: %d\n", q);
    return 0;
}

int quarters(int cents){
    return cents / 25;
}
int dimes(int cents){
    return cents / 10;
}
int nickel(int cents){
    return cents/5;
}
int penny(int cents){
    return cents/1;
}