#include<stdio.h>

int main(){
    int m1, m2, m3;
    printf("Enter the marks in Maths: ");
    scanf("%d", &m1);
    printf("Enter the marks in Physics: ");
    scanf("%d", &m2);
    printf("Enter the marks in Chemistry: ");
    scanf("%d", &m3);
    int total;
    total = ((m1+m2+m3)/300.0)*100;
    if (total >= 40){
        if (m1 >= 33 && m2 >= 33 && m3 >= 33){
            printf("Pass!");
        }
        else{
            printf("Failed in individual subject!");
        }
    }
    else{
        printf("Failed!");
    }
    return 0;
}