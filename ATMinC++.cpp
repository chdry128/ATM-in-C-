#include <iostream>
#include <string>

using namespace std;

class ATM {
    string account_name;
    int balance;

public:
    ATM(string name, int initial_balance)
        : account_name(name), balance(initial_balance) {}

    void deposit(int amount) {
        balance += amount;
        cout << amount << " deposited to the account." << endl;
    }

    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << amount << " withdrawn from the account." << endl;
        }
    }

    void check_balance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    // Create a new ATM account
    ATM account("John Doe", 1000);

    // Deposit money to the account
    account.deposit(500);

    // Withdraw money from the account
    account.withdraw(200);

    // Check the current balance
    account.check_balance();

    return 0;
}
