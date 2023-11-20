#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned>(time(nullptr))); // Seed for random number generation

    int targetNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int attempts = 0;

    std::cout << "Welcome to Bob's Number Guessing Game!" << std::endl;
    std::cout << "Guess a number between 1 and 100" << std::endl;

    while (true) {
        int guess;
        std::cin >> guess;

        if (std::cin.fail()) {
            // Handle non-integer input
            std::cin.clear(); // Clear the failbit
            std::cin.ignore(INT_MAX, '\n'); // Ignore invalid input
            std::cerr << "Invalid input. Please enter a number." << std::endl;
            continue;
        }

        attempts++;

        if (guess == targetNumber) {
            std::cout << "Congratulations! You guessed the correct number in "
                      << attempts << " attempts." << std::endl;
            std::cout << "Do you want to play again? (y/n): ";

            char playAgain;
            std::cin >> playAgain;

            if (playAgain != 'y' && playAgain != 'Y') {
                std::cout << "Thanks for playing! Goodbye." << std::endl;
                break;
            } else {
                targetNumber = rand() % 100 + 1;
                attempts = 0;
                std::cout << "Guess a number between 1 and 100" << std::endl;
            }
        } else {
            const char* message = (guess < targetNumber) ? "Too low. Try again!" : "Too high. Try again!";
            std::cout << message << std::endl;
        }
    }

    return 0;
}
