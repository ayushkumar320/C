// Write a program containing functions which counts the number of positive
//integers in an array

#include<stdio.h>

int positive(int arr[], int n);
int main(){
    int a [] = {-2, 4, -11, 8, 6,-12, 0};
    printf("No of positive numbers are: %d", positive(a, 7));
    return 0;
}

int positive(int arr[], int n){
    int no_of_positive = 0;
    for (int i = 0; i<n; i++){
        if(arr[i] > 0){
            no_of_positive++;
        }
    }
    return no_of_positive;
}