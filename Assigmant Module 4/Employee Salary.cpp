#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize member variables
    Employee(const std::string& empName, int empID) : name(empName), employeeID(empID) {
        // Set a default salary, or you can initialize it based on some default value.
        salary = 50000.0;
    }

    // Member function to get the name of the employee
    std::string getName() const {
        return name;
    }

    // Member function to get the employee ID
    int getEmployeeID() const {
        return employeeID;
    }

    // Member function to get the current salary
    double getSalary() const {
        return salary;
    }

    // Member function to calculate and set salary based on employee performance
    void calculateAndSetSalary(double performanceScore) {
        // You can define your own salary calculation logic here
        // For example, increase the salary based on the performance score
        salary = salary + (salary * performanceScore / 100.0);
    }
};

int main() {
    // Create an Employee object using the constructor
    Employee employee1("John Doe", 101);

    // Display employee details
    cout << "Employee Name: " << employee1.getName() << std::endl;
    cout << "Employee ID: " << employee1.getEmployeeID() << std::endl;
    cout << "Current Salary: $" << employee1.getSalary() << std::endl;

    // Assume the employee's performance score is 10%
    double performanceScore = 25.0;

    // Calculate and set the salary based on performance
    employee1.calculateAndSetSalary(performanceScore);

    // Display the updated salary
    cout << "Updated Salary: $" << employee1.getSalary() << std::endl;
}
