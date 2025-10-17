#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int age;
    string citizenship;

    cout << "2, Alonzo" << endl;
    cout << "Seatwork 27" << endl;

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter your citizenship: ";
    getline(cin, citizenship);

    if (age >= 18)
    {
        if (citizenship == "Filipino" || citizenship == "filipino")
        {
            cout << "You are  eligible to vote." << endl;
        }
        else
        {
            cout << "You are not eligible to vote (not Filipino)." << endl;
        }
    }
    else
    {
        cout << "You are not eliigible to vote (underage)." << endl;
    }

    return EXIT_SUCCESS;
}
