#include <iostream>
using namespace std;
class Account {
private:
    int account_no;
    double account_bal;
    int security_code;
    static int objectCount;
public:
    void initialize(int no, double bal, int code) {
        account_no = no;
        account_bal = bal;
        security_code = code;
        objectCount++;
    }
    void display() const {
        cout << "Account No: " << account_no << endl;
        cout << "Balance: " << account_bal << endl;
        cout << "Security Code: " << security_code << endl;
        cout << "---------------------" << endl;
    }
    static void showObjectCount() {
        cout << "Total Accounts Created: " << objectCount << endl;
    }
};
int Account::objectCount = 0;
int main() {
    Account a1, a2, a3;
    a1.initialize(101, 5000, 111);
    a2.initialize(102, 7000, 222);
    a3.initialize(103, 9000, 333);

    a1.display();
    a2.display();
    a3.display();

    Account::showObjectCount();
    return 0;
}

