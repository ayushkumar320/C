/*Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function. The values must be taken as an input from the user*/
#include<stdio.h>
typedef struct complex{
    int real;
    int img;
} com;
void display(com c);
int main(){
    com carr[5];
    for (int i = 0; i <5; i++){
        printf("Enter the real part: ");
        scanf("%d", &carr[i].real);
        printf("Enter the imaginary part: ");
        scanf("%d", &carr[i].img);
        display(carr[i]);
    }   
    return 0;
}

void display(com c){
    printf("The complex is: %d + %di\n", c.real, c.img);
}