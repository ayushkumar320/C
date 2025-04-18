/*
Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s sq.
*/

#include<stdio.h>

float force(float);


int main(){
    float m;
    printf("Enter the mass of object in kilograms: ");
    scanf("%f", &m);
    printf("The force exerted by gravity on body is: %f Newtons", force(m));
    return 0;
}

float force(float mass){
    return (mass*9.8);
}