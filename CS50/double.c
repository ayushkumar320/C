// // Create an array of integers in which each integer is two times the value of previous integer. First element is 1.

#include<stdio.h>
int main(void){
    int x;
    printf("Enter the size: ");
    scanf("%d", &x);
    int array[x];
    array[0] = 1;
    printf("%d ", array[0]);
    for (int i = 1; i < x; i++){
        array[i] = array[i-1]*2;
        printf("%d ", array[i]);
    }
    return 0;
}