#include<iostream>
#include<string>

// Address class for student's address
class Address {
public:
    std::string street;
    std::string city;
    std::string state;
    std::string zipCode;
};

// Student class with aggregation of Address class
class Student {
private:
    std::string name;
    std::string studentClass;
    int rollNumber;
    double marks;
    Address address;  // Aggregation: Student has an Address

public:
    // Constructor to initialize member variables
    Student(const std::string& studentName, const std::string& sClass, int roll, double studentMarks,
            const std::string& street, const std::string& city, const std::string& state, const std::string& zip) :
            name(studentName), studentClass(sClass), rollNumber(roll), marks(studentMarks) {
        // Initialize the address using the provided parameters
        address.street = street;
        address.city = city;
        address.state = state;
        address.zipCode = zip;
    }

    // Member function to calculate grade based on marks
    char calculateGrade() const {
        if (marks >= 90.0) {
            return 'A';
        } else if (marks >= 80.0) {
            return 'B';
        } else if (marks >= 70.0) {
            return 'C';
        } else if (marks >= 60.0) {
            return 'D';
        } else {
            return 'F';
        }
    }

    // Member function to display student information
    void displayInfo() const {
        std::cout << "Student Information:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << studentClass << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;

        // Display address information
        std::cout << "Address:" << std::endl;
        std::cout << "Street: " << address.street << std::endl;
        std::cout << "City: " << address.city << std::endl;
        std::cout << "State: " << address.state << std::endl;
        std::cout << "ZIP Code: " << address.zipCode << std::endl;
    }
};

int main() {
    // Create a Student object using the constructor
    Student student1("John Doe", "12th", 101, 92.5, "123 Main St", "Anytown", "CA", "12345");

    // Display student information
    student1.displayInfo();
}