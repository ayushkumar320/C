#include<stdio.h>
#include<math.h>

int main(void){
    int a, b, c, disc;
    float root1, root2, real, img;
    printf("Enter the a b and c of quadratic equantion\n");
    scanf("%d %d %d", &a, &b, &c);
    disc = b*b-4*a*c;
    if(disc>0){
        printf("It has real and distinct roots\n");
        root1 = (-b+sqrt(disc)/(2.0*a));
        root2 = (-b-sqrt(disc)/(2.0*a));
        printf("Root 1 = %0.3f\nRoot 2 = %0.3f\n", root1, root2);
    }
    else if(disc == 0){
        printf("It has real and equal roots\n");
        root1 = -b/(2*a);
        root2 = root1;
        printf("Root 1 = %0.3f\nRoot 2 = %0.3f\n", root1, root2);
    }
    else{
        printf("The roots are imaginary and conjugate\n");
        real = -b/(2.0*a);
        img = sqrt(fabs(disc));
        printf("Root 1 = %0.3f + %0.3fi\nRoot 2 = %0.3f - %0.3fi\n", real, img, real, img);
    }
    return 0;
}