#include<stdio.h>
int main(){
    
    int i = 5;
    printf("The value of i is: %d\n", i);

    // i++(Post increment operator) - pehle i ko print karo fir i me 1 add krke store karo
    printf("The value of i is: %d\n", i++); // i = 5 print and stores i = 6

    //++i - pehle i me ek add karo fir print karo
    printf("The value of i is: %d\n", ++i); //i was 6, usme 1 add karo and prints i = 7
    
    // similar for i-- and --i
    printf("The value of i is: %d\n", i--);
    printf("The value of i is: %d\n", i);
    return 0;
}