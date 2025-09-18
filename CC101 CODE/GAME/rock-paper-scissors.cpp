#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string choiceName(int choice) {
    switch (choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Invalid";
    }
}

int main() {
    srand(time(0));
    int playerChoice, computerChoice;
    char again;

    while (true) {
        cout << "\n=== Rock, Paper, Scissors ===\n";
        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "Enter your choice: ";
        cin >> playerChoice;

        if (playerChoice < 1 || playerChoice > 3) {
            cout << "Invalid choice! Please choose (1, 2, 3).\n";
            continue; 
        }

        computerChoice = rand() % 3 + 1;

        cout << "You chose: " << choiceName(playerChoice) << endl;
        cout << "Computer chose: " << choiceName(computerChoice) << endl;

        if (playerChoice == computerChoice) {
            cout << "It's a draw!\n";
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            cout << " You win!\n";
        } else {
            cout << " Computer wins!\n";
        }

        cout << "\nPlay again? (y/n): ";
        cin >> again;

        if (again == 'n' || again == 'N') {
            cout << "Exiting game...\n";
            break;
        }
    }

    return 0;
}
