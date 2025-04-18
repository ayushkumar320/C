#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
} emp;
int main(){
    typedef int riyal;
    riyal a = 34;
    printf("The value of a is %d", a);
    
    emp e1;
    e1.salary = 33.2;
    e1.code = 101;
    printf("\n%d %f", e1.code, e1.salary);
    return 0;
}