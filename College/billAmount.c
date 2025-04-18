#include<stdio.h>
int main(void){
    char name[20];
    int units;
    float amount, finalAmount, baseAmount, additionalCharge;
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter the units consumed: ");
    scanf("%d", &units);
    if(units<=200){
        amount = units*0.8;
    }
    else if(units>200 && units<=300){
        amount = 200*0.8 + (units-200)*0.9;
    }
    else{
        amount = 200*0.8+100*0.9+(units-300)*1;
    }
    baseAmount = amount+100;
    if(baseAmount > 400){
        finalAmount = baseAmount + baseAmount*0.15;
    }
    else{
        finalAmount = baseAmount;
    }
    printf("Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Amount to be paid: %0.3f\n", finalAmount);
    return 0;
}