#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    char Restart;
    srand(time(0));

    do {
        cout << "Guessing Game\n";

        int randnum1 = rand() % 21;
        int guess1, tries1 = 5;
        bool firstgame = false;

        cout << "First Game, guess a number between 0 - 20\n";

        while (tries1 > 0) {
            cout << "Attempt " << (6 - tries1) << "/5 - Your tries: ";
            cin >> guess1;

            if (guess1 == randnum1) {
                cout << "Correct, you won the first game\n";
                firstgame = true;
                break;
            } else {
                cout << (guess1 < randnum1 ? "Too low\n" : "Too high\n");
            }
            tries1--;
        }

        if (firstgame == false) {
            cout << "You lost, the correct number was " << randnum1 << ".\n";
            cout << "Do you want to play again? (y/n): ";
            cin >> Restart;
            if (Restart == 'y' || Restart == 'Y') continue;
            else break;
        }

        int randnum2 = rand() % 51;
        int guess2, tries2 = 5;
        bool secondgame = false;

        cout << "\nSecond Game, guess a number between 0 - 50\n";

        while (tries2 > 0) {
            cout << "Attempt " << (6 - tries2) << "/5 - Your tries: ";
            cin >> guess2;

            if (guess2 == randnum2) {
                cout << "Correct, you won the second game\n";
                secondgame = true;
                break;
            } else {
                cout << (guess2 < randnum2 ? "Too low\n" : "Too high\n");
            }
            tries2--;
        }

        if (secondgame == false) {
            cout << "You lost, the correct number was " << randnum2 << ".\n";
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> Restart;

    } while (Restart == 'y' || Restart == 'Y');

    cout << "Thank you for playing, goodbye\n";
    return 0;
}