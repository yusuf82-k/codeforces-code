#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:  // Hidden from outside access
    double balance;
    string accountNumber;
    
public:   // Public interface
    // Constructor
    BankAccount(string accNum, double initialBalance = 0.0) 
        : accountNumber(accNum), balance(initialBalance) {}
    
    // Deposit method with validation
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " to account " << accountNumber << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    
    // Withdrawal method with validation
    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Withdrew $" << amount << " from account " << accountNumber << endl;
            return;
        }
        cout << "Withdrawal failed for $" << amount << " from account " << accountNumber << endl;
        return;
    }
    
    // Getter for balance (const member function)
    double getBalance() const {
        return balance;
    }
    
    // Getter for account number (const member function)
    string getAccountNumber() const {
        return accountNumber;
    }
    
    // Display account information
    void display() const {
        cout << "Account: " << accountNumber 
             << ", Balance: $" << balance << endl;
    }
};

int main() {
    // Create a bank account
    BankAccount myAccount("ACC123456", 1000.0);
    
    // Test deposit functionality
    myAccount.deposit(500.0);
    myAccount.deposit(-100.0);  // Invalid deposit
    
    // Test withdrawal functionality
    myAccount.withdraw(200.0);
    myAccount.withdraw(2000.0); // Should fail
    
    // Display account information
    myAccount.display();
    
    // Access balance through getter
    cout << "Current balance via getter: $" << myAccount.getBalance() << endl;
    
    return 0;
}