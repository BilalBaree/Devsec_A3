#include "../src/System.h"
#include <cassert>
#include <iostream>

void test_add_and_search() {
    StudentManager sm;

    // Create a student
    Student s1 = {1, "Ali", 3.5};
    
    // Add the student to the manager
    sm.addStudentMock(s1);

    // Search for the student by ID
    Student found;
    assert(sm.searchByID(1, found));  // Should return true since the student is added
    assert(found.name == "Ali");      // Should match the name
    assert(found.gpa == 3.5);         // Should match the GPA

    std::cout << "test_add_and_search passed.\n";
}

int main() {
    test_add_and_search();
    std::cout << "All tests passed.\n";
    return 0;
}
