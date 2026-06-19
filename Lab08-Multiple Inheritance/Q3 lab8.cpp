#include <iostream>
using namespace std;
class Account {
protected:
    double balance;
public:
    Account(double b = 0) {
        balance = b;
    }
    virtual void deposit(double amount) {
        balance += amount;
    }
    virtual void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!\n";
    }
    void checkBalance() {
        cout << "Balance: " << balance << endl;
    }
};
class InterestAccount : virtual public Account {
protected:
    double interestRate;
public:
    InterestAccount(double b = 0) : Account(b) {
        interestRate = 0.30; // 30%
    }

    void deposit(double amount) override {
        double interest = amount * interestRate;
        balance += amount + interest;
    }
};
class ChargingAccount : virtual public Account {
protected:
    double fee;
public:
    ChargingAccount(double b = 0) : Account(b) {
        fee = 25;
    }

    void withdraw(double amount) override {
        double total = amount + fee;
        if (total <= balance)
            balance -= total;
        else
            cout << "Insufficient balance (including fee)!\n";
    }
};
class ACI : public InterestAccount, public ChargingAccount {
public:
    ACI(double b = 0)
        : Account(b), InterestAccount(b), ChargingAccount(b) {}

    void transfer(double amount, Account &acc) {
        ChargingAccount::withdraw(amount); // apply fee
        acc.deposit(amount);
    }

    void display() {
        cout << "ACI Balance: " << balance << endl;
    }
};
int main() {
    ACI a(1000);
    InterestAccount i(500);
    ChargingAccount c(800);

    cout << "\n--- Initial Balances ---\n";
    a.display();
    i.checkBalance();
    c.checkBalance();

    cout << "\n--- Deposit in InterestAccount (30% interest) ---\n";
    i.deposit(100);
    i.checkBalance();

    cout << "\n--- Withdraw from ChargingAccount (Rs.25 fee) ---\n";
    c.withdraw(100);
    c.checkBalance();

    cout << "\n--- Transfer from ACI to InterestAccount ---\n";
    a.transfer(200, i);

    a.display();
    i.checkBalance();

    return 0;
}
