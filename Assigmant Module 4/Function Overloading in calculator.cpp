#include<iostream>

// Function to perform addition of two integers
int add(int num1, int num2) {
    return num1 + num2;
}

// Function to perform addition of two doubles
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to perform subtraction of two integers
int subtract(int num1, int num2) {
    return num1 - num2;
}

// Function to perform subtraction of two doubles
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to perform multiplication of two integers
int multiply(int num1, int num2) {
    return num1 * num2;
}

// Function to perform multiplication of two doubles
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to perform division of two integers
double divide(int num1, int num2) {
    // Check for division by zero
    if (num2 == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0.0;  // Return 0 in case of division by zero
    }
    return static_cast<double>(num1) / num2;
}

// Function to perform division of two doubles
double divide(double num1, double num2) {
    // Check for division by zero
    if (num2 == 0.0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0.0;  // Return 0.0 in case of division by zero
    }
    return num1 / num2;
}

int main() {
    // Perform integer addition
    std::cout << "Integer Addition: " << add(5, 3) << std::endl;

    // Perform double addition
    std::cout << "Double Addition: " << add(5.5, 3.3) << std::endl;

    // Perform integer subtraction
    std::cout << "Integer Subtraction: " << subtract(8, 3) << std::endl;

    // Perform double subtraction
    std::cout << "Double Subtraction: " << subtract(8.8, 3.3) << std::endl;

    // Perform integer multiplication
    std::cout << "Integer Multiplication: " << multiply(4, 6) << std::endl;

    // Perform double multiplication
    std::cout << "Double Multiplication: " << multiply(4.5, 6.2) << std::endl;

    // Perform integer division
    std::cout << "Integer Division: " << divide(15, 3) << std::endl;

    // Perform double division
    std::cout << "Double Division: " << divide(15.6, 3.0) << std::endl;

    // Attempt division by zero
    std::cout << "Attempted Division by Zero: " << divide(5.0, 0.0) << std::endl;
}