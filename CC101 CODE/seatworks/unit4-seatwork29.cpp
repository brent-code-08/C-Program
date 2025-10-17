#include<iostream>
#include<cstdlib>
#include<cctype>

using namespace std;

int main ()
{
    char section;

    cout << "2, Alonzo" << endl;
    cout << "Seatwork 29" << endl;

    cout << "Enter the first letter of your section: (A-E): ";
    cin >> section;

    section = toupper(section);

    switch (section)
    {
        case 'A':
            cout << "You are from section Alpha" << endl;
            break;
        case 'B':
            cout << "You are from section Beta" << endl;
            break;
        case 'C':
            cout << "You are from section Charlie" << endl;
            break;
        case 'D':
            cout << "You are from section Delta" << endl;
            break;
        case 'E':
            cout << "You are from section Echo" << endl;
            break;
        
        default:
            cout << "Section not Available" << endl;
            break;
    }
    return EXIT_SUCCESS;
}