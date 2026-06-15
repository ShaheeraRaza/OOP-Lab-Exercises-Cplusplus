#include <iostream>
using namespace std;
class Student {
private:
    const int rollNo;   // cannot change
    string name;
    double marks;
public:
    // Constructor
    Student(int r, string n, double m) : rollNo(r), name(n), marks(m) {}
    // Setters (allowed for non-const data)
    void setName(string n) {
        name = n;
    }
    void setMarks(double m) {
        marks = m;
    }
    int getRollNo() const {
        return rollNo;
    }
    string getName() const {
        return name;
    }
    double getMarks() const {
        return marks;
    }
    void display() const {
        cout << "Roll No (constant): " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    Student s1(1, "Ali", 85.5);
    s1.setName("Ayaan");
    s1.setMarks(90);

    s1.display();
    return 0;
}













