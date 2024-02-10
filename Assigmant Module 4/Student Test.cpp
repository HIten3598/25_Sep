#include <iostream>
#include <string>

// Base class representing student information
class Students {
protected:
    int rollNumber;

public:
    // Member function to input student data
    void inputStudentData() {
        std::cout << "Enter student's roll number: ";
        std::cin >> rollNumber;
    }

    // Member function to display student data
    void displayStudentData() const {
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

// Derived class representing test information (marks in two subjects)
class Test : public Students {
protected:
    int marksSubject1;
    int marksSubject2;

public:
    // Member function to input test data
    void inputTestData() {
        inputStudentData();  // Call the member function from the Students class
        std::cout << "Enter marks in Subject 1: ";
        std::cin >> marksSubject1;
        std::cout << "Enter marks in Subject 2: ";
        std::cin >> marksSubject2;
    }

    // Member function to display test data
    void displayTestData() const {
        displayStudentData();  // Call the member function from the Students class
        std::cout << "Marks in Subject 1: " << marksSubject1 << std::endl;
        std::cout << "Marks in Subject 2: " << marksSubject2 << std::endl;
    }
};

// Derived class representing result information (total marks)
class Result : public Test {
protected:
    int totalMarks;

public:
    // Member function to calculate and set total marks
    void calculateTotalMarks() {
        totalMarks = marksSubject1 + marksSubject2;
    }

    // Member function to display result data
    void displayResultData() const {
        displayTestData();  // Call the member function from the Test class
        std::cout << "Total Marks: " << totalMarks << std::endl;
    }
};

int main() {
    // Create a Result object and input/display data
    Result result;
    result.inputTestData();
    result.calculateTotalMarks();
    std::cout << "\nStudent Test Result:\n";
    result.displayResultData();
}