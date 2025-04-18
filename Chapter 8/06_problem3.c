/*
Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
for slice
*/
#include<stdio.h>
char* slice(char st[], int , int );
int main(){
    
    char str[] = "Ayush is coding!";
    printf("%s", slice(str, 0, 11));
    return 0;
}

char* slice(char st[], int m, int n){
    char* ptr1 = &st[m];
    char* ptr2 = &st[n];
    st = ptr1;
    st[n] = '\0';
    return st ;
}
