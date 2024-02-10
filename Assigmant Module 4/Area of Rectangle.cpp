#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    double length;
    double breadth;

public:
    // Function to input dimensions
    void inputDimensions() {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    // Virtual function to calculate area (to be overridden by derived classes)
    virtual double calculateArea() {
        return 0.0;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    // Override the calculateArea function for the Rectangle class
    double calculateArea() override {
        return length * breadth;
    }
};

int main() {
    Rectangle rectangle;

    // Input dimensions for the rectangle
    cout << "Enter dimensions for the rectangle:" << endl;
    rectangle.inputDimensions();

    // Calculate and display the area of the rectangle
    double area = rectangle.calculateArea();
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}
