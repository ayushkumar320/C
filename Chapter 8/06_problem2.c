// Write your own version of strlen function from <string.h>

#include<stdio.h>

int main(){
    printf("Enter your string: ");
    char st[30];
    gets(st);
    int i = 0;
    while (st[i]!= '\0')
    {
        i++;
    }
    printf("The length of string is: %d", i);
    return 0;
}