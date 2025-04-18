#include<stdio.h>
int main(){
    int a = 4;
    printf("%d %d %d", a, ++a, a++);
    // Output - 6, 4, 4 How??! - evaluation order is right to left!
    // Output - 4 5 5 bhi sahi h, both are correct! agar compiler ka evaluation order left to right h!
    return 0;
}