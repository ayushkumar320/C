#include<stdio.h>

int max_of_four(int a, int b, int c, int d);
int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max = max_of_four(a, b, c, d);
    printf("%d", max);
    return 0;
}

int max_of_four(int a, int b, int c, int d){
    int max;
    if (a>b && a>c && a>d){
        return max = a;
    }
    else if(b>a && b >c && b>d){
        return max = b;
    }
    else if(c>a && c>b && c>d){
        return max = c;
    }
    else{
        return max = d;
    }
}

