#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>
#include <conio.h> 

using namespace std;


struct Transaction 
{
    string dateTime;
    string type;
    double amount;
};


string getCurrentDateTime() 
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    char buffer[50];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", ltm);

    return string(buffer);
}


string inputPIN() 
{
    string pin = "";
    char ch;

    cout << "Enter PIN: ";

    while ((ch = _getch()) != '\r') 
    { 
        if (ch == '\b') 
        { 
            if (!pin.empty()) 
            {
                cout << "\b \b";
                pin.pop_back();
            }
        } else 
        {
            pin.push_back(ch);
            cout << "*";
        }
    }
    cout << endl;
    return pin;
}

int main() 
{
    const string CORRECTPIN = "1234"; 
    int attempts = 0;
    double balance = 0.0;
    vector<Transaction> history;

    
    while (attempts < 3) {
        string inputPin = inputPIN();

        if (inputPin == CORRECTPIN) 
        {
            cout << "Login successful!\n\n";
            break;
        } 
            else 
            {
                attempts++;
                cout << "Incorrect PIN.\n";
            }
    }

    if (attempts == 3) 
    {
        cout << "Too many wrong attempts.\n";
        return 0;
    }

    bool running = true;

    while (running) 
    {
        cout << "BANK TELLER\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. View Transactions\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) 
        {

            case 1: 
            {
                cout << "\nYour balance: ₱" << fixed << setprecision(2) << balance << "\n\n";
                break;
            }

            case 2: 
            {
                double amount;
                cout << "Enter deposit amount: ";
                cin >> amount;

                if (amount <= 0) 
                {
                    cout << "Invalid amount\n\n";
                } 
                    else 
                    {
                        balance += amount;

                        Transaction t;
                        t.dateTime = getCurrentDateTime();
                        t.type = "Deposit";
                        t.amount = amount;
                        history.push_back(t);

                        cout << "Successfully deposited ₱" << amount << "\n\n";
                    }
            break;
        }

        case 3: 
        {
            double amount;
            cout << "Enter withdraw amount: ";
            cin >> amount;

            if (amount <= 0) 
            {
                cout << "Invalid amount\n\n";
            } 
                else if (amount > balance) 
                {
                    cout << "Insufficient balance.\n\n";
            } 
                else 
                {
                    balance -= amount;

                    Transaction t;
                    t.dateTime = getCurrentDateTime();
                    t.type = "Withdraw";
                    t.amount = amount;
                    history.push_back(t);

                    cout << "You withdrew ₱" << amount << "\n\n";
                }
            break;
        }

        case 4: 
        {
            if (history.empty()) 
            {
                cout << "\nNo transactions recorded.\n\n";
            } 
                else 
                {
                    cout << "\n--- Transaction History ---\n";
                    for (const auto &t : history) 
                    {
                        cout << "Date: " << t.dateTime
                         << " | Type: " << t.type
                         << " | Amount: ₱" << t.amount << "\n";
                    }
                cout << "\n";
            }
            break;
        }

        case 5: 
        {
            cout << "Thank you for using the system.\n";
            running = false;
            break;
        }

            default:
            cout << "Invalid choice.\n\n";
    }

        if (running) {
            string again;
            cout << "Do you want another transaction? (y/n): ";
            cin >> again;
            
            cout << "\n";

            if (again != "y" && again != "Y") {
                cout << "Thank you for using the system.\n";
                running = false;
            }
        }
    }

    return EXIT_SUCCESS;
}
