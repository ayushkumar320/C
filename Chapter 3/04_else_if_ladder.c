#include<stdio.h>
int main(){
    int age = 45;
    if (age > 40){
        printf("Your are above 18 and you are mature enough\n");
    }
    else if(age > 18){
        printf("Your are above 18!\n");
    }
    else{
        printf("You are not above 18!\n");
    }
    return 0;
}