#include <iostream>
#include <string>
using namespace std;
//defining class 
class Bank {
public:
    void deposit(int amount) {
        cout << "Depositing " << amount << " in cash." << endl;
    }

    void deposit(float amount) {
        cout << "Depositing " << amount << " via digital payment." << endl;
    }

    void deposit(std::string upiId, int amount) {
        cout << "Depositing " << amount << " using UPI (" << upiId << ")." << endl;
    }
};

// Account class with operator overloading
class Account {
private:
    int accountNumber;
    float balance;

public:
    Account(int accountNumber, float balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    // Overload + operator for fund transfer
    Account operator+(Account& other) {
        float transferAmount = 3000.0f; 
        if (this->balance >= transferAmount) {
            this->balance -= transferAmount;
            other.balance += transferAmount;
            cout << "Transferring " << transferAmount << " from Account " << this->accountNumber << " to Account " << other.accountNumber << "..." << std::endl;
           cout << "New Account " << this->accountNumber << " Balance: " << this->balance << endl;
            cout << "New Account " << other.accountNumber << " Balance: " << other.balance << endl;
        } else {
            cout << "Insufficient balance in Account " << this->accountNumber << "." << endl;
        }
        return *this;
    }

    // Overload - operator for withdrawal
    Account operator-(float amount) {
        if (this->balance >= amount) {
            this->balance -= amount;
            cout << "Withdrawing " << amount << " from Account " << this->accountNumber << "..." << endl;
            cout << "Remaining Balance: " << this->balance <<endl;
        } else {
           cout << "Insufficient balance in Account " << this->accountNumber << "." << endl;
        }
        return *this;
    }

    // Function to display account details
    void displayDetails() {
     cout << "Account " << accountNumber << " Balance: " << balance << endl;
    }
};

int main() {
    Bank bank;

    bank.deposit(5000);
    bank.deposit(1500.75f);
    bank.deposit("gpay@upi", 2500);

    Account account1(1, 10000.0f);
    Account account2(2, 5000.0f);

    account1.displayDetails();
    account2.displayDetails();

    account1 + account2;

    account1 - 2000.0f;

    return 0;
}

