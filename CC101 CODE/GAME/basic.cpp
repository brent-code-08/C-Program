#include <iostream>
using namespace std;

int main () {
    // DECLARE VARIALBLES
    double prelims, midterms, finals, average;

    // INPUT
    cout << "Enter Prelims Grades: ";
    cin >> prelims;
    cout << "Enter Midterms Grades: ";
    cin >> midterms;
    cout << "Enter Finals Grades: ";
    cin >> finals;

    //SET
    // 2 OF EXAMPLE TO COMPUTE AVERAGE
    // average = (prelims + midterms + finals) / 3;
    // average = (prelims * 0.30) + (midterms * 0.30) + (finals * 0.40);

    average = (prelims * 0.30) + (midterms * 0.30) + (finals * 0.40);

    //DISPLAY 
    cout << "The average is: " << average << endl;

    // DECISION
    if (average >= 75) {
        cout << " Passed";
    } else {
        cout << " Failed";
    }
    
    return 0;
}