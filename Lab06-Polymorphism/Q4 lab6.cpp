#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    string occupation;
public:
    Person()
    {
        occupation = "person";
    }
    virtual void Draw()
    {
        cout << "A person can draw in many ways" << endl;
    }
    virtual ~Person() {}
};
class Artist : public Person
{
public:
    Artist()
    {
        occupation = "artist";
    }
    void Draw() override
    {
        cout << "An artist can draw with a paint brush" << endl;
    }
};
class Gunman : public Person
{
public:
    Gunman()
    {
        occupation = "gunman";
    }
    void Draw() override
    {
        cout << "A gunman draws a gun to shoot" << endl;
    }
};
int main()
{
    Person* arr[3];
    arr[0] = new Person();
    arr[1] = new Artist();
    arr[2] = new Gunman();
    for (int i = 0; i < 3; i++)
    {
        arr[i]->Draw();
    }
    for (int i = 0; i < 3; i++)
    {
        delete arr[i];
    }
    return 0;
}
