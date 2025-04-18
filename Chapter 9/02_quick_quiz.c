/*Write a program to store the details of 3 employees from user defined data.*/

#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[50];
};
int main(){
    struct employee e1, e2;
    printf("Enter the code of first employee: ");  
    scanf("%d", &e1.code);
    printf("Enter the name of first employee: ");
    scanf("%s", &e1.name);
    printf("Enter the salary of first employee: ");
    scanf("%f", &e1.salary);
    printf("The code of first employee is %d, name is %s and salary is %f", e1.code, e1.name, e1.salary);
    printf("\nEnter the code of second employee: ");  
    scanf("%d", &e2.code);
    printf("Enter the name of second employee: ");
    scanf("%s", &e2.name);
    printf("Enter the salary of second employee: ");
    scanf("%f", &e2.salary);
    printf("The code of second employee is %d, name is %s and salary is %f", e2.code, e2.name, e2.salary);
    return 0;
}