#include<iostream>
using namespace std;
class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    string accountType;
    double balance;
    int transactionHistory[100]; 
    int transactionCount;

public:
    // Default Constructor
    BankAccount() {
        accountHolder = "Unknown";
        accountNumber = 0;
        accountType = "Savings";
        balance = 0.0;
        transactionCount = 0;
    }

    // Parameterized Constructor
    BankAccount(string holder, int number, string type, double initialBalance) {
        accountHolder = holder;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
        transactionCount = 0;
    }

    // Accessor Methods
    string getAccountHolder() {
        return accountHolder;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    string getAccountType() {
        return accountType;
    }

    double getBalance() {
        return balance;
    }

    // Mutator Method to change Account Type
    void changeAccountType(string newType) {
        accountType = newType;
        cout << "Account type updated to " << accountType << endl;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            transactionHistory[transactionCount++] = amount;  // Store the deposit
            cout << "Deposited " << amount << ". New balance: " << balance << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            transactionHistory[transactionCount++] = -amount;  
            cout << "Withdraw " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    //  display account details
    void displayAccountDetails() {
        cout << "\nAccount Details:\n";
        cout << "Holder: " << accountHolder << "\n";
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Type: " << accountType << "\n";
        cout << "Balance: " << balance << endl;
    }

    //  transaction history
    void showTransactionHistory() {
        cout << "Transaction History:\n";
        for (int i = 0; i < transactionCount; i++) {
            if (transactionHistory[i] > 0) {
                cout << "+" << transactionHistory[i] << endl; // Deposit (positive value)
            } else {
                cout << transactionHistory[i] << endl; // Withdrawal (negative value)
            }
        }
    }
};

int main() {
    BankAccount account1("Sanika Sathe", 123456, "Savings", 5000);
    
    // Display initial account details
    account1.displayAccountDetails();
    
    // Deposit money
    account1.deposit(2000);
    
    // Withdraw money
    account1.withdraw(1500);
    
    // Change account type
    account1.changeAccountType("Current");

    // Display updated account details
    account1.displayAccountDetails();

    // Show transaction history
    account1.showTransactionHistory();
    
    return 0;
}

