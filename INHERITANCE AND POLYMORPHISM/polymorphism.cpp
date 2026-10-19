/*

  This code shows polymorphism in C++ using three classes: A, B, and C.
  The base class A has a virtual function displayRole(), which is overridden in the derived classes B and C. 

  The main function demonstrates how a base-class pointer can be used to call the appropriate displayRole() function based on the actual object it points to,
  showcasing runtime polymorphism.
 
 */
#include <iostream> 
using namespace std;

// Parent class 
class A {
public:
    // Virtual function allows runtime polymorphism
    virtual void displayRole() {
        cout << "My name is Anna Kagemulo." << endl;
    }
};

// First derived class
class B : public A {
public:
    // Overrides the virtual function in class A
    void displayRole() override {
        cout << "I am in year 2." << endl;
    }
};

// Second derived class
class C : public A {
public:
    // Overrides the virtual function in class A
    void displayRole() override {
        cout << "I study Electrical Engineering." << endl;
    }
};

int main() {
    // Create objects of the three classes
    A person;
    B student;
    C engineeringStudent;

    // Create a base-class pointer
    A* ptr;

    // Point to the parent-class object
    ptr = &person;
    ptr->displayRole();

    // Point to the first derived-class object
    ptr = &student;
    ptr->displayRole();

    // Point to the second derived-class object
    ptr = &engineeringStudent;
    ptr->displayRole();

    return 0;
}
