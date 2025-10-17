#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
    string firstname, lastname;

    cout << "Enter your Firstname: ";
    cin >> firstname;

    cout << "Enter yout lastname: ";
    cin >> lastname;

    cout << "Hello " << firstname << " " << lastname;

    return EXIT_SUCCESS; 
}