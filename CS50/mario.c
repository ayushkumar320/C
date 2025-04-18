#include<stdio.h>
int main(void){
    int height;
    do{
        printf("Enter height: ");
        scanf("%d", &height);
    }while(height<1);
    for (int i = 0; i < height; i++){
        for (int spaces = 0; spaces < height - (i+1); spaces++){
            printf(" ");
        }
        for (int j = 0; j < i+1; j++){
            printf("#");
        }
        printf("  ");
        for (int k = 0; k < i+1; k++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}