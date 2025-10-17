#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int number;

    cout << "2, Alonzo" << endl;
    cout << "Seatwork 30" << endl;

    cout << "Enter a number: ";
    cin >> number;

    switch (number)
    {
        case 1:
            cout << "The number is One." << endl;
            break;
        case 2:
            cout << "The number is Two." << endl;
            break;
        case 3:
            cout << "The number is Three." << endl;
            break;
        case 4:
            cout << "The number is Four." << endl;
            break;
        case 5:
            cout << "The number is Five." << endl;
            break;
        default:
            cout << "Out of Range." << endl;
            break;
    }

    return EXIT_SUCCESS;
}