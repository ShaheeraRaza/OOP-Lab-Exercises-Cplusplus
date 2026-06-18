#include <iostream>
using namespace std;
class Employee {
private:
    int salary;
public:
    Employee(int s) {
        salary = s;
    }

    friend class Payroll;

    void show() {
        cout << "Salary: " << salary << endl;
    }
};
class Payroll {
public:
    void updateSalary(Employee& e, int newSalary) {
        e.salary = newSalary;
    }
};
int main() {
    Employee e(50000);
    Payroll p;

    e.show();

    p.updateSalary(e, 60000);

    e.show();

    return 0;
}

