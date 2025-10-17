#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int age;
    string name;
  
    cout << "2, Alonzo" << endl;
    cout << "Assignment" << endl;
    
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your name: ";
    cin >> name;

    if (age < 10) 
    {
        cout <<"Hello " << name << " you are " << age << " years old" << endl;
        cout <<"Nice meeting you!!!";
    }

    return EXIT_SUCCESS;
    

}