#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    srand(time(0));
    int player, computer = rand() % 3;
    printf("Choose: 0 - Snake, 1 - Water, 2 - Gun\n");
    scanf("%d", &player);
    if (player==0 && computer == 1){
        printf("Computer choose Water, hence you won!");
    }
    else if(player == 0 && computer == 2){
        printf("Computer choose gun, hence you lost!");
    }
    else if (player == 0 && computer == 0){
        printf("Computer choose Water, hence its a draw!");
    }
    else if(player == 1 & computer == 0){
        printf("Computer choose Snake, hence you lost!");
    }
    else if(player == 1 & computer == 1){
        printf("Computer choose Water, hence its a draw!");
    }
    else if(player == 1 & computer == 2){
        printf("Computer choose Gun, hence you won!");
    }
    else if(player == 2 & computer == 0){
        printf("Computer choose snake, hence you won!");
    }
    else if(player == 2 & computer == 1){
        printf("Computer choose Water, hence you lost!");
    }
    else if(player == 2 & computer == 2){
        printf("Computer choose gun, hence its a draw!");
    }
    else{
        printf("Invalid input!");
    }
    return 0;
}