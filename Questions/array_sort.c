#include<stdio.h>
void printArr(int [], int);
void sort(int[], int);

int main(void){
    int arr[] = {2, 44, 65, 1, 4, 7, 82, 56};
    int n = 8;
    printf("Unsorted array\n");
    printArr(arr, n);
    printf("Sorted array\n");
    sort(arr, n);
    printArr(arr, n);
    return 0;
}

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort(int arr[], int n){
    int temp;
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}