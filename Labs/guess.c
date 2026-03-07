/*
Name: Julie Pokaran Vue
Student ID: 240575
Date: 07 March 2026
Course: IS301 Structured Programming

Algorithm: Guessing Game

1. Start
2. Generate a random number between 1 and 20
3. Display message "I am thinking of a number between 1 and 20"
4. Allow the user 5 attempts to guess the number
5. Repeat for each attempt (using a loop)
      a. Call a function to get the user's guess
      b. If guess equals the random number
            Print success message
            Terminate program
      c. If guess is less than the random number
            Print "Your guess is low. Try again"
      d. If guess is greater than the random number
            Print "Your guess is high. Try again"
6. If the user fails after 5 attempts
      Print sorry message and display the correct number
7. End
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
int getGuess();
void successMessage();
void sorryMessage(int number);
void hint(int guess, int number);

int main()
{
    int randomNumber;
    int guess;
    int i;

    srand(time(0));
    randomNumber = rand() % 20 + 1;

    printf("I am thinking of a number between 1 and 20.\n");

    for(i = 1; i <= 5; i++)
    {
        guess = getGuess();

        if(guess == randomNumber)
        {
            successMessage();
            return 0;
        }
        else
        {
            hint(guess, randomNumber);
        }
    }

    sorryMessage(randomNumber);

    return 0;
}

// Function to get user guess
int getGuess()
{
    int guess;
    printf("Can you guess what it is? ");
    scanf("%d", &guess);
    return guess;
}

// Function to print hint
void hint(int guess, int number)
{
    if(guess < number)
        printf("Your guess is low. Try again.\n");
    else if(guess > number)
        printf("Your guess is high. Try again.\n");
}

// Function to print success message
void successMessage()
{
    printf("Congratulations! You did it.\n");
}

// Function to print sorry message
void sorryMessage(int number)
{
    printf("Sorry. The number was %d.\n", number);
    printf("You should have gotten it by now.\n");
    printf("Better luck next time.\n");
}
