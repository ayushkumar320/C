/*
Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array
*/

#include<stdio.h>

int main(){
    int marks[] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr = marks;
    printf("The value at index 2 is: %d", *(ptr+2)); 
    return 0;
}