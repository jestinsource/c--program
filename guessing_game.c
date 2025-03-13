# C Program: guessing_game.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number_to_guess, guess, number_of_tries;

    srand(time(NULL));
    number_to_guess = rand() % 100 + 1;

    printf("Welcome to the guessing game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");
    printf("Try to guess it!\n");

    number_of_tries = 0;
    while (guess != number_to_guess) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < number_to_guess) {
            printf("Too low! Try again.\n");
        } else if (guess > number_to_guess) {
            printf("Too high! Try again.\n");
        }

        number_of_tries++;
    }

    printf("Congratulations! You guessed the number in %d tries.\n", number_of_tries);

    return 0;
}

