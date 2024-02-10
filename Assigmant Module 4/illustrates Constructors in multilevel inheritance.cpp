#include <iostream>
#include <string>

// Base class representing a person
class Person {
protected:
    std::string name;

public:
    // Parameterized constructor in the base class
    Person(const std::string& personName) : name(personName) {
        std::cout << "Person constructor called with name: " << name << std::endl;
    }
};

// Derived class representing an employee
class Employee : public Person {
protected:
    int employeeID;

public:
    // Parameterized constructor in the derived class
    Employee(const std::string& empName, int empID) : Person(empName), employeeID(empID) {
        std::cout << "Employee constructor called with ID: " << employeeID << std::endl;
    }
};

// Further derived class representing a manager
class Manager : public Employee {
protected:
    std::string department;

public:
    // Parameterized constructor in the further derived class
    Manager(const std::string& mgrName, int mgrID, const std::string& mgrDepartment)
        : Employee(mgrName, mgrID), department(mgrDepartment) {
        std::cout << "Manager constructor called for department: " << department << std::endl;
    }
};

int main() {
    // Create an object of the most derived class (Manager)
    Manager manager("John Doe", 123, "Sales");

    // Output will show the sequence of constructors called due to multilevel inheritance
    return 0;
}