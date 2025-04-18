#include<stdio.h>

int main(){
    int n1, n2, n3, n4;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("Enter the third number: ");
    scanf("%d", &n3);
    printf("Enter the fourth number: ");
    scanf("%d", &n4);
    if (n1 > n2 && n1 > n3 && n1 > n4){
        printf("The greatest number is: %d", n1);
    }
    else if(n2> n1 && n2 > n3 && n2 > n4){
        printf("The greatest number is: %d", n2);
    }
    else if(n3 > n1 && n3 > n2 && n3 > n4){
        printf("The greatest number is: %d", n3);
    }
    else if (n1 == n2 && n1 == n3 && n1== n4){
        printf("All are equal");
    }
    else{
        printf("The greatest number is: %d", n4);
    }
    return 0;
}