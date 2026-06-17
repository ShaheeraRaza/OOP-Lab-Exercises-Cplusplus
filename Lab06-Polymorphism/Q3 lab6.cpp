#include <iostream>
#include <cmath>
using namespace std;
class Vector
{
private:
    float x, y;
public:
    Vector(float x = 0, float y = 0)
    {
        this->x = x;
        this->y = y;
    }
    Vector operator+(const Vector& v)
    {
        return Vector(x + v.x, y + v.y);
    }
    Vector operator-(const Vector& v)
    {
        return Vector(x - v.x, y - v.y);
    }
    Vector operator*(float scalar)
    {
        return Vector(x * scalar, y * scalar);
    }
    Vector operator/(float scalar)
    {
        return Vector(x / scalar, y / scalar);
    }
    float magnitude()
    {
        return sqrt(x * x + y * y);
    }
    void display()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
int main()
{
    Vector v1(4, 3);
    Vector v2(2, 1);

    Vector sum = v1 + v2;
    cout << "Addition: ";
    sum.display();
    Vector diff = v1 - v2;
    cout << "Subtraction: ";
    diff.display();
    Vector mul = v1 * 2;
    cout << "Scalar Multiplication: ";
    mul.display();
    Vector div = v1 / 2;
    cout << "Scalar Division: ";
    div.display();
    cout << "Magnitude of v1: " << v1.magnitude() << endl;
    return 0;
}
