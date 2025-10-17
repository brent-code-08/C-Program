#include<iostream>
#include<cstdlib>

using namespace std;

int main ()
{
    int grade;

    cout << "2, Alonzo" << endl;
    cout << "Seatwork 25" << endl;

    cout << "Please enter your grade: ";
    cin >> grade;

    if (grade >=90 && grade <= 100)
    {
        cout << "Excellent" << endl;
    } 
        else if (grade >=80 && grade <=89)
        {
            cout << "Verry Good" << endl;
        }
        else if (grade >=70 && grade <=79)
        {
            cout << "Good" << endl;
        }
        else if (grade < 60)
        {
            cout << "Fair" << endl;
        }
            else
            {
                cout << "Poor" << endl;
            }

    return EXIT_SUCCESS;
    
}