#include<stdio.h>

int main(){

    char st[4];
    scanf("%s", st); // no &st
    printf("%s", st);
    return 0;
}