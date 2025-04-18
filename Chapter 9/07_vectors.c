//Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
// The vectors must be two–dimensional.

#include<stdio.h>

struct vector{
    float i;
    float j;
};
struct vector sumVector(struct vector v1, struct vector v2){
    struct vector v3 = {(v1.i + v2.i), (v1.j + v2.j)};
    return v3;
}

int main(){
    struct vector v1 = {1, 4};
    struct vector v2 = {5, 6};
    struct vector v3 = sumVector(v1, v2);
    printf("Sum is: %0.1fi + %0.1fj", v3.i, v3.j);
    return 0;
}
