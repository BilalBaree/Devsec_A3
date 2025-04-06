
#include <iostream>
#include "System.h"

using namespace std;

int main() {
    StudentManager manager;
    int choice;

    do {
        cout << "\n----- Student Management System -----\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: manager.addStudent(); break;
        case 2: manager.displayAll(); break;
        case 3: manager.searchByID(); break;
        case 4: cout << "Exiting program...\n"; break;
        default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
