#include <iostream>
using namespace std;
class Complex {
private:
    double* real;
    double* imag;
public:
    // Default constructor
    Complex() {
        real = new double(0);
        imag = new double(0);
    }
    // Parameterized constructor
    Complex(double r, double i) {
        real = new double(r);
        imag = new double(i);
    }
    // Copy Constructor (Deep Copy)
    Complex(const Complex& other) {
        real = new double(*(other.real));
        imag = new double(*(other.imag));
    }
    void display() const {
        cout << *real << " + " << *imag << "i" << endl;
    }
    // Destructor
    ~Complex() {
        delete real;
        delete imag;
    }
};
int main() {
    Complex c1(3.5, 4.5);
    cout << "Original Object c1: ";
    c1.display();

    Complex c2 = c1;   // Copy constructor called
    cout << "Copied Object c2: ";
    c2.display();
    return 0;
}

