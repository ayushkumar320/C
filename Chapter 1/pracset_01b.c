#include<stdio.h>
int main(){
    printf("Enter the length of the rectangle: ");
    int a;
    scanf("%d", &a);
    printf("Enter the width of the rectangle: ");
    int b;
    scanf("%d", &b);
    int c = a*b;
    printf("The area of rectangle is %d square units.", c);
    return 0;
}