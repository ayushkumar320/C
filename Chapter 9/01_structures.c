#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[50];
};
int main(){
    struct employee e1, e2;
    e1.code = 101;
    e1.salary = 54.44;
    strcpy(e1.name, "Ayush");
    printf("%d %s %f", e1.code, e1.name, e1.salary);
    return 0;
}