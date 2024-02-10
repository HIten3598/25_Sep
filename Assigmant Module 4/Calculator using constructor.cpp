#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:
    // Constructor to initialize the numbers
    Calculator(double n1, double n2) : num1(n1), num2(n2) {}

    // Member function to perform addition
    double add() {
        return num1 + num2;
    }

    // Member function to perform subtraction
    double subtract() {
        return num1 - num2;
    }

    // Member function to perform multiplication
    double multiply() {
        return num1 * num2;
    }

    // Member function to perform division
    double divide() {
        // Check if the divisor (num2) is not zero to avoid division by zero
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cerr << "Error: Division by zero is undefined." << std::endl;
            return 0;
        }
    }
};

int main() {
    // Get two numbers from the user
    double number1, number2;
    std::cout << "Enter first number: ";
    std::cin >> number1;

    std::cout << "Enter second number: ";
    std::cin >> number2;

    // Create a Calculator object with the given numbers
    Calculator myCalculator(number1, number2);

    // Perform and display the results of various operations
    std::cout << "Sum: " << myCalculator.add() << std::endl;
    std::cout << "Difference: " << myCalculator.subtract() << std::endl;
    std::cout << "Product: " << myCalculator.multiply() << std::endl;
    std::cout << "Quotient: " << myCalculator.divide() << std::endl;

    return 0;
}
