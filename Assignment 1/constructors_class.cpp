// using constructors to initialize data members of a class

#include <iostream>
using namespace std;

// declare a class
class Wall {
  private:
  //ENCAPSULATION: These variables are locked inside the class
    double length;
    double height;

  public:
    /* constructor to initialize data members
       instead of constructors,setters can be used to initialize the data members of a class accompaigned with getters to read the private data members.
         void setLength(double len) { length = len;} 
         void setHeight(double hgt) { height = hgt;}
    */
    Wall(double len, double hgt): length{len}, height{hgt} { }
     //GETTERS: Public keys that let the outside world safely read the private data
     double getLength() const {
        return length;
    }
    double getHeight() const {
        return height;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {

  Wall wall1(10, 8.5);
  Wall wall2(8.5, 6.5);

   cout << "The length of wall1 is: " << wall1.getLength() << endl;
   cout << "The height of wall1 is: " << wall1.getHeight() << endl;
   cout << "The length of wall2 is: " << wall2.getLength() << endl;
   cout << "The height of wall2 is: " << wall2.getHeight() << endl;
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea() << endl;

  return 0;
}