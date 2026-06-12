#include <iostream>
#include<cstring>
using namespace std;
class Employee {
private:
    char* firstName;
    string lastName;
    int monthlySalary;
public:
    void setData(const char* f, string l, int s) {
        firstName = new char[strlen(f)+1];
        strcpy(firstName, f);
        lastName = l;
        if (s > 0)
            monthlySalary = s;
        else
            monthlySalary = 0;
    }
    int yearlySalary() {
        return monthlySalary * 12;
    }
    void giveRaise() {
        monthlySalary = monthlySalary * 1.10;
    }
    void display() {
        cout << firstName << " " << lastName << endl;
        cout << "Yearly Salary: " << yearlySalary() << endl;
        cout << "--------------------\n";
    }
};

int main() {
    Employee e1, e2;
    e1.setData("Ali", "Khan", 30000);
    e2.setData("Sara", "Ahmed", 40000);
    cout << "Before raise:\n";
    e1.display();
    e2.display();

    e1.giveRaise();
    e2.giveRaise();

    cout << "\nAfter 10% raise:\n";
    e1.display();
    e2.display();
    return 0;
}

