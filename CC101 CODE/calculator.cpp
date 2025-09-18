#include <iostream>
using namespace std;

int main () {
    int choice, num1, num2;
    char again;

    while (true) {
        cout << "\n=== Calculator ===\n";
        cout << "1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n5. Exit\n";
        cout << "Enter operator choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting...\n";
            break;
        }
        
        cout << "Enter first number: ";
        cin >> num1; 
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {

            case 1:
                cout << "Result (Addition): " << num1 + num2 << endl;
                break;
            case 2: 
                cout << "Result (Subtraction): " << num1 - num2 << endl;
                break;
            case 3:
                if (num2 != 0) {
                    cout << "Result (Division): " << num1 / num2 << endl;
                } else {
                    cout << "Error! Cannot divide by 0." << endl;
                }
                break;
            case 4:
                cout << "Result (Multiplication): " << num1 * num2 << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
                break;
        }

        cout << "\nDo you want to compute again? (y/n): ";
        cin >> again;

        if (again == 'n' || again == 'N') {
            cout << "Exit\n";
            break;
        }
    }

    return 0;
}
