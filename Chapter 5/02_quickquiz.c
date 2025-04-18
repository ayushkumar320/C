#include<stdio.h>

void morning();
void afternoon();
void night();
int main(){
    morning();
    afternoon();
    night();
    return 0;
}

void morning(){
    printf("Hello good morning!\n");
}

void afternoon(){
    printf("Hello good afternoon!\n");
}

void night(){
    printf("Bybyee! good night!\n");
}