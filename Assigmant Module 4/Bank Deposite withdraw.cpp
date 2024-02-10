#include <iostream>

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize the account number and balance
    BankAccount(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    // Member function to get the account number
    int getAccountNumber() const {
        return accountNumber;
    }

    // Member function to get the balance
    double getBalance() const {
        return balance;
    }

    // Member function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit of $" << amount << " successful. New balance: $" << balance << std::endl;
        } else {
            std::cerr << "Error: Invalid deposit amount. Please enter a positive amount." << std::endl;
        }
    }

    // Member function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful. New balance: $" << balance << std::endl;
        } else if (amount > balance) {
            std::cerr << "Error: Insufficient funds. Withdrawal amount exceeds the balance." << std::endl;
        } else {
            std::cerr << "Error: Invalid withdrawal amount. Please enter a positive amount." << std::endl;
        }
    }
};

int main() {
    // Example usage of the BankAccount class
    int accountNum;
    double initialBalance;

    // Get account information from the user
    std::cout << "Enter account number: ";
    std::cin >> accountNum;

    std::cout << "Enter initial balance: $";
    std::cin >> initialBalance;

    // Create a BankAccount object
    BankAccount myAccount(accountNum, initialBalance);

    // Display account information
    std::cout << "\nAccount Information:\n";
    std::cout << "Account Number: " << myAccount.getAccountNumber() << std::endl;
    std::cout << "Initial Balance: $" << myAccount.getBalance() << std::endl;

    // Perform deposit and withdrawal operations
    double depositAmount, withdrawAmount;
    std::cout << "\nEnter amount to deposit: $";
    std::cin >> depositAmount;
    myAccount.deposit(depositAmount);

    std::cout << "\nEnter amount to withdraw: $";
    std::cin >> withdrawAmount;
    myAccount.withdraw(withdrawAmount);

    return 0;
}
