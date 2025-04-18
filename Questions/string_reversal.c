#include<stdio.h>
#include<string.h>
void reverseString(char []);
int main(void){
    char st[100];
    printf("String: ");
    fgets(st, sizeof(st), stdin);
    reverseString(st);
    printf("Reversed: %s", st);
    return 0;
}

void reverseString(char st[]){
    int start = 0, end = 0;
    while(st[end] != '\0'){
        end++;
    }
    end--;
    while(start < end){
        char temp = st[start];
        st[start] = st[end];
        st[end] = temp;
        start++;
        end--;
    }
}