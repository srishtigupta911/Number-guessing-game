#include <iostream>
#include <cstdlib>
#include <ctime>

void guessTheNumber() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int numberToGuess = std::rand() % 100 + 1;
    int userGuess = 0;

    std::cout << "Welcome to the Guess the Number Game!\n";
    std::cout << "I have selected a random number between 1 and 100.\n";
    std::cout << "Try to guess it!\n";

    // Loop until the user guesses the correct number
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again.\n";
        } else if (userGuess > numberToGuess) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You've guessed the correct number.\n";
            break;
        }
    }
}

int main() {
    guessTheNumber();
    return 0;
}
