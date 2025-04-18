#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("no_file.txt", "r");
    int num;
    if (ptr == NULL){
        printf("The file does not exists!");
    }
    else{
        fscanf(ptr, "%d", &num);
        printf("The number is %d", num);   
        fclose(ptr);
    }
    return 0;
}