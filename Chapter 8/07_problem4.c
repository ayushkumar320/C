// Write your own version of strcpy function from <string.h>
#include<stdio.h>
#include<string.h>
void copy(char [], char []);
int main(){
    char s1[] = "Ayush";
    char s2[30];
    copy(s1, s2);
    printf("%s %s",s1,s2);
    return 0;
}

void copy(char st1[], char st2[]){
    for (int i = 0; i<strlen(st1); i++){
        st2[i] = st1[i];
    }
    st2[strlen(st1)] = '\0';
}


