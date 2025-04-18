// Implement a basic calculator to perform addition, subtraction, multiplication, and division

#include<stdio.h>

int main(void){
    int a, b, ans;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    getchar();
    char c;
    valid:
        printf("Enter the operation: ");
        scanf("%c", &c);
        switch (c){
            case '+':
                ans = a+b;
                break;
            case '-':
                ans = a-b;
                break;
            case '*':
                ans = a*b;
                break;
            case '/':
                ans = a/b;
                break;
            case '%':
                ans = a%b;
                break;
            default:
                printf("Invalid Opeartion!\n");
                goto valid;
                break;
            }
    printf("%d %c %d = %d\n", a, c, b, ans);
    return 0;
}