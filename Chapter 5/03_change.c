#include<stdio.h>

int change(int);

int main(){
    int b = 32;
    change(b); // does not change
    printf("The value of b is: %d", b);
    return 0;

}

int change(int a){
    a = 77;
    return 0;
}