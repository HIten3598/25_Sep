#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    std::string accountNumber;
    std::string accountType;
    double balance;

public:
    // Member function to assign values
    void assignValues(std::string name, std::string accNumber, std::string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Member function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Please enter a positive value." << std::endl;
        }
    }

    // Member function to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew $" << amount << ". New balance: $" << balance << std::endl;
        } else if (amount > balance) {
            std::cout << "Insufficient funds. Withdrawal not allowed." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount. Please enter a positive value." << std::endl;
        }
    }

    // Member function to display name and balance
    void display() {
        std::cout << "Account Holder: " << depositorName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Current Balance: $" << balance << std::endl;
    }
};

int main() {
    // Example usage:
    // Create an instance of BankAccount
    BankAccount account1;

    // Assign values
    account1.assignValues("Hiten SOndagar", "459063429009", "Savings", 0);

    // Display initial balance
    account1.display();

    // Deposit some amount
    account1.deposit(1000);

    // Withdraw some amount
    account1.withdraw(500);

    // Display updated balance
    account1.display();

    return 0;
}
