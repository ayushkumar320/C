#include<stdio.h>

int main(){
    int n;
    int prime = 1;
    printf("Enter the number you want to check: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++){
        if (n%i == 0){
            prime = 0;
            break;
        }
    }
    if (prime){
        printf("Your number is prime!");
    }
    else{
        printf("Your number is non prime!");
    }
    return 0;
}
