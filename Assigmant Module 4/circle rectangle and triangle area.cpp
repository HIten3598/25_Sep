#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height, bool isTriangle = true) {
    if (isTriangle) {
        return 0.5 * base * height;
    } else {
        // If isTriangle is false, treat it as a general parallelogram
        return base * height;
    }
}

int main() {
    // Calculate and display the area of a circle
    double circleRadius = 5.0;
    std::cout << "Area of Circle with radius " << circleRadius << ": " << calculateArea(circleRadius) << std::endl;

    // Calculate and display the area of a rectangle
    double rectangleLength = 4.0;
    double rectangleBreadth = 6.0;
    std::cout << "Area of Rectangle with length " << rectangleLength << " and breadth " << rectangleBreadth << ": "
              << calculateArea(rectangleLength * rectangleBreadth)
			  << std::endl;

    // Calculate and display the area of a triangle
    double triangleBase = 3.0;
    double triangleHeight = 8.0;
    std::cout << "Area of Triangle with base " << triangleBase << " and height " << triangleHeight << ": "
              << calculateArea(triangleBase * triangleHeight) << std::endl;

    // Calculate and display the area of a general parallelogram
    double parallelogramBase = 3.0;
    double parallelogramHeight = 8.0;
    std::cout << "Area of Parallelogram with base " << parallelogramBase << " and height " << parallelogramHeight << ": "
              << calculateArea(parallelogramBase, parallelogramHeight, false) << std::endl;
}