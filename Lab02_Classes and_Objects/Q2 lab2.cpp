#include <iostream>
using namespace std;
class BankAccount {
private:
    double balance;
    int transactions;
public:
    BankAccount() {
        balance = 0;
        transactions = 0;
    }
    void deposit(double amount) {
        balance += amount;
        transactions++;
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            transactions++;
        } else {
            cout << "Insufficient balance!\n";
        }
    }
    double getBalance() {
        return balance;
    }
    int getTransactions() {
        return transactions;
    }
};
int main() {
    BankAccount acc;
    int choice;
    double amount;
    do {
        cout << "\n1. Display balance";
        cout << "\n2. Display transactions";
        cout << "\n3. Display interest";
        cout << "\n4. Deposit";
        cout << "\n5. Withdraw";
        cout << "\n6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Balance: " << acc.getBalance() << endl;
                break;
            case 2:
                cout << "Transactions: " << acc.getTransactions() << endl;
                break;
            case 3:
                cout << "Interest feature not implemented.\n";
                break;
            case 4:
                cout << "Enter amount: ";
                cin >> amount;
                acc.deposit(amount);
                break;
            case 5:
                cout << "Enter amount: ";
                cin >> amount;
                acc.withdraw(amount);
                break;
            case 6:
                cout << "Program exited.\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }

    } while(choice != 6);

    return 0;
}

