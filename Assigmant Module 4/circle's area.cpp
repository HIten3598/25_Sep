#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    // Constructor to initialize the radius
    Circle(double r) : radius(r) {}

    // Member function to set the radius
    void setRadius(double r) {
        radius = r;
    }

    // Member function to get the radius
    double getRadius() const {
        return radius;
    }

    // Member function to calculate the area
    double calculateArea() const {
        return M_PI * radius * radius;
    }

    // Member function to calculate the circumference
    double calculateCircumference() const {
        return 2 * M_PI * radius;
    }
};

int main() {
    // Example usage of the Circle class
    double userRadius;
    
    // Get the radius from the user
    std::cout << "Enter the radius of the circle: ";
    std::cin >> userRadius;

    // Create a Circle object
    Circle myCircle(userRadius);

    // Display the calculated area and circumference
    std::cout << "Area of the circle: " << myCircle.calculateArea() << std::endl;
    std::cout << "Circumference of the circle: " << myCircle.calculateCircumference() << std::endl;

    return 0;
}
