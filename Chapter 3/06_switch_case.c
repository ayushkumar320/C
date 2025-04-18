#include<stdio.h>
int main(void){
    int a;
    printf("Enter the value of a between 1 to 5: ");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("You entered 1");
            break;
        case 2:
            printf("You enetered 2");
            break;
        case 3:
            printf("Your enetered 3");
            break;
        case 4:
            printf("Your enetered 4");
            break;
        case 5:
            printf("Your enetered 5");  
            break;               
        default:
            printf("Nothing Matched!");
            break;
    }
    return 0;
}