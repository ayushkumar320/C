#include<stdio.h>
int main(){
    int marks[5];
    printf("Enter the marks of 5 students\n");
    
    for(int i = 0; i<5; i++){
        scanf("%d", &marks[i]);
    }
    for(int i = 0; i<5; i++){
        printf("The marks of student at index %d is: %d\n", i, marks[i]);
    }
    return 0;
}