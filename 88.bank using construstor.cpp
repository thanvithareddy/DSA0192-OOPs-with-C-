#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string holder, double initialBalance) {
        accountHolder = holder;
        balance = initialBalance;
        cout << "Account created for " << accountHolder << " with balance $" << balance << endl;
    }

    ~BankAccount() {
        cout << "Account of " << accountHolder << " closed." << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds." << endl;
        } else {
            balance -= amount;
            cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account("John Doe", 1000.0);
    account.deposit(500);
    account.withdraw(200);
    account.withdraw(1500);
    return 0;
}
