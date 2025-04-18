#include<stdio.h>
int main(void){
    int num1, num2, ans;
    char op;
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    printf("Enter the operator (+, -, *, /)\n");
    scanf(" %c", &op);
    switch(op){
        case '+':
            ans = num1+num2;
            break;
        case '-':
            ans = num1-num2;
            break;
        case '*':
            ans = num1*num2;
            break;
        case '/':
            ans = num1/num2;
            break;
        defualt:
            printf("Wrong Choice!\n");
    }
    printf("%d %c %d = %d\b",num1, op, num2, ans );
    return 0;
}
