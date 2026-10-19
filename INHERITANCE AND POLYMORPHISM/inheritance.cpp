// This program demonstrates inheritance in C++ using three classes: A, B, and C.

#include <iostream>
#include <string>
using namespace std;
// Class A represents a person with basic information.
class A {
public:
    string name;
    int age;

    void getPersonInfo() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
// Class B inherits from class A and represents a student with additional information.
class B : public A {
public:
    string studentNumber;
    int year;

    void getStudentInfo() {
        cout << "Enter student number: ";
        cin >> studentNumber;

        cout << "Enter year of study: ";
        cin >> year;
    }

    void displayStudentInfo() {
        cout << "Student Number: " << studentNumber << endl;
        cout << "Year of Study: " << year << endl;
    }
};
// Class C inherits from class B and represents a course with additional information.
class C : public B {
public:
    string course;

    void getCourseInfo() {
        cout << "Enter course: ";
        cin.ignore();
        getline(cin, course);
    }

    void displayCourseInfo() {
        cout << "Course: " << course << endl;
    }
};

int main() {
    C obj;

    obj.getPersonInfo();
    obj.getStudentInfo();
    obj.getCourseInfo();

    cout << "\n--- Student Information ---" << endl;

    obj.displayPersonInfo();
    obj.displayStudentInfo();
    obj.displayCourseInfo();

    return 0;
}