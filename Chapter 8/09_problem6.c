// Write a program to count the occurrence of a given character in a string

#include<stdio.h>
#include<string.h>

int main(){
    int count = 0;
    char st[] = "hippopotomostrosisquipedaliophobia";
    for (int i = 0; i<strlen(st); i++){
        if(st[i] == 'o'){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}