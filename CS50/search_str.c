// WAP to search strings!
#include<stdio.h>
#include<string.h>

int main(void){
    char* words[] = {"battleship", "boot", "thimble", "top hat", "iron", "cannon"};
    char s[20];
    printf("String: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (int i = 0; i < 6; i++){
        if (strcmp(words[i], s) == 0){
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}