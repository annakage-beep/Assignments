#include <iostream>
using namespace std;

class Rectangle {
    private:
        double length;
        double width;
        
    public:
        // Constructor
        Rectangle(double l=3.0, double w=8.0) : length(l), width(w) {}
        //getters
        double getLength() const { return length; }
        double getWidth() const { return width; }
        // Setters
        void setLength(double l) { length = l; }
        void setWidth(double w) { width = w; }
        // function prototypes
        double Area() const { return length * width; }
        double Perimeter() const { return 2 * (length + width); }
};

int main() {
    Rectangle rectangle;
    // Modify the dimensions
    rectangle.setLength(7.0);
    rectangle.setWidth(4.0);
    
    // Display the updated length and width
    cout << "Length: " << rectangle.getLength() << endl;
    cout << "Width: " << rectangle.getWidth() << endl;
    
    // Display the updated area and perimeter
    cout << "Area: " << rectangle.Area() << endl;
    cout << "Perimeter: " << rectangle.Perimeter() << endl;

    return 0;
}