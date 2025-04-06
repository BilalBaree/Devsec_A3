
#include "System.h"
#include <iostream>

using namespace std;

void StudentManager::addStudent() {
    Student s;
    cout << "Enter Student ID: ";
    cin >> s.id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, s.name);
    cout << "Enter GPA: ";
    cin >> s.gpa;
    students.push_back(s);
    cout << "Student added successfully!\n";
}

void StudentManager::displayAll() {
    if (students.empty()) {
        cout << "No students to display.\n";
        return;
    }
    cout << "\nAll Students:\n";
    for (const auto& s : students) {
        cout << "ID: " << s.id << ", Name: " << s.name << ", GPA: " << s.gpa << endl;
    }
}

void StudentManager::searchByID() {
    int id;
    cout << "Enter Student ID to search: ";
    cin >> id;
    for (const auto& s : students) {
        if (s.id == id) {
            cout << "Found Student - ID: " << s.id << ", Name: " << s.name << ", GPA: " << s.gpa << endl;
            return;
        }
    }
    cout << "Student not found.\n";
}

void StudentManager::addStudentMock(const Student& s) {
    students.push_back(s);
}

vector<Student> StudentManager::getAllStudents() const {
    return students;
}

bool StudentManager::searchByID(int id, Student& outStudent) {
    for (const auto& s : students) {
        if (s.id == id) {
            outStudent = s;
            return true;
        }
    }
    return false;
}
