// Write a function to convert Celsius temperature into Fahrenheit.

#include<stdio.h>

float temp(float);

int main(){
    float a;
    printf("Enter the temperature in degree celcius: ");
    scanf("%f", &a);
    printf("The temperature in degree fahrenheit is: %f", temp(a));
    
    return 0;
}

float temp(float celc){
    return (celc*9.0)/5.0 + 32;
}