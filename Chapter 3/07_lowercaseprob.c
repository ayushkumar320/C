#include<stdio.h>

int main(){
    char a;
    printf("Enter the character: ");
    scanf("%c", &a);
    int k = ("%d", a);
    if (k <= 90 && k >= 65){
        printf("You have entered uppercase!");
    }
    else if(k >= 97 && k <=122){
        printf("You have entered lowercase!");
    }
    else{
        printf("Wrong character entered!");
    }
    return 0;
}
