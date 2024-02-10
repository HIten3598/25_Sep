#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    // Constructor to initialize the sides
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Member function to determine if the triangle is equilateral
    bool isEquilateral() const {
        return (side1 == side2) && (side2 == side3);
    }

    // Member function to determine if the triangle is isosceles
    bool isIsosceles() const {
        return (side1 == side2) || (side2 == side3) || (side1 == side3);
    }

    // Member function to determine if the triangle is scalene
    bool isScalene() const {
        return (side1 != side2) && (side2 != side3) && (side1 != side3);
    }
};

int main() {
    // Example usage
    Triangle triangle1(3.0, 3.0, 3.0); // Equilateral triangle
    Triangle triangle2(3.0, 4.0, 4.0); // Isosceles triangle
    Triangle triangle3(4.0, 5.0, 6.0); // Scalene triangle

    // Check the type of each triangle
    cout << "Triangle 1 is " << (triangle1.isEquilateral() ? "equilateral" : "not equilateral") << std::endl;
    cout << "Triangle 2 is " << (triangle2.isIsosceles() ? "isosceles" : "not isosceles") << std::endl;
    cout << "Triangle 3 is " << (triangle3.isScalene() ? "scalene" : "not scalene") << std::endl;
}
