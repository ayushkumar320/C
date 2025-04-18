#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[50];
};
int main()
{
    struct employee e1;
    e1.code = 111;
    struct employee *ptr;

    ptr = &e1;
    printf("%d\n", (*ptr).code);
    printf("%d", ptr->code); // Arrow operator
    return 0;
}