#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(void){
    char s[30];
    printf("String: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    char* t = malloc(strlen(s)+1);
    for (int i = 0, n = strlen(s); i <= n; i++ ){
        t[i] = s[i];
        t[i] = toupper(t[i]);
    }
    printf("Copied string with capitalization is: %s", t);
    return 0;
}