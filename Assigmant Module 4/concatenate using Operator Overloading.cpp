#include<iostream>
#include<cstring>

class Concatenator {
private:
    char* result;

public:
    // Constructor to initialize result
    Concatenator() : result(nullptr) {}

    // Overloaded + operator for string concatenation
    Concatenator operator+(const Concatenator& other) const {
        Concatenator temp;
        temp.allocateMemory(strlen(result) + strlen(other.result) + 1);

        // Copy the content of the first string
        strcpy(temp.result, result);

        // Concatenate the second string to the end
        strcat(temp.result, other.result);

        return temp;
    }

    // Function to allocate memory for the result string
    void allocateMemory(size_t size) {
        result = new char[size];
    }

    // Function to set the value of the result string
    void setValue(const char* value) {
        strcpy(result, value);
    }

    // Function to display the result string
    void display() const {
        std::cout << "Concatenated String: " << result << std::endl;
    }

    // Destructor to release memory
    ~Concatenator() {
        delete[] result;
    }
};

int main() {
    // Create two Concatenator objects
    Concatenator str1, str2;

    // Set values for the strings
    str1.allocateMemory(6); // allocate memory for "Hello"
    str1.setValue("Hello");

    str2.allocateMemory(7); // allocate memory for " World"
    str2.setValue(" World");

    // Concatenate the strings using operator overloading
    Concatenator result = str1 + str2;

    // Display the concatenated string
    result.display();
}