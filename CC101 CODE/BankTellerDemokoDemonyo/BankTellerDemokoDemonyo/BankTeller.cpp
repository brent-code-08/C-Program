#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>
#include <conio.h>
#include <cstdlib>

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
    tm * ltm = localtime(&now);
    char hold[50];
    strftime(hold, sizeof(hold), "%Y-%m-%d %H:%M:%S", ltm);
    return string(hold);
}
string inputPIN() 
{
    string pin = "";
    char check;

    cout << "Enter PIN number: ";

    while (true)
    {
        /* code */
        check = _getch();
        if (check == '\r')    
        {
            break;
        }
            if (check == '\b')
            {
                if (!pin.empty())
                {
                    pin.pop_back();
                    cout << "\b \b";    
                }
            }
                    else
                    {
                        pin.push_back(check);
                        cout << "*";   
                    }
    }
    cout << endl;
    return pin;
        
}

int main() 
{
    const string CORRECT_PIN = "1234";
    int attempts = 0;
    double balance = 0.0;
    vector<Transaction> history;

    while (attempts < 3) 
    {
        string inputPin = inputPIN();
        if (inputPin == CORRECT_PIN) 
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

        bool again = true;
        while (again) 
        {
            cout << "**********************\n";
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
                    cout << "\nYour balance: ₱" << balance << "\n\n";
                    break;
                case 2: 
                {
                    double amount;
                    cout << "Enter deposit amount: ";
                    cin >> amount;
                    if (amount > 0) 
                    {
                        balance += amount;
                        history.push_back({getCurrentDateTime(), "Deposit", amount});
                        cout << "Successfully deposited ₱" << amount << "\n\n";
                    } 
                        else 
                        {
                            cout << "Invalid amount\n\n";
                        }
                    break;
                }
                case 3: 
                {
                    double amount;
                    cout << "Enter withdraw amount: ";
                    cin >> amount;
                    if (amount > 0 && amount <= balance) 
                    {
                        balance -= amount;
                        history.push_back({getCurrentDateTime(), "Withdraw", amount});
                        cout << "You withdrew ₱" << amount << "\n\n";
                    } 
                        else 
                        {
                            cout << (amount <= 0 ? "Invalid amount\n\n" : "Insufficient balance.\n\n");
                        }
                    break;
                }
                case 4:
                    if (history.empty()) 
                    {
                        cout << "\nNo transactions recorded.\n\n";
                    } 
                        else 
                        {
                            cout << "\t\n--- Transaction History ---\n";
                            for (const auto &t : history) 
                            {
                                cout << "Date: " << t.dateTime << " | Type: " << t.type << " | Amount: ₱" << t.amount << "\n";
                            }
                            cout << "\n";
                        }
                    break;
                case 5:
                    cout << "Thank you for using the bank teller (Demo-Ko Demo-Nyo).\n";
                    return 0;
                default:
                    cout << "Invalid choice.\n\n";
            }
            char another  ;
            cout << "Do you want another transaction? (y/n): ";
            cin >> another;
            if (another == 'Y' || another == 'y')
            {
              
            }
                else
                {
                    cout << "\nThank you for using the bank teller (Demo-Ko Demo-Nyo).\n";
                    again = false;
                }
        }
    return EXIT_SUCCESS;
}