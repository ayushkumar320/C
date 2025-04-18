#include<stdio.h>
int main(){
    int radius;
    printf("Enter the radius of the Circle: ");
    scanf("%d", &radius);
    float area = 3.14*radius*radius;
    printf("The area of the circle with radius %d is: %f\n", radius, area);
    return 0;
}