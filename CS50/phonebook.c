#include<stdio.h>
#include<string.h>

int main(void){ 
    char* names[] = {"Carter", "David", "John"};
    char* numbers[] = {"+1-672-232-1000", "+1-672-882-1000", "+1-233-454-2341"};
    char name[20];
    printf("Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    for (int i = 0; i < 3; i++){
        if (strcmp(names[i], name) == 0){
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;
}