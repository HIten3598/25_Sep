#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double num1, double num2) {
        return num1 + num2;
    }

    double subtract(double num1, double num2) {
        return num1 - num2;
    }

    double multiply(double num1, double num2) {
        return num1 * num2;
    }

    double divide(double num1, double num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Cannot divide by zero!" << endl;
            return 0.0;
        }
    }
};

int main() {
    Calculator calculator;
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Sum: " << calculator.add(num1, num2) << endl;
    cout << "Difference: " << calculator.subtract(num1, num2) << endl;
    cout << "Product: " << calculator.multiply(num1, num2) << endl;
    cout << "Quotient: " << calculator.divide(num1, num2) << endl;
}