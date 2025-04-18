#include<stdio.h>
int main(void){
    int numbers[] = {20, 500, 1, 5, 100, 1, 50};
    int num_search;
    printf("Enter the number you want to search: ");
    scanf("%d", &num_search);
    // Linear search
    for (int i = 0; i < 7; i++){
        if(numbers[i] == num_search){
            printf("Found at index %d and position %d\n", i, i+1);
            return 0;
        }
    }
    printf("Not Found!\n");
    return 1;
}