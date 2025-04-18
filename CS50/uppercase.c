#include<stdio.h>
#include<string.h>
int main(void){
    printf("Input: ");
    char st[30];
    gets(st);
    printf("Output: ");
    for(int i = 0; i < strlen(st); i++){
        if (st[i] >= 'a' && st[i] <= 'z'){
            printf("%c", st[i] - ('a' - 'A'));
        }
        else{
            printf("%c", st[i]);
        }
    }
    printf("\n");
    return 0;
}