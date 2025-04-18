#include<stdio.h>

int main(){

    int celc;
    printf("Enter the temperature in degree celcius: ");
    scanf("%d", &celc);
    float farh;
    farh = (((celc*9.0)/5.0) + 32);
    printf("The given temperature in Fahrenheit is: %f\n", farh);
    return 0;
}