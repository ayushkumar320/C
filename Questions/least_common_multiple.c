// WAP to find LCM
// LCM = n1*n2/HCF(n1, n2)

#include<stdio.h>

int main(void){
    int n1, n2;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);
    int k;
    if (n1 > n2){
        k = n2;
    }
    else{
        k = n1;
    }
    int hcf;
    for (int i = 2; i <= k; i++){
        if (n1%k == 0 & n2%k == 0){
            hcf = i;
        }
    }
    int lcm = (n1*n2)/hcf;
    printf("HCF: %d\n", hcf);
    printf("LCM: %d\n", lcm);
    return 0;
}