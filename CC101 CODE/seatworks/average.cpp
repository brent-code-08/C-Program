#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    float midterm, finals, average;

    cout << "Enter your midterm grades: ";
    cin >> midterm;

    cout << "Enter yout finals grades: ";
    cin >> finals;

    average = (midterm + finals) /2;

    if (average >= 75)
    {
        cout << "Your average is: " << average << " Passed" << endl;
    }
        else
        {
            cout << "Your average is: " << average << " Failed" << endl;
        }   

    return EXIT_SUCCESS;    
}