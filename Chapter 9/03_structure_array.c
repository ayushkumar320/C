#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[50];
};
int main(){
    struct employee facebook[100];
    facebook[0].code = 34;   
    facebook[1].code = 77;
    struct employee ayush = {101, 54.44, "Ayush"};
    printf("%d %f %s", ayush.code, ayush.salary, ayush.name);
    return 0;
}