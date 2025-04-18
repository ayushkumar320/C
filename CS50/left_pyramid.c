#include<stdio.h>
int main(void){
    int height;
    do{
        printf("Height: ");
        scanf("%d", &height);
    }while(height<1);
    for (int i = 0; i<height; i++){
        for (int j = 0; j<i+1; j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}