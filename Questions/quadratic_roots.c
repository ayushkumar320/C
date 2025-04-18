#include<stdio.h>
#include<math.h>

int main(void){
    int a, b, c;
    printf("Enter a b and c values respectively of the quadratic equation: ");
    scanf("%d %d %d" , &a, &b, &c);
    int d = (b*b) - (4*a*c);
    if (d < 0){
        float real = (-b)/(2.0*a);
        float img = sqrt(-d)/(2*a);
        printf("Root 1: %0.2f + %0.2fi\n", real, img);
        printf("Root 2: %0.2f - %0.2fi\n", real, img);
    }
    else if(d >= 0){
        float root_1 = (-b - sqrt(d))/(2*a);
        float root_2 = (-b + sqrt(d))/(2*a);
        printf("Root 1: %0.2f\n", root_1);
        printf("Root 2: %0.2f\n", root_2);
    }
    else{
        printf("Invalid Opeartion!");
    }
    return 0;
}