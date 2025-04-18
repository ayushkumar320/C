// Create a two-dimensional vector using structures in C.
#include<stdio.h>
struct vect{
    float x;
    float y;
};

int main(){
    struct vect v1, v2;
    v1.x = 12;
    v1.y = 7;
    v2.x = 11;
    v2.y = 13;
    printf("%0.2fi + %0.2fj", v1.x, v1.y);
    return 0;
}