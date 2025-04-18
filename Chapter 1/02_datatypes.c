#include<stdio.h>

int main(void){

    int a;
    a = 4; // integer takes 4 byte, 1 byte = 8 bits
    char b;
    b = 'A'; // char enclosed in single quotes take 1 byte space.
    float c;
    c = 3.14; // float also takes 4 bytes
    printf("%d %c %f\n", a, b, c);
    return 0; // return 0 - True, return 1- False (Exit status!)
}
