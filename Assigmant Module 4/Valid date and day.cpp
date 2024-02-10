#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    // Constructor to initialize member variables
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Member function to set the date
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Member function to get the day
    int getDay() const {
        return day;
    }

    // Member function to get the month
    int getMonth() const {
        return month;
    }

    // Member function to get the year
    int getYear() const {
        return year;
    }

    // Member function to validate if the date is valid
    bool isValidDate() const {
        // Basic validation: Check if the month, day, and year fall within reasonable ranges
        if (month < 1 || month > 12 || day < 1 || day > 31 || year < 0) {
            return false;
        }

        // Additional validation can be added based on specific rules (e.g., February can't have more than 29 days)
        // Add your specific validation rules here.

        return true;
    }
};

int main() {
    // Create a Date object using the constructor
    Date currentDate(31, 12, 2023);

    // Display the current date
    cout << "Current Date: " << currentDate.getDay() << "/" << currentDate.getMonth() << "/" << currentDate.getYear() << std::endl;

    // Validate if the date is valid
    if (currentDate.isValidDate()) {
        cout << "The current date is valid." << std::endl;
    } else {
        cout << "The current date is not valid." << std::endl;
    }

    // Set an invalid date (for demonstration purposes)
    currentDate.setDate(29, 2, 2023);

    // Display the updated date
    cout << "Updated Date: " << currentDate.getDay() << "/" << currentDate.getMonth() << "/" << currentDate.getYear() << std::endl;

    // Validate the updated date
    if (currentDate.isValidDate()) {
        cout << "The updated date is valid." << std::endl;
    } else {
        cout << "The updated date is not valid." << std::endl;
    }
}
