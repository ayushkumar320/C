#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    int* ptr;
    ptr = (int*) malloc (n * sizeof(int));
    // int arr[n]; // not allowed in C
    ptr[0] = 3;
    ptr[1] = 6;
    printf("%d", ptr[0]);
    return 0;
}