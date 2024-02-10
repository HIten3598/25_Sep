#include <iostream>

// Inline function to find the multiplication of two numbers
inline int multiply(int a, int b) 
{
    return a * b;
}

// Inline function to find the cubic value of a number
inline int cubic(int x) 
{
    return x * x * x;
}

int main() {
    // Get a number from the user
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Calculate and display the multiplication value using the inline function
    std::cout << "Multiplication value: " << multiply(num, 2) << std::endl;

    // Calculate and display the cubic value using the inline function
    std::cout << "Cubic value: " << cubic(num) << std::endl;

    return 0;
}
