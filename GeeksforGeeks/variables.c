#include<stdio.h>

void function(void);

int main(void){
    printf("First call\n");
    function();
    printf("Second call\n");
    function();
    printf("Third call\n");
    function();
    return 0;
}

void function(void){
    static int x = 10;
    int y = 10;
    x = x+10;
    y = y+10;
    printf("\t Static: %d Local: %d\n", x, y);
}