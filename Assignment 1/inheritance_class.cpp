// inheritance_class.cpp

#include <iostream>
#include <string>
using namespace std;

// base class
class Animal {

   private:
    string color;

   public:
    void eat() { cout << "I can eat!" << endl;}
    void sleep() { cout << "I can sleep!" << endl;}
    void setColor(string clr) { color = clr;}
    string getColor() { return color; }
};

// derived class
class Dog : public Animal {

   public:
    void displayInfo(string c) {
        cout << "My color is " << c << endl;
    }

    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    // Calling member of the derived class
    dog1.bark();

    // Using getColor() of dog1 as argument
    // getColor() returns string data
    dog1.displayInfo(dog1.getColor());

    return 0;
}