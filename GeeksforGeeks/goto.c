#include<stdio.h>
void printnumber(void);

int main(void){
    printnumber();
    return 0;
}

void printnumber(void){
    int n = 1;
    label:
        printf("%d ", n);
        n++;
        if (n<11){
            goto label;
        }
}


