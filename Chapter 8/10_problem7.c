// . Write a program to check whether a given character is present in a string or not
#include<stdio.h>
#include <string.h>

int main(){
    char st[40];
    printf("Enter the string: ");
    gets(st);
    for (int i = 0; i<strlen(st); i++){
        if (st[i]=='a'){
            printf("Yes a is present");
            break;
        }

    }
    return 0;
}
