#include<iostream>
#include<cstdlib>

using namespace std;

int main ()
{
    int grade;

    cout << "2, Alonzo" << endl;
    cout << "Seatwork 23" << endl;

    cout << "Please enter your grade: ";
    cin >> grade;

    if (grade > 75)
    {
        cout << "Status: " << "Passed" << endl;
    }
        else 
        {
            cout << "Status: " << "Failed" << endl;
        
        }
    return EXIT_SUCCESS;
}