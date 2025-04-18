#include<stdio.h>
int main(void){
    const int i = 30;
    const int *ptr = &i; // const int pointer
    // i = 40; gives error
    printf("%d", *ptr);
    return 0;
}