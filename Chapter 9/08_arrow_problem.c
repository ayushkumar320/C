#include<stdio.h>
typedef struct emloyee{
    int code;
    int age;
} emp;
int main(){
    emp e1;
    e1.age = 19;
    e1.code = 47;
    emp *ptr;
    ptr = &e1;
    printf("%d %d", ptr->age, ptr -> code);
    printf("\n%d %d", (*ptr).code, (*ptr).age);
    return 0;
}