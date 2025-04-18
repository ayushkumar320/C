#include<stdio.h>
int main(){
    
    char st[] = {'a', 'b', 'c', '\0'}; // \0 is a null character.
    for (int i = 0; i<3; i++){
        printf("The characters in string is: %c\n", st[i]);
    }

    char str[] = "AYUSH";
    for (int i = 0; i<5; i++){
        printf("%c", str[i]);
    }
    return 0;
}