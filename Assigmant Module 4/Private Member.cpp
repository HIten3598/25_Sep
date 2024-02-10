#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string country;

public:
    // Constructor to initialize the member variables
    Person(const std::string& n, int a, const std::string& c) : name(n), age(a), country(c) {}

    // Member function to set the name
    void setName(const std::string& n) {
        name = n;
    }

    // Member function to get the name
    std::string getName() const {
        return name;
    }

    // Member function to set the age
    void setAge(int a) {
        age = a;
    }

    // Member function to get the age
    int getAge() const {
        return age;
    }

    // Member function to set the country
    void setCountry(const std::string& c) {
        country = c;
    }

    // Member function to get the country
    std::string getCountry() const {
        return country;
    }
};

int main() {
    // Example usage of the Person class
    std::string userName, userCountry;
    int userAge;

    // Get information from the user
    std::cout << "Enter name: ";
    std::getline(std::cin, userName);

    std::cout << "Enter age: ";
    std::cin >> userAge;

    std::cin.ignore();  // Ignore the newline character left in the buffer

    std::cout << "Enter country: ";
    std::getline(std::cin, userCountry);

    // Create a Person object
    Person individual(userName, userAge, userCountry);

    // Display the information
    std::cout << "\nPersonal Information:\n";
    std::cout << "Name: " << individual.getName() << std::endl;
    std::cout << "Age: " << individual.getAge() << std::endl;
    std::cout << "Country: " << individual.getCountry() << std::endl;

    return 0;
}
