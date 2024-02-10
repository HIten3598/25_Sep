#include <iostream>
#include <string>

// Base class representing student information
class Student {
protected:
    std::string studentName;
    int rollNumber;

public:
    // Member function to input student data
    void inputStudentData() {
        std::cout << "Enter student name: ";
        std::cin >> studentName;
        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;
    }

    // Member function to display student data
    void displayStudentData() const {
        std::cout << "Student Name: " << studentName << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

// Base class representing subject information
class Subject {
protected:
    int marksMath;
    int marksScience;
    int marksEnglish;

public:
    // Member function to input subject data
    void inputSubjectData() {
        std::cout << "Enter marks in Math: ";
        std::cin >> marksMath;
        std::cout << "Enter marks in Science: ";
        std::cin >> marksScience;
        std::cout << "Enter marks in English: ";
        std::cin >> marksEnglish;
    }

    // Member function to display subject data
    void displaySubjectData() const {
        std::cout << "Marks in Math: " << marksMath << std::endl;
        std::cout << "Marks in Science: " << marksScience << std::endl;
        std::cout << "Marks in English: " << marksEnglish << std::endl;
    }
};

// Derived class representing the complete result sheet using multiple inheritance
class ResultSheet : public Student, public Subject {
public:
    // Member function to display the complete mark sheet
    void displayResultSheet() const {
        displayStudentData();  // Call the member function from the Student class
        displaySubjectData();  // Call the member function from the Subject class

        // Calculate and display total marks
        int totalMarks = marksMath + marksScience + marksEnglish;
        std::cout << "Total Marks: " << totalMarks << std::endl;

        // Calculate and display average marks
        double averageMarks = static_cast<double>(totalMarks) / 3.0;
        std::cout << "Average Marks: " << averageMarks << std::endl;
    }
};

int main() {
    // Create a ResultSheet object and input/display data
    ResultSheet resultSheet;
    resultSheet.inputStudentData();
    resultSheet.inputSubjectData();
    std::cout << "\nStudent Mark Sheet:\n";
    resultSheet.displayResultSheet();
}
