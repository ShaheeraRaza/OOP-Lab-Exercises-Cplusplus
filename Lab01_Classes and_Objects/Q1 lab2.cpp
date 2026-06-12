#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int roll_no;
    int semester;
    char section;
    
    void setData(string n, int r, int s, char sec) {
        name = n;
        roll_no = r;
        semester = s;
        section = sec;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Semester: " << semester << endl;
        cout << "Section: " << section << endl;      
    }
};
int main() {
    Student s[4];
    s[0].setData("Ali", 101, 2, 'A');
    s[1].setData("Sara", 102, 3, 'B');
    s[2].setData("Ahmed", 103, 1, 'A');
    s[3].setData("Noor", 104, 4, 'C');
    cout << "Students from Section A:"<<endl;

    for (int i = 0; i < 4; i++) {
        if (s[i].section == 'A') {
            s[i].display();
        }
    }
    return 0;
}


