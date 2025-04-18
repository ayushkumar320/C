// Write a program to take an array of integers and find the sum of its elements.

#include<stdio.h>

int main(void){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int sum = 0;
    for (int i = 0; i < 6; i++){
        sum+= arr[i];
    }
    printf("Sum: %d\n", sum);
    return 0;
}