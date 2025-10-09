/*
Name:Judith Jepkurui
Reg no:PA106/G/29231/25
Description: Program to display Number_Guessing_Game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    int secretnumber, guess, number_of_guesses = 0;
    srand(time(0));

    secretnumber = rand() % 20+1;

    printf("Welcome to the Number Guessing Game! \n");
    printf("There is a secret number between 1 and 20.\n");

    guess = 0;
    while (guess != secretnumber){
        printf("Enter your guess: ");
        scanf("%d", &guess);
        number_of_guesses++;

        if (guess > secretnumber){
            printf("Too high!\n");
        } else if (guess < secretnumber){
        printf("Too low!\n");
        }
    }

    printf("Congratulations! You guessed the secret number: %d\n", secretnumber);
    printf("You took %d guesses to guess correctly.\n", number_of_guesses);
    return 0;
}
