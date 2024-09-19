#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum Choice { ROCK = 1, PAPER, SCISSORS };

// Function prototypes
void displayChoices();
Choice getUserChoice();
Choice getComputerChoice();
void determineWinner(Choice userChoice, Choice computerChoice);

int main() {
    srand(static_cast<unsigned>(time(0)));  // Seed for random number generation
    
    bool playAgain = true;
    while (playAgain) {
        displayChoices();
        Choice userChoice = getUserChoice();
        Choice computerChoice = getComputerChoice();

        cout << "Computer chose: " << computerChoice << endl;

        determineWinner(userChoice, computerChoice);

        char playAgainChar;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgainChar;
        playAgain = (playAgainChar == 'y' || playAgainChar == 'Y');
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}

void displayChoices() {
    cout << "Choose one of the following:" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
}

Choice getUserChoice() {
    int choice;
    while (true) {
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> choice;
        if (choice >= 1 && choice <= 3) {
            return static_cast<Choice>(choice);
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}

Choice getComputerChoice() {
    return static_cast<Choice>(rand() % 3 + 1);
}

void determineWinner(Choice userChoice, Choice computerChoice) {
    cout << "You chose: " << userChoice << endl;

    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == ROCK && computerChoice == SCISSORS) ||
               (userChoice == PAPER && computerChoice == ROCK) ||
               (userChoice == SCISSORS && computerChoice == PAPER)) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
}

