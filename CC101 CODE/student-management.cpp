#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct Student {
    int id;
    string name;
    bool isPresent;
};


void showMenu() {
    cout << "\n====== Attendance Management System ======\n";
    cout << "1. Add Student\n";
    cout << "2. Mark Attendance\n";
    cout << "3. View Attendance\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    vector<Student> students;
    int choice, idCounter = 1;

    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 1) {
            Student s;
            s.id = idCounter++;
            cout << "Enter student name: ";
            cin.ignore();
            getline(cin, s.name);
            s.isPresent = false;
            students.push_back(s);
            cout << "Student added successfully!\n";
        } 
        else if (choice == 2) {
            if (students.empty()) {
                cout << "No students available!\n";
                continue;
            }
            cout << "\nMark Attendance:\n";
            for (auto &s : students) {
                char status;
                cout << "Is " << s.name << " present? (y/n): ";
                cin >> status;
                s.isPresent = (status == 'y' || status == 'Y');
            }
            cout << "Attendance marked successfully!\n";
        } 
        else if (choice == 3) {
            if (students.empty()) {
                cout << "No students available!\n";
                continue;
            }
            cout << "\n===== Attendance Report =====\n";
            for (auto &s : students) {
                cout << "ID: " << s.id
                     << " | Name: " << s.name
                     << " | Status: " << (s.isPresent ? "Present" : "Absent") 
                     << endl;
            }
        } 
        else if (choice == 4) {
            cout << "Exiting...\n";
            break;
        } 
        else {
            cout << "Invalid option, try again!\n";
        }
    }

    return 0;
}
