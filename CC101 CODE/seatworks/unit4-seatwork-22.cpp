#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int number;

    cout << "2, Alonzo" << endl;
    cout << "Seatwork 22" << endl;

    cout << "Enter number: ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "The number is even." << endl;
    }
        

    return EXIT_SUCCESS;

}