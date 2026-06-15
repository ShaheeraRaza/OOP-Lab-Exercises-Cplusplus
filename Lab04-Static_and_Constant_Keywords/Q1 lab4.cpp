#include <iostream>
#include <cstring>
using namespace std;
class Employee {
private:
    char* EmployeeName;
    const int EmployeeId; 
public:
    Employee(const char* name, int id) : EmployeeId(id) {
        EmployeeName = new char[strlen(name) + 1];
        strcpy(EmployeeName, name);
    }
    // Setter (name can change)
    void setName(const char* name) {
        delete[] EmployeeName;
        EmployeeName = new char[strlen(name) + 1];
        strcpy(EmployeeName, name);
    }
    // Getters
    const char* getName() const {
        return EmployeeName;
    }
    int getId() const {
        return EmployeeId;
    }
    // Destructor
    ~Employee() {
        delete[] EmployeeName;
    }
};
int main() {
    Employee Employee1("Ali", 101);
    Employee Employee2("Sara", 102);
    Employee Employee3("Ahmed", 103);
    // Changing names
    Employee1.setName("Ayaan");
    Employee2.setName("Sana");
    
    cout << "Employee 1: " << Employee1.getName() << " , ID: " << Employee1.getId() << endl;
    cout << "Employee 2: " << Employee2.getName() << " , ID: " << Employee2.getId() << endl;
    cout << "Employee 3: " << Employee3.getName() << " , ID: " << Employee3.getId() << endl;
    return 0;
}






