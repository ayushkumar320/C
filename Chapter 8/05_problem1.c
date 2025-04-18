/*
Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal.
*/
#include<stdio.h>

int main(){
    char st[6];
    printf("Enter the name\n ");
    for (int i = 0; i<5;  i++){
        scanf("%c", &st[i]);
        fflush(stdin);
    }
    st[5] = '\0';
    printf("%s", st);
    return 0;
}