// Write a code to check whether inputed string is alphabetical or not
#include<stdio.h>
#include<string.h>
int main(void){
    char st[50];
    printf("Enter the string: ");
    gets(st);
    for(int i = 0, length = strlen(st); i < length - 1; i++){
        if (st[i] > st[i+1]){
            printf("Not alphabetical!\n");
            return 0;
        }
    }
    printf("It is alphabetical!\n");
    return 0;
}