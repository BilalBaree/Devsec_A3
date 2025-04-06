
#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector>
#include <string>

struct Student {
    int id;
    std::string name;
    float gpa;
};

class StudentManager {
private:
    std::vector<Student> students;

public:
    void addStudent();
    void displayAll();
    void searchByID();

    // Testable interfaces
    void addStudentMock(const Student& s);
    std::vector<Student> getAllStudents() const;
    bool searchByID(int id, Student& outStudent);
};

#endif // SYSTEM_H
