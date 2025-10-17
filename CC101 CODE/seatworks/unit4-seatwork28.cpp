#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int grade;
    string section;

    cout << "2, Alonzo" << endl;
    cout << "Seatwork 28" << endl;

    cout << "Enter your grade level: ";
    cin >> grade;

    cout << "Enter your section: ";
    cin >> section;

    if (grade == 12)
    {
        if (section == "A" || section == "a")
        {
            cout << "You are in Grade 12-A" << endl;
        }
            else
            {
                cout << "You are not in Grade 12-A" << endl;
            }
    }
    else
    {
        cout << "You are not in Grade 12." << endl;
    }

    return EXIT_SUCCESS;
}