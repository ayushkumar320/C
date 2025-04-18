#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    // Initialize random number generator
    srand(time(0));

    //Generate Random Number
    int randomNumber = (rand()%100) + 1 ;

    //Print Random Number
    // printf("Random Number is: %d\n", randomNumber);
    
    int guess;
    int number_of_guess = 0;

    do{
        printf("Guess the number between 1 to 100: ");
        scanf("%d", &guess);
        if (guess > randomNumber){
            printf("Lower number please\n");
        }
        else if (guess<randomNumber){
            printf("Higher Number please\n");
        }
        else{
            printf("Congrats!\n");
        }
        number_of_guess++;
    } while(guess != randomNumber);
    printf("You guessed the number in %d number of guesses!", number_of_guess);
    return 0;
}