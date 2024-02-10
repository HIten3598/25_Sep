#include <iostream>
#include <string>

class Car {
private:
    std::string company;
    std::string model;
    int year;

public:
    // Constructor to initialize the member variables
    Car(const std::string& comp, const std::string& mdl, int yr) : company(comp), model(mdl), year(yr) {}

    // Member function to set the company
    void setCompany(const std::string& comp) {
        company = comp;
    }

    // Member function to get the company
    std::string getCompany() const {
        return company;
    }

    // Member function to set the model
    void setModel(const std::string& mdl) {
        model = mdl;
    }

    // Member function to get the model
    std::string getModel() const {
        return model;
    }

    // Member function to set the year
    void setYear(int yr) {
        year = yr;
    }

    // Member function to get the year
    int getYear() const {
        return year;
    }
};

int main() {
    // Example usage of the Car class
    std::string userCompany, userModel;
    int userYear;

    // Get car information from the user
    std::cout << "Enter car company: ";
    std::getline(std::cin, userCompany);

    std::cout << "Enter car model: ";
    std::getline(std::cin, userModel);

    std::cout << "Enter manufacturing year: ";
    std::cin >> userYear;

    // Create a Car object
    Car myCar(userCompany, userModel, userYear);

    // Display the car information
    std::cout << "\nCar Information:\n";
    std::cout << "Company: " << myCar.getCompany() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

    return 0;
}
`