
#include "../src/System.h"
#include <cassert>
#include <iostream>

void test_add_and_search() {
    StudentManager sm;
    Student s1 = {1, "Ali", 3.5};
    Student s2 = {2, "Zara", 3.8};
    sm.addStudentMock(s1);
    sm.addStudentMock(s2);

    Student found;
    assert(sm.searchByID(1, found));
    assert(found.name == "Ali");
    assert(sm.searchByID(2, found));
    assert(found.gpa == 3.8);
    std::cout << "test_add_and_search passed.\n";
}

int main() {
    test_add_and_search();
    std::cout << "All tests passed.\n";
    return 0;
}
