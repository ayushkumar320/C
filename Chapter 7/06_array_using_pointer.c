#include<stdio.h>
int main(){
    int marks[] = {12, 56, 72, 96};
    // int* ptr = &marks[0];
    int* ptr = marks; // Same as above int* ptr = &marks[0]
    
    for(int i = 0; i<4; i++){
        printf("The marks at index %d using pointer is: %d\n",i, *ptr);
        ptr++;
    }

    return 0;
}