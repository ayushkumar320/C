#include<stdio.h>
#include<string.h>
int main(){

    char ch;
    scanf("%c", &ch);
    char s[130];
    scanf("%s", s);
    char sen[30];
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}