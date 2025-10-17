#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int age;

    cout << "2, Alonzo" << endl;
    cout << "Seatwork 24" << endl;

    cout << "Please enter your age: ";
    cin >> age;

    if (age < 18)
    {
        cout << "Minor" << endl;
    }
        else
        {
            cout << "Adult" << endl;
        }
        
    
    return EXIT_SUCCESS;
}