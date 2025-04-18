#include<stdio.h>
#include<math.h>
int main(){
    int a = 5;
    // POW returns double so use %f
    printf("The area of square is: %f", pow(a, 2));
    return 0;
}