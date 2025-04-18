#include<stdio.h>
int main(void){
    int rows, i, j, k, spaces;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i=0; i<rows; i++){
        for (spaces=0; spaces<rows-i-1; spaces++){
            printf(" ");
        }
        for(j=1; j<=i+1;j++){
            printf("%d", j);
        }
        for(k=i; k>=1; k--){
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}