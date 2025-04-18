#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("text.txt", "a");
    char c = fgetc(ptr);
    // printf("%c", c);
    fputc('c', ptr);
    return 0;
}