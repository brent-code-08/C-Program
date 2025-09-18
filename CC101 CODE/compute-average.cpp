#include <iostream>
using namespace std;

int main() {
    //DECLARE
    double pre, mid, fin;
    double average;

    //INPUT
    cout << "Enter Prelims Grades: ";
    cin >> pre;
    cout << "Enter Midterm Grades: ";
    cin >> mid;
    cout << "Enter Finals Grades: ";
    cin >> fin;

    //SET
    average = (pre * 0.30) + (mid * 0.30) + (fin * 0.40);

    //DISPLAY
    cout << "The average is: " << average << endl;
}