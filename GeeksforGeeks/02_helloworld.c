#include<stdio.h>
int main(void){
    printf("hello, world!\n");
    // Printing hello world using puts();
    puts("hello, world!!\n");  

    // using char*

    char *st = "Hello, world\n";
    while(*st){
        putchar(*st++);
    } 
    return 0;
}