// WAP to calc area of a triangle

#include<stdio.h>

void main(void){
    int base, height;
    float area;
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);
    printf("Enter the base of the triangle: ");
    scanf("%d", &base);
    area = (base*height) / 2.0; 
    printf("Area of triangle with base %d and height %d is %0.2f\n", base, height, area);   
}