#include<stdio.h>
int main(){
    
    int n;
    printf("Enter the number to calculate its factorial: ");
    scanf("%d", &n);
    int product = 1;
    for (int i = 1; i<=n; i++){
        product = product*i;
    }
    printf("The factorial of the number is: %d", product);
    return 0;
}