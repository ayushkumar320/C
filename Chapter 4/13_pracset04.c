#include<stdio.h>
int main(void){

    int k = 0 ;
    for (int i = 0; i <= 10; i++){
        k = k+i;
    }
    printf("Sum : %d\n", k);

    int l = 0;
    int m = 0;
    do{
        m = m+l;
        l++;
    } while (l<=10);
    printf("Sum is: %d", m);
    return 0;
}